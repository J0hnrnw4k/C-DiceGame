# 🎲 C Dice Game

**Author:** John Rex  
**Language:** C  
**Course:** Introduction to Programming / Systems Programming (UTSA)  
**Assignment Type:** Modular Programming and Random Number Simulation  

---

## 🧩 Overview
This project implements a simple **dice-based game** using the C programming language.  
It demonstrates:
- Modular program design (header + implementation files)
- Random number generation with `rand()` and `srand()`
- Enum usage for round types
- Conditional scoring logic
- Turn-based gameplay between two players

---

## 🧱 File Structure
| File | Description |
|------|--------------|
| `main.c` | Contains the main game loop and player interaction logic |
| `dicegame.c` | Implements functions for dice rolls, scoring, and round info |
| `dicegame.h` | Header file defining data types and function prototypes |

---

## 🧠 Game Logic
1. The user specifies the number of rounds.  
2. Each round randomly assigns a **round type**:
   - `BONUS` (special +200 points)
   - `DOUBLE` (points doubled)
   - `REGULAR` (normal roll)
3. A dice roll determines points gained or lost.
4. Player scores are updated accordingly.
5. After all rounds, the program prints **GAME OVER** and announces the winner.

---

## ⚙️ Example Output
