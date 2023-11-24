#include <iostream>
#include <map>
#include <string>
#include <random>

// Generate a random ID for anonymization
std::string generateRandomID() {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    const int idLength = 10; // Adjust the length as needed
    std::string id;

    for (int i = 0; i < idLength; ++i) {
        id.push_back(alphanum[rand() % (sizeof(alphanum) - 1)]);
    }

    return id;
}

int main() {
    std::map<std::string, std::string> anonymizedData;

    // Original data
    anonymizedData["John Smith"] = generateRandomID();
    anonymizedData["Alice Johnson"] = generateRandomID();
    anonymizedData["Bob Brown"] = generateRandomID();

    // Display anonymized data
    std::cout << "Anonymized Data:\n";
    for (const auto& pair : anonymizedData) {
        std::cout << "Original: " << pair.first << " Anonymized: " << pair.second << "\n";
    }

    return 0;
}
