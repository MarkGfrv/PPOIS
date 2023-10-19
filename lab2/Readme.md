<h1 align="center">Лабораторная работа №2</h1>
<h2 align="center">Фирма по ремонту</h2>


Задание: построить иерархию классов по заданной предметной области с применением следующих концепций ООП:
 - закрытое;
 - открытое;
 - защищённое наследование;
 - виртуальные методы;
 - разрешение имён с помощью using-директивы;
 - множественное наследование
 - виртуальное наследование

Реализованные классы:
 - Класс Employee - работник фирмы:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/7b727ec0-f732-449d-9d00-71954dd1b5f7)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/608aae34-a28f-49d9-8076-1effab81b222)

 - Классы Manager и Engineer - классы, наследуемые от класса Employee:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/9174cef2-dee9-4af8-aff8-62d6dbca4392)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/d44af1bc-7da6-4553-b610-a384d78d7090)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/d8814f27-5462-4f8a-a331-4fc0bced7201)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/881dda14-2777-48e0-bad2-007247927c24)

 - Класс Customer - клиент фирмы:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/5717e705-5ccf-4699-afbd-5d769bf09e4a)
  
![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/75e026a2-aba0-4af6-aa38-d742d765772f)

 - Класс Service - класс выполняемых сотрудниками работ:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/03cf4326-81b6-47c3-9ca5-c1b2c2b2e419)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/02278992-699f-4e64-ab82-d0982aa7d757)


 - Классы PlumbingService, ConstructionService и ElectricInstallationWork - типы выполняемых работ, наследуемые от класса Service: сантехнические, строительные и электромонтажные соответственно:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/0c130d8d-0406-458d-b664-873ef74f9513)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/a1756e60-ceb6-4c15-8467-52ab5ca57a14)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/e0f888ed-4ab6-4220-acd6-ab53f1cf1ac7)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/73e16803-a0b7-40b9-9e41-5e99d4d9f930)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/ef6493b7-cb8f-4c7b-ba14-fe1c07f9a62c)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/9217df56-8ebc-4ce7-80ea-b830bd526acb)


 - Класс RequestedService - класс, описывающийжелаемую услугу и связывающий потребителя с работником:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/87c52a88-5bf0-4d71-8169-407df712bb1d)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/85452ea6-f09e-403c-95f0-8a5e215ef43c)


 - Класс BillForServices - класс, выражающий счёт клиента за выполненную услугу:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/7ea3b29c-5876-4435-a8ab-3ad4aed83807)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/761aed93-8045-40f9-9acf-baa7c00eede3)


 - Класс UsedTools - класс, выражающий инструменты, используемые в процессе выполнения услуг:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/a0417918-3c17-477d-b998-0b21f4a62733)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/e61957e0-810e-4cba-a0a1-04045bb6b427)


Реализованные тесты:
 - Проверка корректного создания объекта Manager с заданными параметрами конструктором:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/739dd021-9130-4ad3-a9ff-b82f909f64b2)

 - Проверка корректного создания объекта Engineer с заданными параметрами конструктором:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/328449ef-a5e5-40ba-b8ee-944cbcba2074)

 - Проверка корректного создания объекта Customer с заданными параметрами конструктором:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/3087a4d2-5188-4e2c-9fb5-836bc8b35740)

 - Проверка метода InspectPlumbing: метод является проверкой сантехники перед ремонтом:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/fce7dba4-87be-45ea-af5c-bbef51f3a73c)

 - Проверка метода PlaceOrder: проверка, что заказ на выполнение работ помещается в очередь без ошибок:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/bbc1d91c-96cd-46bd-bd67-eac3934d0a9e)

 - Проверка метода generateBill: проверка, что при выполнении услуги счёт за её выполнение генерируется успешно:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/04b68f0d-428e-42ad-abf0-c9c11061242d)

 - Проверка метода ConstructionServiceSafety: проверка, что метод успешно обеспечивает безопасность на стройплощадке:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/ac9db100-4184-40a0-b4c6-2aa54e533895)

 - Проверка метода ElectricInstallationWiringTest: проверка, что метод успешно проверяет проводку перед выполнением работ:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/666f2f7e-f806-446f-ac63-dc428495b64b)

 - Проверка, что метод CompleteOrder завершает заказ без ошибок:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/e225d14c-c68d-4291-ad99-766205b58adf)

 - Проверка, что метод SetPaymentStatus корректно устанавливает статус оплаты счёта клиентом:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/497e5d65-e45a-4305-8e0d-ef09d93247db)

 - Проверка корректной работы GetServiceType - выбора типа услуги:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/7f9804b2-8f79-40cc-948c-09e03c441720)

 - Проверка, что метод GetServiceCost возвращает корректную стоимость услуги:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/c2fece38-6dac-4b7a-b0d6-f8a1cf4a4077)

 - Проверка корректной работы менеджера с помощью метода PerformMonthlyMeeting:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/51edc308-9833-423f-afe0-15a284d66739)

 - Проверка, что метод GetCustomName корректно возвращает ожидаемое имя клиента:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/ebee3471-4239-47b2-ac20-24eba641295c)

 - Тест на полный цикл вызова, заказа, оплаты услуги и создания кореектного статуса для её оплаты:

 ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/2d0d8b23-8292-4c97-bba9-e2375ffe37e8)

 - Тест на проверку корректного выполнения методов назначения даты и подтверждения заказа:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/a59c133e-d229-4f7d-a95a-741c4fc10595)



Успешное выполнение тестов и процент покрытия ими кода:

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/fb07fb47-c830-4e03-89e4-e3d743ad011a)

![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/0d91fef7-de96-468f-a8a3-ba6f3562e04a)


![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/9d11bda5-970a-46f5-9809-99d330ef736a)

