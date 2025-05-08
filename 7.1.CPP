#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Structure to hold word and frequency
struct WordEntry {
    char* word;
    int count;
};

// Convert a string to lowercase (in-place)
void toLowerCase(char* str) {
    for (int i = 0; str[i]; ++i)
        str[i] = tolower(str[i]);
}

// Check if a character is part of a word
bool isWordChar(char ch) {
    return isalnum(ch); // accepts letters and numbers
}

int main() {
    const int MAX_INPUT = 1000;
    char input[MAX_INPUT];

    cout << "Enter a paragraph:\n";
    cin.getline(input, MAX_INPUT);

    // Allocate initial array size for storing words
    int capacity = 10;
    int size = 0;
    WordEntry* words = new WordEntry[capacity];

    // Parse and tokenize input
    char* token = strtok(input, " .,;:!?()[]{}\"\n\t\r");

    while (token != nullptr) {
        toLowerCase(token);

        // Search for the word in the existing array
        bool found = false;
        for (int i = 0; i < size; ++i) {
            if (strcmp(words[i].word, token) == 0) {
                words[i].count++;
                found = true;
                break;
            }
        }

        if (!found) {
            // If capacity is reached, expand the array
            if (size == capacity) {
                capacity *= 2;
                WordEntry* newWords = new WordEntry[capacity];
                for (int i = 0; i < size; ++i)
                    newWords[i] = words[i];
                delete[] words;
                words = newWords;
            }

            // Add new word to the array
            words[size].word = new char[strlen(token) + 1];
            strcpy(words[size].word, token);
            words[size].count = 1;
            size++;
        }

        token = strtok(nullptr, " .,;:!?()[]{}\"\n\t\r");
    }

    // Output word frequencies
    cout << "\nWord Frequencies:\n";
    for (int i = 0; i < size; ++i) {
        cout << words[i].word << ": " << words[i].count << endl;
    }

    // Clean up allocated memory
    for (int i = 0; i < size; ++i) {
        delete[] words[i].word;
    }
    delete[] words;
cout<<endl<<" 24ce131 _ hetvi ";
    return 0;
}
