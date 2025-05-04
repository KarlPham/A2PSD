#ifndef SEACREATUREFACTORY_H
#define SEACREATUREFACTORY_H

#include "VertebrateCreature.h"
#include "InvertebrateCreature.h"
#include "FreshwaterCreature.h"

class SeaCreatureFactory {
public:
    static SeaCreature* createCreature(string type, string species, double length, bool carryEggs) {
        if (type == "vertebrate") {
            return new VertebrateCreature(species, length, carryEggs);
        } else if (type == "invertebrate") {
            return new InvertebrateCreature(species, length, carryEggs);
        } else if (type == "freshwater") {
            return new FreshwaterCreature(species, length, carryEggs);
        }
        return nullptr;
    }
};

#endif