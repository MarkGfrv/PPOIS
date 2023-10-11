#pragma once
#include <vector>

class FifteenPuzzle {
public:
    FifteenPuzzle(int puzzleSize);

    int getSize() const;

    bool move(int value);

    int operator[](int index) const;

    bool isSolved() const;

private:
    std::vector<int> puzzle;
    int size;

    bool canMove(int direction) const;
};


