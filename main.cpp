// main.cpp
#include <iostream>
#include <cstdlib>

int main() {
    const char* secret = std::getenv("MY_SECRET_KEY");
    if (secret)
        std::cout << "Runtime secret: " << secret << std::endl;
    else
        std::cerr << "Secret not found in env!" << std::endl;
    return 0;
}
