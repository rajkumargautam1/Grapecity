#include <iostream>
#include <string>

using namespace std;

// Function to reverse a word
string reverseWord(const string& word) {
    string reversedWord = "";
    for (int i = word.length() - 1; i >= 0; i--) {
        reversedWord += word[i];
    }
    return reversedWord;
}

int main() {
    string inputSentence;
    
    // Ask the user to enter a sentence
    cout << "Enter a sentence: ";
    getline(cin, inputSentence); // Read a line of input

    string reversedSentence = "";
    string word = "";

    for (char c : inputSentence) {
        if (c == ' ') {
            // Found a space, so reverse the word and add it to the reversed sentence
            reversedSentence += reverseWord(word) + " ";
            word = ""; // Reset the word
        } else {
            // Add characters to the current word
            word += c;
        }
    }

    // Reverse the last word and add it to the reversed sentence
    reversedSentence += reverseWord(word);

    cout << "Reversed sentence: " << reversedSentence << endl;

    return 0;
}
