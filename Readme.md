# Snake and Ladder Game - C++

## 🎲 Overview
This is a simple **Snake and Ladder** game implemented in **C++**. It allows two players to roll a die and move across a board, encountering **snakes and ladders** that either advance or push them back. The first player to reach square **100** wins the game!

## 🛠 Features
- 🎮 **Two-player mode**
- 🎲 **Random dice rolling**
- 🐍 **Snakes & Ladders mechanics**
- 📜 **Console-based board display**
- 🔄 **Turn-based gameplay**

## 📜 Rules
1. Each player rolls the die and moves forward by the number of spots shown.
2. Landing on a **ladder** moves the player up to a higher position.
3. Landing on a **snake** pushes the player down to a lower position.
4. The first player to reach **100 wins!**

📌 Ladder Locations

In the game, landing on these numbers will move the player up:

Start Position            ,          End Position

    6     (L)                            46

    23    (S)                            13

    45    (S)                            38

    61    (S)                            43

    65    (S)                            57

    77    (L)                            82

    98    (S)                            88

Ladder - (L)
Snake  - (S)

🎯 How Ladders Work

If a player lands on a ladder's start position, they climb up to the end position.

This helps progress faster in the game!

## 🚀 How to Run
1. **Compile the code** using a C++ compiler (e.g., g++):
   ```sh
   g++ Game.cpp -o snake_ladder
   ```
2. **Run the executable:**
   ```sh
   ./snake_ladder
   ```
3. **Follow on-screen instructions to play!**

## 🔥 Future Improvements
- 🎭 **Single-player mode with AI opponent**
- 🎨 **Colorful board display**
- 📱 **GUI version using SDL or SFML**

## 🤝 Contributing
Feel free to contribute by improving the game logic, adding new features, or fixing bugs. Fork the repository and submit a pull request!

## 📜 License
This project is **open-source** and available under the **MIT License**.

---
Enjoy playing! 🚀🎲

