// Program to use the map container to count the frequency of words in a text

#include <iostream>
#include <map>
#include <string>
#include <sstream>

int main() {
    std::string text = "This is a sample text with some sample words.";
    std::istringstream iss(text);
    std::map<std::string, int> wordCount;

    std::string word;
    while (iss >> word) {
        wordCount[word]++;
    }

    std::cout << "Word frequency:" << std::endl;
    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
