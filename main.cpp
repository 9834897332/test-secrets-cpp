#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("secret_config.cpp");
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::cout << line << std::endl; // just to verify it works
        }
        file.close();
    } else {
        std::cerr << "Unable to open secret_config.cpp\n";
    }
    return 0;
}
