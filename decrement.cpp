#include <iostream>

#include <iostream>
#include <limits>

int main() {
    int i = 0;
    while (true) {
        if (i == std::numeric_limits<int>::min()) {
            std::cout << "Integer underflow detected!" << std::endl;
            break;
        }
        --i;
        std::cout << i << std::endl;
    }
    return 0;
}
