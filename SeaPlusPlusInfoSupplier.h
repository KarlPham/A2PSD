#ifndef SEAPLUSPLUSINFOSUPPLIER_H
#define SEAPLUSPLUSINFOSUPPLIER_H

#include <vector>
#include "SeaCreature.h"

class SeaPlusPlusInfoSupplier {
public:
    virtual vector<SeaCreature*> loadCreatures() = 0;
};

#endif