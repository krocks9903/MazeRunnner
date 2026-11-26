# Maze Solver (C++)

Tries to solve a fixed character-grid maze with recursive backtracking and print the path. Written as an early C++ exercise. See Known limitations: with the maze as committed, no path is found.

## How it works

`MazeSolver` stores the maze as a 2D `char` array where `O` is a wall and a space is open. `solveRecursive(row, col)` marks the current cell with `*`, tries right, down, left and up in turn, and re-marks the cell as `D` when a branch dead-ends. Solving starts at row 1, column 1 and the exit is row 8, column 13. `printMaze()` shows the grid, with `*` tracing the path to the exit when one is found.

## Build and run

```bash
g++ MazeRunner.cpp -o maze
./maze
```

## Known limitations

- Most rows of the maze literal in `initializeMaze()` are shorter than 16 characters, so the rest of each row is `'\0'`. The solver treats those cells as walls, and the exit cell (8, 13) is past the end of its row, so `solve()` returns false. Right now the program prints "No way out of this maze. We're stuck!" every time.
- Those `'\0'` cells are also printed as raw NUL bytes by `printMaze()`.
- Fixing it means padding each row to 16 characters with the intended layout, which isn't recorded in the repo.

## Status

Coursework, complete. Not maintained.
