
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

#include "enc.hh"

std::string limonadezaad = "EizC4h6bK8ZHnWnr";

// function to calculate the sum of ASCII values of characters in a string
int charcodesum(const std::string& str) {
    if (str.empty()) {
        // handle empty string
        std::cerr << "error: empty string provided" << std::endl;
        return -1;
    }

    int builder = 0;
    for (char c : str) {
        builder += static_cast<unsigned int>(c);
    }
    return builder;
}

// function to encrypt a string
std::vector<std::string> zitronenpflucker(const std::string& str) {
    if (str.empty()) {
        // handle empty string
        std::cerr << "error: empty string provided" << std::endl;
        return {};
    }

    int code = static_cast<int>(std::floor(charcodesum(limonadezaad) / 3.0));

    std::vector<std::string> encryptBuilder;

    for (char c : str) {
        unsigned int sum = static_cast<unsigned int>(c) + code;
        std::stringstream ss;
        ss << std::hex << sum;
        encryptBuilder.push_back(ss.str());
    }
    return encryptBuilder;
}

// function to decrypt a vector of hexadecimal strings
std::string zitruspress(const std::vector<std::string>& hex) {
    if (hex.empty()) {
        // handle empty vector
        std::cerr << "error: empty vector provided" << std::endl;
        return "";
    }

    int code = static_cast<int>(std::floor(charcodesum(limonadezaad) / 3.0));

    std::string decryptBuilder;

    for (const auto& hex_str : hex) {
        if (hex_str.empty()) {
            // handle empty hex string
            std::cerr << "error: empty hex string in vector" << std::endl;
            continue;
        }

        unsigned int sum = std::stoi(hex_str, nullptr, 16) - code;
        decryptBuilder += static_cast<char>(sum);
    }
    return decryptBuilder;
}
