#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include "token.h"

using std::ifstream; // For File I/O

void checkBuffer(std::string &bufferToCheck, std::vector<Token> &tokens);

// The goal of the lexer is to scan the file, and turn it into a list of 'tokens', like braces, parentheses, keywords, identifiers etc
std::vector<Token> lex(std::string filePath) {

    std::vector<Token> tokens; // This holds our result

    ifstream srcfile;
    srcfile.open(filePath);

    // Make sure file open succeeded
    if (!srcfile) {
        throw("File could not be opened");
    }
    std::string buffer;
    char currentChar;
    while (!srcfile.eof()) {
        srcfile >> currentChar;
        buffer += currentChar;
        checkBuffer(buffer, tokens);
    }

    return tokens;
}

// Checks if bufferToCheck is a valid token, and adds it to tokens if it is, then clears the buffer (if valid token).
void checkBuffer(std::string &bufferToCheck, std::vector<Token> &tokens) {

    if (validTokens.find(bufferToCheck) == validTokens.end()) {
        tokens.push_back(bufferToCheck);
    }

    // If our buffer ends in a whitespace, and what was before it wasn't caught above, it must be an identifier
    else if (bufferToCheck[bufferToCheck.length()]) {
        //todo
    }
}

int main() {
    return 0;
}