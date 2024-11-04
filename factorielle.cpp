#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long res = n * factorial(n - 1);
    if (res / n != factorial(n - 1)) {
        throw std::overflow_error("integer overflow");
    }
    return res;
}

int main() {
    int n;
    do {
        std::cout << "Saisissez un entier positif pour calculer sa factorielle : ";
        std::cin >> n;
        if (n < 0) {
            std::cout << "Erreur : le nombre doit être positif !\n";
        }
    } while (n < 0);

    std::cout << "La factorielle de " << n << " est " << factorial(n) << std::endl;
    return 0;
}
