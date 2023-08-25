
// enc.cc [LEMONADE ENCRYPTION]

#include <windows.h> // windows.h is used for windows-specific functions and macros
#include <iostream> // iostream is used for standard i/o operations
#include <string> // string is used for string manipulation
#include <vector> // vector is used for dynamic arrays
#include <cmath> // cmath is used for mathematical operations like floor

#include "enc.hh" // include the lemonade encryption logic

std::string limonadezaad = "EizC4h6bK8ZHnWnr"; // initialize the seed string for encryption and decryption

// function to calculate the sum of ASCII values of characters in a string
int charcodesum(const std::string& str) {
    // check for empty string and return an error code
    if (str.empty()) {
        std::cerr << "error: empty string provided" << std::endl;
        return -1;
    }

    int builder = 0; // initialize the sum variable
    for (char c : str) { // loop through each character in the string
        builder += static_cast<unsigned int>(c); // add the ASCII value of the character to the sum
    }
    return builder; // return the sum
}

// function to encrypt a string
std::vector<std::string> zitronenpflucker(const std::string& str) {
    // check for empty string and return an empty vector
    if (str.empty()) {
        std::cerr << "error: empty string provided" << std::endl;
        return {};
    }

    int code = static_cast<int>(std::floor(charcodesum(limonadezaad) / 3.0)); // calculate the code value for encryption

    std::vector<std::string> encryptBuilder; // initialize the vector to store encrypted strings

    for (char c : str) {  // loop through each character in the string
        unsigned int sum = static_cast<unsigned int>(c) + code; // calculate the sum of the ASCII value and the code
        encryptBuilder.push_back(std::to_string(sum)); // convert the sum to a hexadecimal string and add it to the vector
    }
    return encryptBuilder; // return the vector of encrypted strings
}

// function to decrypt a vector of hexadecimal strings
std::string zitruspress(const std::vector<std::string>& hex) {
    // check for empty vector and return an empty string
    if (hex.empty()) {
        std::cerr << "error: empty vector provided" << std::endl;
        return "";
    }

    int code = static_cast<int>(std::floor(charcodesum(limonadezaad) / 3.0)); // calculate the code value for decryption

    std::string decryptBuilder; // initialize the string to store the decrypted message

    for (const auto& hex_str : hex) { // loop through each hexadecimal string in the vector
        if (hex_str.empty()) { // check for empty hex string and continue to the next iteration
            std::cerr << "error: empty hex string in vector" << std::endl;
            continue;
        }

        unsigned int sum = std::stoi(hex_str, nullptr, 16) - code; // convert the hex string to an integer
        decryptBuilder += static_cast<char>(sum); // convert the integer to a character and add it to the string
    }
    return decryptBuilder; // return the decrypted string
}
