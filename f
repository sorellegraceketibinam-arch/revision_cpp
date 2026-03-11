#include "PosteTravail.h"

PosteTravail::PosteTravail(std::string nom, std::string sys)
: Materiel(nom)
{
    systeme = sys;
}

std::string PosteTravail::getSysteme() const
{
    return systeme;
}
