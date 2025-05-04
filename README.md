# SeaPlusPlus Project

## 📦 Part 3 - Extended Sea Creature Validation System

### 📌 Overview

This is Part 3 of the SeaPlusPlus Project.  
In this part, the Sea++ system has been extended with additional functionality:

✅ Support for **Freshwater Creatures** and their specific regulations.  
✅ Ability to **load creature data from text files** using `SeaPlusPlusInfoSupplier` and `TextFileInfoSupplier`.  
✅ User can now choose between manual input (like Part 2) or loading from a file.

---

### 🧱 Architecture and Design

#### ✅ Key Classes (In addition to Part 2)

- **FreshwaterCreature**
  - New class derived from `SeaCreature` to represent freshwater species.

- **FreshwaterChecker**
  - New checker that validates freshwater species based on their own rules.

- **SeaPlusPlusInfoSupplier (Interface)**
  - Defines how to load a list of creatures.

- **TextFileInfoSupplier**
  - Implements the above interface to load creature data from a text file.

- **App (Updated)**
  - Now supports both manual input and file input mode.
  - Reads from file and passes creatures to `SeaPlusPlusEngine` for validation.

---

### 📌 Workflow
```bash
(Manual Mode)
[User Input] → [App] → [SeaCreatureFactory] → [SeaCreature Object]
↓
[SeaPlusPlusEngine]
↓
[Checker (Vertebrate/Invertebrate/Freshwater)]
↓
[Result displayed to user]

(File Mode)
[Text File] → [TextFileInfoSupplier] → [SeaCreature Object]
↓
[SeaPlusPlusEngine]
↓
[Checker (Vertebrate/Invertebrate/Freshwater)]
↓
[Result displayed to user]

```

---

### 📊 Regulation Example (Freshwater)

| Species      | Minimum Length (cm) | Must Not Have Eggs |
|--------------|--------------------|--------------------|
| Brown_Trout  | 25                  | Yes |
| Golden_Perch | 30                  | No |

Other checkers (VertebrateChecker and InvertebrateChecker) still follow Part 2 regulations.

---

### ✅ How to Run

g++ -std=c++17 main.cpp -o sea++
./sea++

When you run the program → it will ask you:

Choose:
	•	1 → Manual Input Mode
(Enter creature information manually → like Part 2)
	•	2 → File Input Mode
(Enter filename → load creatures from file → auto check)

### Example Run (Manual Mode)

Select mode: 1 (Manual Input) or 2 (File Input): 
1
Enter creature type (vertebrate/invertebrate/freshwater): 
freshwater
Enter species: 
Brown_Trout
Enter length (cm): 
24
Is it carrying eggs? (yes/no): 
no
❌ You must release the Brown_Trout.

### Example Run (File Mode)

creatures.txt
```bash
freshwater Brown_Trout 26 no
vertebrate Snapper 28 no
invertebrate Crab 11 no
freshwater Golden_Perch 28 no
```
Run
```bash
Select mode: 1 (Manual Input) or 2 (File Input): 
2
Enter filename: 
creatures.txt

✅ You can keep the Brown_Trout!
❌ You must release the Snapper.
✅ You can keep the Crab!
❌ You must release the Golden_Perch.
```

### Summary

In Part 3, Sea++ system was extended and improved by:
	•	Adding support for freshwater species and their specific regulations.
	•	Adding a file input mode that allows anglers to record their catches in a file.
	•	Keeping the original manual input mode for flexibility.
	•	Maintaining clean and scalable architecture using Factory, Façade, and Mediator patterns.

This makes Sea++ a more realistic and flexible application, suitable for real-world scenarios.