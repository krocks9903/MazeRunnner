# Maze Solver (C++)

Solves a fixed character-grid maze with recursive backtracking and prints the path. Written as an early C++ exercise.

## How it works

`MazeSolver` stores the maze as a 2D `char` array where `O` is a wall and a space is open. `solveRecursive(row, col)` marks the current cell, tries each neighbouring cell in turn, and un-marks the cell when a branch dead-ends. `printMaze()` shows the result.

## Build and run

```bash
g++ MazeRunner.cpp -o maze
./maze
```

## Status

Coursework, complete. Not maintained.
