#ifndef SEAPLUSPLUSENGINE_H
#define SEAPLUSPLUSENGINE_H

#include "SeaChecker.h"
#include "VertebrateChecker.h"
#include "InvertebrateChecker.h"
#include "FreshwaterChecker.h"

class SeaPlusPlusEngine {
private:
    VertebrateChecker vertebrateChecker;
    InvertebrateChecker invertebrateChecker;
    FreshwaterChecker freshwaterChecker;

public:
    bool evaluateCreature(SeaCreature* creature) {
        string type = creature->getType();
        if (type == "vertebrate")
            return vertebrateChecker.check(creature);
        else if (type == "invertebrate")
            return invertebrateChecker.check(creature);
        else
            return freshwaterChecker.check(creature);
    }
};

#endif