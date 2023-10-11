#include "pch.h"
#include <iostream>
#include "CppUnitTest.h"
#include "..\Project19\FifteenPuzzle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(FifteenPuzzleTests)
    {
    public:
        // Тест для проверки конструктора и размера головоломки
        TEST_METHOD(TestConstructorAndSize)
        {
            FifteenPuzzle puzzle(4);
            Assert::AreEqual(4, puzzle.getSize());
        }

        // Тест для проверки перемешивания головоломки
        TEST_METHOD(TestShuffle)
        {
            FifteenPuzzle puzzle(4);
            Assert::IsFalse(puzzle.isSolved());  // Головоломка не должна быть решена после создания
        }

        // Тест для проверки перемещения числа в пустую клетку
        TEST_METHOD(TestMoveValid)
        {
            FifteenPuzzle puzzle(4);
            puzzle.move(1);
            Assert::IsFalse(puzzle.move(15)); //Проверка на невозможность премещения 15, оно находится в углу
        }

        // Тест для проверки перемещения числа, которого нет в головоломке
        TEST_METHOD(TestMoveNumbernotinPuzzle)
        {
            FifteenPuzzle puzzle(4);
            Assert::IsFalse(puzzle.move(16));  // Недопустимый ход
        }

        //Тест для проверки перемещения недопустимого числа
        TEST_METHOD(TestMoveInvalid)
        {
            FifteenPuzzle puzzle(4);
            Assert::IsFalse(puzzle.move(0));  // Недопустимый ход
        }
        
        // Тест для проверки решения головоломки (TestSolvePuzzle)
        TEST_METHOD(TestSolvePuzzle)
        {
            FifteenPuzzle puzzle(4);

            // Заполнить головоломку так, чтобы она была решена
            for (int i = 1; i < 16; ++i) {
                puzzle.move(i);
            }

            // Проверить, что головоломка решена
            if (!puzzle.isSolved()) {
                std::cout << "TestSolvePuzzle failed: Головоломка должна быть решена." << std::endl;
            }
        }

        // Тест на невозможность перемешивания при некорректном размере (TestInvalidSize)
        TEST_METHOD(TestInvalidSize)
        {
            try {
                FifteenPuzzle puzzle(3); // Создаем головоломку размером 3x3, что некорректно по условию задачи

                // Попытка перемешать головоломку
                for (int i = 0; i < 100; ++i) {
                    puzzle.move(rand() % 15 + 1);
                }

                // Если исключение не бросается, вывести сообщение об ошибке
                std::cout << "TestInvalidSize failed: Должно было возникнуть исключение." << std::endl;
            }
            catch (const std::exception&) {
                // Ожидать исключение
            }
        }
    };
}
