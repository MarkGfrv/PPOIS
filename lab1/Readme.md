<h1 align="center">Лабораторная работа №1</h1>
<h2 align="center">Пятнашки</h2>
Задание: Описать класс, реализующий игру-головоломку "Пятнашки". Начальное размещение номеров — случайное. Реализовать методы для осуществления перестановки клеток, для проверки

правильной расстановки клеток. Класс должен реализовывать следующие возможности:
- cлучайное начальное размещение номеров;
- перестановка клеток;
- получения значения клетки (оператор []);
- проверка правильной расстановки клеток.

Реализованные тесты:
- Тест для проверки размера головоломки:
  
![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/13324ed7-a601-40a2-b6ad-370b2b7ded52)

- Тест для проверки нерешённости головоломки сразу после её создания:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/1265314c-32dc-478f-b829-b07961f89be8)

- Тест для проверки корректного перемещения чисел в пустую клетку:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/0ab5e948-d12e-4aee-bc56-cbb69f1c1788)

- Тест для проверки числа, не находящегося в головоломке(попытка переместить число 16):

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/51db5ed8-b57c-40c8-bee2-0036dc236d5a)


- Тест на проверку перемещения заранее недопустимого для перемещения числа(Попытка переместить число 0):


![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/b74d8bf5-43ad-4a8d-89b6-00670785a5fc)


- Тест на проверку решённости головоломки:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/232ebf26-c1b9-4804-ac32-5b5f9c9f48c0)

- Тест для проверки невозможности перемещения чисел при неккоректном размере головоломки:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/166c4208-ea23-4506-b542-08935956b32e)


__Работоспособность тестов и покрытие ими кода:__

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/d1b3dfcb-e30a-4c3d-8f67-11a4598c1a89)


![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/a2cdfcc1-c8df-4d7e-9bd4-eb36d5dac6cb)


