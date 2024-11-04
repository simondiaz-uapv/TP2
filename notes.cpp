#include <iostream>

int main() {
    double notes[5] = {0.0};
    int nbNotes = 0;
    double note;

    while (true) {
        std::cout << "Saisissez une note (entre 0 et 20) ou -1 pour terminer : ";
        std::cin >> note;
        if (note == -1) {
            break;
        }
        if (note < 0 || note > 20) {
            std::cout << "Erreur : la note doit être comprise entre 0 et 20 !\n";
            continue;
        }
        if (nbNotes >= 5) {
            std::cout << "Erreur : vous avez déjà saisi 5 notes !\n";
            continue;
        }
        notes[nbNotes] = note;
        nbNotes++;
    }

    double somme = 0;
    for (int i = 0; i < nbNotes; i++) {
        somme += notes[i];
    }

    double moyenne = somme / nbNotes;
    std::cout << "La moyenne des " << nbNotes << " notes est de " << moyenne << std::endl;

    return 0;
}
