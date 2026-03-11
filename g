#ifndef ECRAN_H
#define ECRAN_H

#include "Materiel.h"

class Ecran : public Materiel
{
private:
    int taille;

public:
    Ecran(std::string nom, int t);

    int getTaille() const;
};

#endif
