#pragma once
#include <iostream>

class MonteCharge {
private:
    int etage;

public:
    MonteCharge();
    void affiche_toi();
    void monte();
    void monte(int s);
    void descend();
    void descend(int s);


}
