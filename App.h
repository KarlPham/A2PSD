#ifndef APP_H
#define APP_H

#include <iostream>
#include "SeaPlusPlusEngine.h"
#include "SeaPlusPlusInfoSupplier.h"
#include "TextFileInfoSupplier.h"   
#include "SeaCreatureFactory.h" 
using namespace std;

class App {
private:
    SeaPlusPlusEngine engine;
    SeaPlusPlusInfoSupplier* infoSupplier;

public:
    App() : infoSupplier(nullptr) {}

    App(SeaPlusPlusInfoSupplier* supplier) : infoSupplier(supplier) {}

    void collectInput() {
        string type, species, eggInput;
        double length;
        bool hasEggs;

        cout << "Enter creature type (vertebrate/invertebrate/freshwater): ";
        cin >> type;
        cout << "Enter species: ";
        cin >> species;
        cout << "Enter length (cm): ";
        cin >> length;
        cout << "Is it carrying eggs? (yes/no): ";
        cin >> eggInput;
        hasEggs = (eggInput == "yes");

        SeaCreature* creature = SeaCreatureFactory::createCreature(type, species, length, hasEggs);
        if (!creature) {
            cout << "Invalid type!\n";
            return;
        }

        displayResult(engine.evaluateCreature(creature), creature);
        delete creature;
    }

    void runFromFile(string filename) {
        infoSupplier = new TextFileInfoSupplier(filename);
        vector<SeaCreature*> creatures = infoSupplier->loadCreatures();

        for (auto c : creatures) {
            displayResult(engine.evaluateCreature(c), c);
            delete c;
        }
    }

    void displayResult(bool result, SeaCreature* creature) {
        if (result)
            cout << "✅ You can keep the " << creature->getSpecies() << endl;
        else
            cout << "❌ You must release the " << creature->getSpecies() << endl;
    }
};

#endif