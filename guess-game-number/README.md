# Guess Number Game

A terminal-based C++ game where the computer secretly selects a random number and you try to guess it using logic, luck, and increasingly aggressive keyboard presses. Tiny project. Surprisingly addictive. Humanity truly peaked at “too high” and “too low.”

---

## Overview

This project is a beginner-friendly C++ game focused on strengthening programming fundamentals through a fun interactive challenge.

The player selects a difficulty level, guesses the hidden number, and receives hints until the correct answer is found.

---

## Features

### Difficulty Levels

Choose how much suffering you want:

| Difficulty | Range |
|---|---|
| Easy | 1 – 50 |
| Medium | 1 – 100 |
| Hard | 1 – 500 |

---

### Smart Game Mechanics

- Random number generation
- Hint system (`Too High` / `Too Low`)
- Attempt tracking
- Replay option
- Input validation for invalid entries
- Clean terminal interaction

Because if one person enters `"banana"` instead of a number and crashes the program, suddenly *you* are the villain. Software engineering is beautiful like that.

---

## Concepts Practiced

This project helps build strong foundations in:

- Variables & Data Types
- Conditional Statements
- Loops
- Functions
- User Input Handling
- Random Number Generation
- Basic Game Logic
- Program Flow Control

---

## Tech Stack

- **Language:** C++
- **Compiler:** g++
- **Platform:** Terminal / Command Line

---

## How to Run

### 1. Compile the Program

```bash
g++ randomGuessNumber.cpp -o randomGuessNumber
```

### 2. Run the Executable

#### Linux / macOS

```bash
./randomGuessNumber
```

#### Windows

```bash
randomGuessNumber.exe
```

---

## Sample Gameplay

```text
========= GUESS THE NUMBER =========

Select Difficulty:
1. Easy (1–50)
2. Medium (1–100)
3. Hard (1–500)

Enter choice: 2

I have selected a number between 1 and 100.
Start guessing

Enter your guess: 60
Too high

Enter your guess: 30
Too low

Enter your guess: 42

Correct!
You guessed the number in 3 attempts.

Play again? (y/n): n

Thanks for playing!
```

---

## Possible Future Improvements

Planned upgrades because programmers cannot leave anything alone:

- Timer mode
- High score system
- File handling for score saving
- Colored terminal UI
- Sound effects
- AI hint system
- Streak tracking

---

## What I Learned

While building this project, I practiced:

- Structuring a complete C++ program
- Writing cleaner game loops
- Handling invalid user input safely
- Breaking logic into reusable functions
- Improving debugging and problem-solving skills

Small project. Real learning.  
Most beginners skip this part and jump straight into “build an AI startup.” Then they panic when a loop breaks. Ancient ritual of computer science continues.

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

This project is licensed under the MIT License.
