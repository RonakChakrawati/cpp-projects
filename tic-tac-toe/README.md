
# Tic-Tac-Toe

A terminal-based 2-player Tic-Tac-Toe game built in C++ using Object-Oriented Programming principles.  
Simple game. Serious programming lessons hiding underneath. Humans have spent centuries inventing advanced technology only to still enjoy placing X and O in boxes. Respectable behavior honestly.

---

## Overview

This project recreates the classic Tic-Tac-Toe game with:

- Two-player local gameplay
- Score tracking system
- Replay functionality
- Input validation
- Clean terminal-based interface

Designed as a beginner-to-intermediate C++ project focused on strengthening logic building and OOP fundamentals.

---

## Features

### Core Gameplay

| Feature | Description |
|---|---|
| 2-Player Mode | Play locally with a friend |
| Score Tracking | Tracks wins across rounds |
| Replay System | Start new matches instantly |
| Input Validation | Prevents invalid moves |
| Dynamic Board Updates | Board refreshes after every move |
| Win & Draw Detection | Detects all game outcomes |

---

### System Highlights

- Object-Oriented Design
- Clean modular functions
- Structured game loop
- ASCII-based board rendering
- User-friendly CLI interaction

Because eventually every programmer builds Tic-Tac-Toe.  
It’s basically the “Hello World” of game development, except slightly less emotionally empty.

---

## Concepts Practiced

This project strengthens understanding of:

- Classes & Objects
- Encapsulation
- Functions
- Arrays
- Loops
- Conditional Statements
- Game Logic
- Input Validation
- State Management
- Modular Programming

---

## Tech Stack

- **Language:** C++
- **Libraries Used:** `iostream`, `vector`, `string`
- **Compiler:** g++
- **Platform:** Terminal / Command Line

---

## Project Structure

```text
tic-tac-toe/
├── ticTacToe.cpp
└── README.md
```

---

## How to Run

### 1. Compile the Program

```bash
g++ ticTacToe.cpp -o ticTacToe
```

### 2. Run the Executable

#### Linux / macOS

```bash
./ticTacToe
```

#### Windows

```bash
ticTacToe.exe
```

---

## How to Play

### Board Layout

Players select positions from `1 - 9`.

```text
 1 | 2 | 3
--- --- ---
 4 | 5 | 6
--- --- ---
 7 | 8 | 9
```

---

### Rules

1. Player **X** starts first
2. Players take turns placing marks
3. First player to align 3 marks:
   - Horizontally
   - Vertically
   - Diagonally  
   wins the game
4. If all cells are filled without a winner, the match ends in a draw
5. Players can replay after each round

Ancient strategy game. Tiny board. Infinite arguments between friends.

---

## Win Conditions

### Horizontal Win

```text
 X | X | X
--- --- ---
 O | O | 6
--- --- ---
 7 | 8 | 9
```

### Vertical Win

```text
 X | O | 3
--- --- ---
 X | O | 6
--- --- ---
 X | 8 | 9
```

### Diagonal Win

```text
 X | O | 3
--- --- ---
 4 | X | O
--- --- ---
 7 | 8 | X
```

---

## Class Structure

```cpp
class Game {
    char board[3][3];
    char currentPlayer;
    int scoreX, scoreO;

    void initializeBoard();
    void displayBoard();
    int takeInput();
    bool isValidMove(int);
    void makeMove(int);
    void switchPlayer();
    bool checkWin();
    bool checkDraw();
    bool againOrNot();
    void play();
};
```

---

## Sample Gameplay

```text
***************************************
*****  LET'S PLAY TIC TAC TOE  ********
***************************************

 1 | 2 | 3
--- --- ---
 4 | 5 | 6
--- --- ---
 7 | 8 | 9

PLAYER X INPUT : 5

 1 | 2 | 3
--- --- ---
 4 | X | 6
--- --- ---
 7 | 8 | 9

PLAYER O INPUT : 1

 O | 2 | 3
--- --- ---
 4 | X | 6
--- --- ---
 7 | 8 | 9
```

---

## Limitations

Current limitations of the project:

- No AI opponent
- No difficulty levels
- No game save/load system
- Fixed board size (3x3 only)
- Terminal-only interface

Perfectly normal for a foundational project.  
People try to skip fundamentals and jump straight into “build multiplayer battle royale with blockchain AI.” Then a simple loop destroys them spiritually.

---

## Future Improvements

Planned upgrades:

- Single-player AI mode
- Minimax algorithm implementation
- Difficulty levels
- Colored terminal output
- Better UI/UX
- Save & load game state
- Online multiplayer mode
- GUI version using SFML or Qt
- Sound effects and animations

---

## What I Learned

While building this project, I practiced:

- Structuring larger C++ programs
- Managing game states
- Designing modular functions
- Implementing Object-Oriented Programming
- Handling player input safely
- Building interactive terminal applications
- Debugging logical edge cases

This project teaches far more than it looks like.  
Good beginner projects are deceptive that way. Small surface area. Deep lessons underneath.

---

## Author

**Ronak Chakrawati**

B.Tech student exploring:
- C++
- DSA
- Software Development
- Problem Solving

Building projects one bug at a time.

---

## License

This project is open source and available for educational purposes.
