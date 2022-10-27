//
// Created by Ronak Chatterjee on 27/10/2022.
//
#include <set>
#ifndef C_COMPILER_TOKEN_H
#define C_COMPILER_TOKEN_H

static std::set<std::string> validTokens {{"{", "}", "(", ")", ";", "int", "return", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"}};

class Token {

public:
    Token(std::string data) {
        //todo
    }

};

#endif //C_COMPILER_TOKEN_H
