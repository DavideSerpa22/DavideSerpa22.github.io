import socket

HOST = "127.0.0.1"
PORT = 5000

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server:
    server.bind((HOST, PORT))
    server.listen(1)
    print(f"Server in ascolto su {HOST}:{PORT}")

    connection, address = server.accept()
    with connection:
        print(f"Client connesso: {address}")
        data = connection.recv(1024)
        if data:
            connection.sendall(b"ACK: messaggio ricevuto")
