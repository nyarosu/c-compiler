#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::ifstream; // For File I/O

void checkBuffer(std::string &bufferToCheck, std::vector<std::string> &tokens);

// The goal of the lexer is to scan the file, and turn it into a list of 'tokens', like braces, parentheses, keywords, identifiers etc
std::vector<std::string> lex(std::string filePath) {

    std::vector<std::string> tokens; // This holds our result

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
void checkBuffer(std::string &bufferToCheck, std::vector<std::string> &tokens) {
    //todo
}