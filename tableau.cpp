#include <iostream>

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    int* tableau = new (std::nothrow) int[taille];
    if (tableau == nullptr) {
        std::cerr << "Erreur : allocation impossible" << std::endl;
        return 1;
    }

    std::cout << "Tableau de taille " << taille << " cr e" << std::endl;

    delete[] tableau;
    return 0;
}
