# Maze Solver (C++)

Solves a fixed character-grid maze with recursive backtracking and prints the path. Written as an early C++ exercise.

## How it works

`MazeSolver` stores the maze as a 2D `char` array where `O` is a wall and a space is open. `solveRecursive(row, col)` marks the current cell with `*`, tries right, down, left and up in turn, and re-marks the cell as `D` when a branch dead-ends. `printMaze()` shows the solved grid, with `*` tracing the path to the exit.

## Build and run

```bash
g++ MazeRunner.cpp -o maze
./maze
```

## Status

Coursework, complete. Not maintained.
