#  Guess Number Game

A simple terminal-based C++ game where the computer secretly picks a random number and your job is to guess it before your patience, dignity, or keyboard gives up. Humanity somehow turned “higher or lower” into entertainment and honestly... fair enough.

---

##  Features

-  Three difficulty modes
  - **Easy** → Number between `1 - 50`
  - **Medium** → Number between `1 - 100`
  - **Hard** → Number between `1 - 500`

-  Input validation  
  Prevents invalid or broken inputs because users are creative in the worst possible ways.

-  Attempt counter  
  Tracks how many guesses it took you to finally defeat basic probability.

-  Replay system  
  Play multiple rounds without restarting the program.

-  Random number generation using `rand()`

---

##  Tech Used

- **Language:** C++
- **Concepts Practiced:**
  - Loops
  - Conditional statements
  - Functions
  - Random number generation
  - Input validation
  - Game logic

---

##  How to Run

### Compile
```bash
g++ randomGuessNumber.cpp -o randomGuessNumber
