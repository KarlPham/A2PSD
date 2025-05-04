#ifndef TEXTFILEINFOSUPPLIER_H
#define TEXTFILEINFOSUPPLIER_H

#include "SeaPlusPlusInfoSupplier.h"
#include "SeaCreatureFactory.h"
#include <fstream>
#include <sstream>

class TextFileInfoSupplier : public SeaPlusPlusInfoSupplier {
private:
    string filePath;

public:
    TextFileInfoSupplier(string path) : filePath(path) {}

    vector<SeaCreature*> loadCreatures() override {
        vector<SeaCreature*> creatures;
        ifstream file(filePath);
        string type, species, eggs;
        double length;

        while (file >> type >> species >> length >> eggs) {
            bool hasEggs = (eggs == "yes");
            SeaCreature* creature = SeaCreatureFactory::createCreature(type, species, length, hasEggs);
            if (creature) creatures.push_back(creature);
        }

        return creatures;
    }
};

#endif