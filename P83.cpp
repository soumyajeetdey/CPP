// This is a skeleton code for a simple HTTP server.
// You need to handle HTTP request parsing and response generation for a complete HTTP server.

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <cstring>

int main() {
    int serverSocket, clientSocket;
    struct sockaddr_in serverAddr, clientAddr;
    char buffer[1024];

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket < 0) {
        std::cerr << "Error in socket creation" << std::endl;
        return -1;
    }

    memset(&serverAddr, '\0', sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(8080);

    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Error in binding" << std::endl;
        return -1;
    }

    if (listen(serverSocket, 10) < 0) {
        std::cerr << "Error in listening" << std::endl;
        return -1;
    }

    socklen_t addrSize = sizeof(clientAddr);
    clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &addrSize);
    if (clientSocket < 0) {
        std::cerr << "Error in accepting connection" << std::endl;
        return -1;
    }

    recv(clientSocket, buffer, sizeof(buffer), 0);
    std::cout << "HTTP Request: " << buffer << std::endl;

    close(serverSocket);
    close(clientSocket);

    return 0;
}
