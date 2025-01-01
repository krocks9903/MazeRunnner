#include <iostream>
using namespace std;

#define ROWS 10
#define COLS 17

class MazeSolver {
private:
char maze[ROWS][COLS];

void initializeMaze() {
const char tempMaze[ROWS][COLS] = {
"OOOOOOOOOOOOOOOO",
"O O O OOO O OO ",
"O O ",
"O O OOOOOOO O O ",
"O O O O O ",
"O OOO OO OOOO ",
"O O O O ",
"OO O O O OOO OO ",
"OO O O O ",
"OOOOOOOOOOOOOOOO"
};

for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
maze[i][j] = tempMaze[i][j];
}
}
}

bool solveRecursive(int row, int col) {
if (row == 8 && col == 13) {
maze[row][col] = '*';
return true;
}

if (maze[row][col] != ' ') return false;

maze[row][col] = '*';

if (solveRecursive(row, col + 1)) return true;
if (solveRecursive(row + 1, col)) return true;
if (solveRecursive(row, col - 1)) return true;
if (solveRecursive(row - 1, col)) return true;

maze[row][col] = 'D';
return false;
}
public:
MazeSolver() {
initializeMaze();
}

void printMaze() {
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS - 1; j++) {
cout << maze[i][j];
}
cout << endl;
}
}

bool solve() {
return solveRecursive(1, 1);
}
};

int main() {
MazeSolver solver;

cout << "Here's the maze. Let's find a way out!" << endl;
solver.printMaze();

if (solver.solve()) {
cout << "\nYay! We made it through. Here's the solution:" << endl;
solver.printMaze();
} else {
cout << "\nNo way out of this maze. We're stuck!" << endl;
}

return 0;
}
