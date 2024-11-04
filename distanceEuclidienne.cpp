#include <cmath>
#include <iostream>

double distance(double xa, double ya, double za, double xb, double yb, double zb) {
    return std::sqrt(std::pow(xb - xa, 2) + std::pow(yb - ya, 2) + std::pow(zb - za, 2));
}

int main(int argc, char** argv) {
    if (argc != 7) {
        std::cerr << "Erreur : il faut fournir 6 arguments (xa, ya, za, xb, yb, zb)" << std::endl;
        return 1;
    }

    double xa = std::stod(argv[1]);
    double ya = std::stod(argv[2]);
    double za = std::stod(argv[3]);
    double xb = std::stod(argv[4]);
    double yb = std::stod(argv[5]);
    double zb = std::stod(argv[6]);

    double dist = distance(xa, ya, za, xb, yb, zb);
    std::cout << "La distance entre les points A et B est : " << dist << std::endl;

    return 0;
}