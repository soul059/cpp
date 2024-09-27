#include <iostream>
#include <string>
#include <vector>

const int HASH_SIZE = 26;

void insertIntoHashTable(std::vector<char>& hashTable, char data) {
    int hashLocation = data % HASH_SIZE;
    while (hashTable[hashLocation] != '\0') {
        hashLocation = (hashLocation + 1) % HASH_SIZE;
    }
    hashTable[hashLocation] = data;
}

void displayHashTable(const std::vector<char>& hashTable) {
    for (int i = 0; i < HASH_SIZE; ++i) {
        if (hashTable[i] != '\0') {
            std::cout << "Index " << i << ": " << hashTable[i] << std::endl;
        } else {
            std::cout << "Index " << i << ": " << "Empty" << std::endl;
        }
    }
}

int main() {
    std::string data = "exampledata";
    std::vector<char> hashTable(HASH_SIZE, '\0');

    for (char c : data) {
        insertIntoHashTable(hashTable, c);
    }

    displayHashTable(hashTable);

    return 0;
}