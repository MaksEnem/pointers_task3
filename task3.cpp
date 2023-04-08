#include <iostream>

int main() {

    char text[] = "Hello world";
    char word[] = "wor";   
    
    bool found = false;

    int startPos = 0;
    while (*(text + startPos) != '\0') {

        bool match = true;
        int i = 0;
        while (*(word + i) != '\0') {

            if (i + startPos >= sizeof(text) || word[i] != text[i + startPos]) {
                match = false;
                break;
            }
            ++i;
        }
        if (match) {
            found = true;
            break;
        }
        ++startPos;
    }
    if (found) {
        std::cout << "Yes\n";
    }
    else {
        std::cout << "No\n";
    }
}