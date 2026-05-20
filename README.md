# Tic Tac Toe Game in C++

A simple and interactive console-based Tic Tac Toe game developed using C++. This project allows a user to play against the computer with a basic AI system. The game includes score tracking, win/draw detection, replay functionality, and a clean user interface in the terminal.

This project is beginner-friendly and helps students understand core C++ programming concepts such as arrays, functions, loops, condition checking, random number generation, and basic game logic.

---

## Features

- Player vs Computer gameplay
- Interactive console interface
- Computer-generated random moves
- Win condition checking
- Draw detection system
- Score tracking for player and computer
- Replay option after each match
- Simple and readable code structure
- Beginner-friendly project for learning C++

---

## Technologies Used

- **Programming Language:** C++
- **Concepts Used:**
  - Arrays
  - Functions
  - Loops
  - Conditional Statements
  - Random Number Generation
  - Game Logic
  - Recursion (for invalid move handling)

---

## Project Structure

The project is implemented in a single C++ source file and contains the following major functions:

| Function | Purpose |
|---|---|
| `initBoard()` | Initializes the game board |
| `displayBoard()` | Displays the current board |
| `checkWin()` | Checks winning conditions |
| `isDraw()` | Checks if the game is a draw |
| `playerMove()` | Handles player input |
| `computerMove()` | Generates computer moves |
| `playGame()` | Controls the game flow |

---

## How the Game Works

1. The board is initialized with numbers from 1 to 9.
2. The player selects a position to place `X`.
3. The computer automatically places `O` in a random empty position.
4. After every move:
   - The game checks for a winner
   - Checks if the board is full
5. Scores are updated after each match.
6. The player can choose to play again.

---

## Game Rules

- The player uses **X**
- The computer uses **O**
- Players take turns placing marks
- First to get 3 marks in:
  - a row
  - a column
  - or a diagonal
  wins the game
- If all positions are filled without a winner, the game ends in a draw

---

## Sample Output

```text
=== TIC TAC TOE ===

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Enter position (1-9): 5

Computer played.

 1 | 2 | O
---|---|---
 4 | X | 6
---|---|---
 7 | 8 | 9
```

---

## How to Run the Project

### Using Code::Blocks
1. Open Code::Blocks
2. Create a new C++ file
3. Copy and paste the source code
4. Save the file
5. Click **Build and Run**

### Using VS Code
1. Install a C++ compiler (MinGW)
2. Open the project folder
3. Compile using:
```bash
g++ filename.cpp -o game
```

4. Run:
```bash
./game
```

---

## Learning Outcomes

This project helps beginners learn:
- Problem-solving using programming
- Game development basics
- Board representation using arrays
- Input validation
- Function-based program structure
- Randomized computer logic

---

## Future Enhancements

- Smart AI using Minimax Algorithm
- Difficulty levels
- Two-player mode
- Graphical User Interface (GUI)
- Sound effects and animations
- Online multiplayer support

---

## Advantages of This Project

- Easy to understand for beginners
- Helps improve logic-building skills
- Good mini project for students
- Useful for practicing C++ basics
- Can be expanded into advanced game development

---

## Author

**Suvedha M**  
1st Year CSE Student  
Sri Krishna College of Engineering and Technology

---
