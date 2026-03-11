#include "Materiel.h"

Materiel::Materiel(std::string n)
{
    nom = n;
}

Materiel::~Materiel(){}

std::string Materiel::getNom() const
{
    return nom;
}
