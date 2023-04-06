#include <iostream>

bool is_match(std::string text, std::string word, int startPos) {
    for (int i = 0; i < word.length(); ++i) {
        if (i + startPos >= text.length() || word[i] != text[i + startPos]) {
            return false;
        }
    }
    return true;
}

int find(std::string text, std::string word) {
    for (int startPos = 0; startPos < text.length(); ++startPos) {
        if (is_match(text, word, startPos)) {
            return startPos;
        }
    }
    return -1;
}

void found() { std::cout << "Found!" << std::endl; }

int main() {
    std::string text;
    std::string word;

    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the word: ";
    std::cin >> word;

    if (find(text, word) >= 0) {
        found();
    }
}