#include <iostream>
#include "..\Project35\FifteenPuzzle.h"

int main() {
    setlocale(LC_ALL, "Russian");
    FifteenPuzzle puzzle(4);

    while (!puzzle.isSolved()) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                std::cout << puzzle[i * 4 + j] << " ";
            }
            std::cout << std::endl;
        }

        std::cout << "Введите число (1-15) для перемещения: ";
        int value;
        std::cin >> value;

        if (!puzzle.move(value)) {
            std::cout << "Недопустимый ход!" << std::endl;
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << puzzle[i * 4 + j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "PUZZLE IS SOLVED!" << std::endl;

    return 0;
}
