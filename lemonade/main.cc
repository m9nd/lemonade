
#include <windows.h>
#include <iostream>
#include <vector>

#include "enc\enc.hh"

int main() {
    std::string message = "hello, world!";

    // encrypt the message
    std::vector<std::string> encrypted = zitronenpflucker(message);

    // display the encrypted message
    std::cout << "encrypted message:" << std::endl;
    for (const auto& hex : encrypted) {
        std::cout << hex << " ";
    }
    std::cout << std::endl;

    // decrypt the message
    std::string decrypted = zitruspress(encrypted);

    // display the decrypted message
    std::cout << "decrypted message: " << decrypted << std::endl;

    // debugging statement
    std::cout << "program reached the end." << std::endl;

    return 0;
}