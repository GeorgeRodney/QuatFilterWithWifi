# Connect to the wifi server 
import socket

# Create a UDP socket
# AF_INIT -> IPv4 xxx.x.x.x
# SOCK_GRAM -> UDP socket. Dont Connect. Just listen.
server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Bind to an address and port
# LISTEN TO PORT FOR MSGS FROM IPv4
server_socket.bind(('127.0.0.1', 65432))

print("UDP server is running...")

while True:
    # Receive message from client
    data, address = server_socket.recvfrom(1024)
    print(f"Received message: {data.decode()} from {address}")
    
    # Send a response
    server_socket.sendto(b"Acknowledged", address)
