#ifndef POSTETRAVAIL_H
#define POSTETRAVAIL_H

#include "Materiel.h"

class PosteTravail : public Materiel
{
private:
    std::string systeme;

public:
    PosteTravail(std::string nom, std::string sys);

    std::string getSysteme() const;
};

#endif
