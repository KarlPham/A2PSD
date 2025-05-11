# SeaPlusPlus Project

## 📦 Part 2 - Basic Sea Creature Validation System

### 📌 Overview

This is Part 2 of the SeaPlusPlus Project.  
The purpose of this project is to build a C++ application that allows anglers to check whether they can keep or must release sea creatures based on regulations.

The system asks the angler to input data about the creature they caught (type, species, length, and egg status) and determines if the catch is valid or not.

---

### 🧱 Architecture and Design

#### ✅ Key Classes
```bash
- **App** (Facade)
  - Provides the user interface.
  - Collects user input and displays the result.
  - Delegates checking logic to `SeaPlusPlusEngine`.

- **SeaCreature** (Abstract Base Class)
  - Defines shared attributes and virtual method `getType()`.

- **VertebrateCreature / InvertebrateCreature** (Derived Classes)
  - Implements the `getType()` method to specify the type of creature.

- **SeaCreatureFactory** (Factory Pattern)
  - Creates appropriate `SeaCreature` objects based on type and species input.

- **SeaChecker (Abstract Interface)**
  - Defines the `check()` method for validation.

- **VertebrateChecker / InvertebrateChecker** (Concrete Checkers)
  - Implements validation logic based on species-specific regulations.

- **SeaPlusPlusEngine (Mediator Pattern)**
  - Mediates between App and Checkers.
  - Selects the appropriate checker and performs validation.

---
```
### 📌 Workflow
```bash
[User Input] → [App] → [SeaCreatureFactory] → [SeaCreature Object]
↓
[SeaPlusPlusEngine]
↓
[Checker (Vertebrate/Invertebrate)]
↓
[Result displayed to user]
```

- User enters type, species, length, egg status.
- App creates the appropriate creature via factory.
- Engine determines which checker to use.
- Checker validates based on rules.
- App shows result: ✅ Keep or ❌ Release.

---

### 📊 Regulation Example (Vertebrate)

```bash
| Species   | Minimum Length (cm) | Must Not Have Eggs |
|-----------|--------------------|--------------------|
| Snapper   | 30                  | Yes |
| Tailor    | 30                  | Yes |
| Tarwhine  | 20                  | Yes |

Similar rules are implemented for Invertebrates (e.g., Crab, Abalone, Blue Swimmer).

---
```
### ✅ How to Run
```bash
g++ -std=c++17 main.cpp -o sea++
./sea++
```
### Run process
```bash
Enter creature type (vertebrate/invertebrate): 
vertebrate
Enter species (Snapper | Tailor | Tarwhine): 
Snapper
Enter length (cm): 
32
Is it carrying eggs? (yes/no): 
no
✅ You can keep the Snapper!
```