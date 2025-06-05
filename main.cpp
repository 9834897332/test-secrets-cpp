#include <iostream>
#include <cstdlib>

int main() {
    const char* secret = std::getenv("SECRET_CONFIG_FILE");
    if (secret)
        std::cout << "Secret (from env): " << secret << std::endl;
    else
        std::cerr << "Secret not found in environment." << std::endl;
    return 0;
}
