#ifndef SEAPLUSPLUSENGINE_H
#define SEAPLUSPLUSENGINE_H

#include "SeaCreature.h"
#include "VertebrateChecker.h"
#include "InvertebrateChecker.h"
using namespace std;

class SeaPlusPlusEngine {
private:
    VertebrateChecker vertebrateChecker;
    InvertebrateChecker invertebrateChecker;

public:
    bool evaluateCreature(SeaCreature* creature) {
        if (creature->getType() == "vertebrate")
            return vertebrateChecker.check(creature);
        else if (creature->getType() == "invertebrate")
            return invertebrateChecker.check(creature);
        return false;
    }
};

#endif
