#include <iostream>
#include <string>

int main() {
    // Simulate accessing a secret (e.g., API key) from environment variable
    const char* api_key = std::getenv("API_KEY");
    if (api_key) {
        std::cout << "API Key: " << api_key << std::endl;
    } else {
        std::cout << "API Key not found!" << std::endl;
    }
    return 0;
}