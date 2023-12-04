// monteCharges.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "MonteCharges.h"

int main();
{
    //std::cout << "Hello World!\n";
    MonteCharge x, y;

    x.initialise_toi(5);
    y.initialise_toi(0);

    x.affiche_toi(); y.affiche_toi();

    x.monte(); x.affiche_toi();
    x.monte(5); x.affiche_toi();
    x.descend(); x.affiche_toi();
    y.monte(12); y.affiche_toi();
    y.descend(); y.affiche_toi();
    y.descend(); y.affiche_toi();
    y.monte(5); y.affiche_toi();
    y.descend(); y.affiche_toi();

}
void initialise_toi(int etage_initial);
{
    etage = etage_initial;
}

void affiche_toi();
{
    std::cout << "Etage : " << etage << std::endl;
}

void monte();
{
    etage++;
}

void monte(int s); {
    etage += s;
}

void descend(); {
    if (etage > 0) {
        etage--;
    }
}

void descend(int s); {
    if (etage >= s) {
        etage -= s;
    }
    else {
        etage = 0;
    }
}
};

