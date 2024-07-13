#include <iostream>
#include <string> 
#include "functions.hpp"

int main() {

    std::string word = "broccoli";
    std::string text = "I am going to buy broccoli, do you want broccoli?";

    std::string* r_text = &text;
    std::string* r_word = &word;

    bleep(word, text);

    // Print the modified text
    std::cout << "Modified text: " << text << "\n";

    return 0;
}