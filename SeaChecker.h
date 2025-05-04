#ifndef SEACHECKER_H
#define SEACHECKER_H

#include "SeaCreature.h"

class SeaChecker {
public:
    virtual bool check(SeaCreature* creature) = 0;
};

#endif