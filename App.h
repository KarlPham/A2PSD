#ifndef APP_H
#define APP_H

#include <iostream>
#include "SeaCreatureFactory.h"
#include "SeaPlusPlusEngine.h"
using namespace std;

class App {
private:
    SeaPlusPlusEngine engine;

public:
    void collectInput() {
        string type, species;
        double length;
        string eggInput;
        bool hasEggs;

        cout << "Enter creature type (vertebrate/invertebrate): ";
        cin >> type;
        if (type == "vertebrate"){
            cout << "Enter species (Snapper | Tailor | Tarlwind): ";
        }
        else{
            cout << "Enter species (Crab | Abalone | Blue_Swimmer): ";
        }
        cin >> species;
        cout << "Enter length (cm): ";
        cin >> length;
        cout << "Is it carrying eggs? (yes/no): ";
        cin >> eggInput;
        hasEggs = (eggInput == "yes");

        SeaCreature* creature = SeaCreatureFactory::createCreature(type, species, length, hasEggs);
        if (!creature) {
            cout << "Invalid creature type!\\n";
            return;
        }

        bool result = engine.evaluateCreature(creature);
        if (result)
            cout << "✅ You can keep the " << species << "!\\n";
        else
            cout << "❌ You must release the " << species << ".\\n";

        delete creature;
    }
};

#endif
