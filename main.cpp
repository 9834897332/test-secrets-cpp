// main.cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("secret_config.cpp");
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "secret_config.cpp not found.\n";
    }
    return 0;
}
