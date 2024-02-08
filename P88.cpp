// Program to implement a dictionary using a trie

#include <iostream>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() : root(new TrieNode()) {}

    void insert(const std::string& word) {
        TrieNode* current = root;
        for (char c : word) {
            if (current->children.find(c) == current->children.end()) {
                current->children[c] = new TrieNode();
            }
            current = current->children[c];
        }
        current->isEndOfWord = true;
    }

    bool search(const std::string& word) {
        TrieNode* current = root;
        for (char c : word) {
            if (current->children.find(c) == current->children.end()) {
                return false;
            }
            current = current->children[c];
        }
        return current->isEndOfWord;
    }
};

int main() {
    Trie dictionary;
    dictionary.insert("apple");
    dictionary.insert("banana");
    dictionary.insert("orange");

    std::cout << "Search for 'apple': " << (dictionary.search("apple") ? "Found" : "Not found") << std::endl;
    std::cout << "Search for 'grape': " << (dictionary.search("grape") ? "Found" : "Not found") << std::endl;

    return 0;
}
