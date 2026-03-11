#ifndef MATERIEL_H
#define MATERIEL_H

#include <string>

class Materiel
{
protected:
    std::string nom;

public:
    Materiel(std::string n);
    virtual ~Materiel();

    std::string getNom() const;

};

#endif
