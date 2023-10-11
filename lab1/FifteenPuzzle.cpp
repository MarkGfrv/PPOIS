#include "Header.h"
#include <ctime>
#include <cstdlib>

FifteenPuzzle::FifteenPuzzle(int puzzleSize) : size(puzzleSize) {
    for (int i = 0; i < size * size - 1; ++i) {
        puzzle.push_back(i + 1);
    }
    puzzle.push_back(0);

    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size * size * 100; ++i) {
        int direction = rand() % 4;
        if (canMove(direction)) {
            int emptyIdx = -1;
            for (int j = 0; j < size * size; ++j) {
                if (puzzle[j] == 0) {
                    emptyIdx = j;
                    break;
                }
            }
            int targetIdx;
            if (direction == 0) targetIdx = emptyIdx - 1;
            else if (direction == 1) targetIdx = emptyIdx + 1;
            else if (direction == 2) targetIdx = emptyIdx - size;
            else targetIdx = emptyIdx + size;
            std::swap(puzzle[emptyIdx], puzzle[targetIdx]);
        }
    }
}

int FifteenPuzzle::getSize() const {
    return size;
}

bool FifteenPuzzle::move(int value) {
    if (value < 1 || value > size * size - 1) return false;

    int valueIdx = -1;
    int emptyIdx = -1;
    for (int i = 0; i < size * size; ++i) {
        if (puzzle[i] == value) valueIdx = i;
        if (puzzle[i] == 0) emptyIdx = i;
    }
    if (valueIdx == -1) return false;

    if ((emptyIdx == valueIdx - 1 && emptyIdx / size == valueIdx / size) ||
        (emptyIdx == valueIdx + 1 && emptyIdx / size == valueIdx / size) ||
        (emptyIdx == valueIdx - size) || (emptyIdx == valueIdx + size)) {
        std::swap(puzzle[valueIdx], puzzle[emptyIdx]);
        return true;
    }

    return false;
}

int FifteenPuzzle::operator[](int index) const {
    return puzzle[index];
}

bool FifteenPuzzle::isSolved() const {
    for (int i = 0; i < size * size - 1; ++i) {
        if (puzzle[i] != i + 1) return false;
    }
    return puzzle[size * size - 1] == 0;
}

bool FifteenPuzzle::canMove(int direction) const {
    int emptyIdx = -1;
    for (int i = 0; i < size * size; ++i) {
        if (puzzle[i] == 0) {
            emptyIdx = i;
            break;
        }
    }

    if (direction == 0 && emptyIdx % size != 0) return true;
    if (direction == 1 && emptyIdx % size != size - 1) return true;
    if (direction == 2 && emptyIdx >= size) return true;
    if (direction == 3 && emptyIdx < size * (size - 1)) return true;

    return false;
}
