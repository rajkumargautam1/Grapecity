#include<bits/stdc++.h>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);// Convert the character to lowercase
        cout<<ch;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    getline(cin, input); // Read a line of input

    int vowelCount = countVowels(input);
    cout << vowelCount << endl;

    return 0;
}
