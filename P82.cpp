// This is a skeleton code for a file transfer program using socket programming.
// You need to run the server and client separately for file transfer functionality.

// Server side
// (Similar to chat application server code)

// Client side
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fstream>
#include <cstring>

int main() {
    int clientSocket;
    struct sockaddr_in serverAddr;
    char buffer[1024];

    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        std::cerr << "Error in socket creation" << std::endl;
        return -1;
    }

    memset(&serverAddr, '\0', sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddr.sin_port = htons(8080);

    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Error in connection" << std::endl;
        return -1;
    }

    std::ifstream file("example.txt", std::ios::binary);
    if (!file) {
        std::cerr << "Error in opening file" << std::endl;
        return -1;
    }

    while (file.good()) {
        file.read(buffer, sizeof(buffer));
        send(clientSocket, buffer, file.gcount(), 0);
    }
    file.close();
    std::cout << "File sent to server" << std::endl;

    close(clientSocket);

    return 0;
}
