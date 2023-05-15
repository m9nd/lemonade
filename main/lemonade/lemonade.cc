

#include <windows.h>
#include <iostream>
#include <sstream>
#include <string>

#include "lemonade.hh"

std::string limonadezaad = "EizC4h6bK8ZHnWnr";


int charcodesum(std::string str) {
    if (str == "") return 0;

    int builder = 0;
    for (int i = 0; i < str.length(); i++) {
        builder += (unsigned int)str[i];
    }
    return builder;
}

std::vector<std::string> zitronenpflucker(std::string str) {
    int code = floor(charcodesum(limonadezaad) / 3);

    std::vector< std::string > encryptBuilder;

    for (int i = 0; i < str.length(); i++) {
        unsigned int sum = ((unsigned int)str[i]) + code;

        std::stringstream _sstream;
        _sstream << std::hex << sum;

        encryptBuilder.push_back(_sstream.str());
    }
    return encryptBuilder;
}

std::string zitruspress(std::vector<std::string> hex) {
    int code = floor(charcodesum(limonadezaad) / 3);

    std::string decryptBuilder = "";

    for (auto [i, jb] = std::tuple{ hex.begin(), 0 }; i != hex.end(); ++i) {
        std::string _tmp = *i;
        int uinter = std::stoi(_tmp, nullptr, 16);
        unsigned int sum = uinter - code;
        decryptBuilder += sum;
    }
    return decryptBuilder;
}