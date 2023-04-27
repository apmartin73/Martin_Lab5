// Martin_Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> cipher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

// Function to translate a single character using the cipher
char translate(char c) {
    if (c >= 'A' && c <= 'Z') {
 
        return cipher[c - 'A'];
    }
    else if (c >= 'a' && c <= 'z') {

        char upperCaseLetter = c - 32;
        char upperCaseCode = cipher[upperCaseLetter - 'A'];
        return upperCaseCode + 32;
    }
    else {
 
        return c;
    }
}

int main() {
    // user writes message
    string input;
    cout << "Input text to cypher: ";
    getline(cin, input);

    // translation
    string encoded;
    for (char c : input) {
        encoded += translate(c);
    }

    // write out message
    cout << "Encoded Message: " << encoded << endl;

    return 0;
}