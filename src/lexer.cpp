#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::ifstream; // For File I/O

// The goal of the lexer is to scan the file, and turn it into a list of 'tokens', like braces, parentheses, keywords, identifiers etc
std::vector<std::string> lex(std::string filePath) {

    std::vector<std::string> tokens; // This holds our result

    ifstream srcfile;
    srcfile.open(filePath)

    // Make sure file open succeeded
    if (!srcfile) {
        throw("File could not be opened");
    }
    std::string buffer;
    while (!srcfile.eof()) {


    }



}