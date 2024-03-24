#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 11; j++) {
            if ((i == 0 && j % 3 != 0) || (i == 1 && j % 3 == 0) || (i - j == 2) || (i + j == 8))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
