#include <iostream>
#include <string> 
#include "functions.hpp"

std::string bleep(std::string& r_word, std::string& r_text) {
    for (int i = 0; i < r_text.size(); ++i) {
        for (int j = 0; j < r_word.length(); ++j) {
            r_word[j] = '*';  // Replace each character in r_word with '*'
        }
    }

    return r_text;
}
