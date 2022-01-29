#include <iostream>
#include <string.h>

int main(int argc, char** argv) {
    if (argc < 3) {std::cout << "Not enough args!\n"; return 0;} 
    if (strncmp(argv[1], argv[2], sizeof(4))) {
        std::cout << "Different Strings" << std::endl;
    } else {
        std::cout << "Same String" << std::endl;
    }
    return 0;
}
