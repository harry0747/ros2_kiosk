import socket
import threading


class TCPClient:
    def __init__(self, host, port):
        self.server_address = host
        self.server_port = port
        self.socket = None
        self.connected = False
        self.connect()

        # 시작 시 receive_thread 실행
        self.receive_thread = threading.Thread(target=self.receive)
        self.receive_thread.daemon = True
        self.receive_thread.start()

        self.or_callback = None
        self.tr_callback = None
        self.os_callback = None
        
    def order_call_callback(self, callback):
        print("robot_status_callback")
        self.or_callback = callback    
    
    def order_status_callback(self, callback):
        print("order status callback")
        self.os_callback = callback

    def tables_call_callback(self, callback):
        print("tables call callback")
        self.tr_callback = callback

    def connect(self):
        try:
            self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self.socket.connect((self.server_address, self.server_port))
            self.connected = True
            print("Connected to server:", self.server_address, "port:", self.server_port)
        except Exception as e:
            print("Error:", e)
            
    def send(self, data):
        message = f"{data}"
        try:
            if self.socket:
                self.socket.send(message.encode())
            else:
                print("Socket is not connected.")
        except Exception as e:
            print("Error:", e)

    def receive(self):
        while self.connected:
            try:
                if self.socket:
                    response = self.socket.recv(1024).decode('utf-8')
                    if response:
                        cmd, data = response.split(',', 1)
                        if cmd == 'OR':
                            if data:
                                print("order call successfully")
                                if self.order_call_callback:
                                    self.or_callback(response)
                            else:
                                print("no order callback data")
                        if cmd == 'TR':
                            if data:
                                print("tables call successfully")
                                if self.order_call_callback:
                                    self.or_callback(response)
                            else:
                                print("no tables callback data")
                        elif cmd == 'OS':
                            if data:
                                print("order status successfully")
                                if self.order_status_callback:
                                    self.os_callback(response)
                            else:
                                print("no order status data")
                                
                else:
                    print("Socket is not connected.")
            except Exception as e:
                print("Error:", e)
                self.connected = False
                self.close()
            except KeyboardInterrupt:
                self.close()
                pass
            
    def close(self):
        self.connected = False
        try:
            if self.socket:
                self.socket.close()
                print("Connection closed.")
        except Exception as e:
            print("Error:", e)
