// Write a program which reads a text from the keyboard and displays the following information on the screen in two columns:
// (a) Number of lines
// (b) Number of words
// (c) Number of characters
// • Strings should be left-justified and numbers should be right-justified in a suitable field width.

#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    int lines = 0, words = 1, characters = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '\n') {
            lines++;
        }
        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t') {
            words++;
        }
        characters++;
    }
    cout << setw(15) << "Number of lines" << right << setw(8) << lines << endl;
    cout << setw(15) << "Number of words" << right << setw(8) << words << endl;
    cout << setw(15) << "Number of characters" << right << setw(8) << characters << endl;
    return 0;
}