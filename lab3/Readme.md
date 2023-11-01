<h1 align="center">Лабораторная работа №3</h1>
<h2 align="center">Социальная сеть</h2>


**Цель:** Получить навыки проведения объектно-ориентированного анализа предметной области

**Задание:** Провести объектно-ориентированный анализ предметной области, выделить классы и связи между ними.

**Общие требования к лабораторной работе:**
- использование наследования;
- использование полиморфизма;
- использование обработки исключении при возникновении ошибочных ситуаций;

**Реализованные классы:**
 - **Пользователь(User).** В классе реализованы такие методы, как:
    -  Вывести информацию о пользователе(ShowProfile)
    -   сменить имя пользователя(ChangeNickname)
    -    сменить пароль(ChangePassworrd)
    -    Приглашение в друзья(SendInvite)
    -  проверка на нахождения пользователя в чёрном списке(IsBlackListed);

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/483cc2bb-fcc6-4f4d-ae65-d213ffb83ff4)

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/4b4c8be4-37c5-4e33-82e4-a6d723fc74cb)


 - **Друг(Friend).**  В классе реализованы такие методы, как:
    - Вывести информацию о профиле друга(ShowFriendsProfile)
    - Принятие заявки в друзья(AcceptRequest)

       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/09ab7331-7d19-4eeb-881b-95983cbc4cfa)

       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/73fe7e13-38ed-40a8-9c03-b4c1ad7c1022)


 - **Сообщение(Message).** В классе реализованы такие методы, как:
    - Вывести информацию о сообщении(ShowMessage)
    - Проверка, может ли быть отправлено сообщение(canSendMessage)
    - Пометить сообщение, как прочитанное(MarkAsRead)
  

       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/e69bbe32-aa1a-469a-a66b-7170b10f7bb2)

       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/28a3062a-e59d-46d9-a3b7-1d3653cdf740)


 - **Групповой чат(GroupChat).** В классе реализованы такие методы, как:
    - Вывести информацию о группе(ShowGroupInfo)
    - Добавить участника группы(AddMember)
    - Добавить администратора группы(AddAdmin)


       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/40a8a1eb-5cc8-446a-974a-fd4bd8f9d47f)

       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/2048dc43-e8ab-4ab5-9e4a-53d38b2028f1)


 - **Публикация(Publication).** В классе реализованы такие методы, как:
    - Вывести информацию о публикации(ShowPublicationInfo)

       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/023a0b2d-5c61-4c68-a1ab-2b0d409540d8)

       ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/9b752211-e8ac-4fae-accb-adafbf98bb5d)


 - **Комментарий(Commentary).** В классе реализованы такие методы, как:
    - Вывести информацию о комментарии(ShowCommentaryInfo)
    - Изменить текст комментария(EditCommentary)

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/ba92d304-58a3-48a6-93a5-b41985c233cb)

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/6c89f055-4484-4fc3-a690-30c0c2a36ee0)


 - **Реакция(Reaction).** В классе реализованы такие методы, как:
    - Вывести информацию о реакции(ShowReactionInfo)
    - Изменить тип(Лайк/Репост) реакции(ChangeReactionType)
    - Удалить реакцию(RemoveReaction)

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/b1d23cc5-a1b0-418a-904b-aceea47b0359)

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/25160f49-541b-424c-ab0c-550753098662)


 - **Чёрный список(BlackList).** В классе реализованы такие методы, как:
    - Добавить пользователя в чёрный список(AddUserToBlackList)
    - Очистить чёрный список(ClearBlackList)

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/84ac3408-26f6-4b90-95fb-86a429c2e789)

      ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/0b0ecb85-33e1-4dd1-95f2-4b72505f9bd2)


**Реализованные тесты и покрытие ими кода:**
 - **Тесты класса User:**
    - **Тест на проверку корректной смены имени пользователя:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/364039e9-1802-421f-88f8-c2c0bc46a4a6)

    - **Тест на проверку корректной смены пароля:**
  
    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/63ba40f2-1276-4240-8c09-a3d8677c3e22)

    - **Тест на проверку нахождения пользователя в чёрном списке:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/7c6ceaae-e00e-4617-af1f-c9ef43f77743)

 - **Тесты класса Friend:**
    - **Тест на проверку корректного принятия запроса в друзья:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/d66e397c-73a9-4499-a956-13305eee8f55)

    - **Тест на проверку корректного отображения профиля друга:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/5d12a2e1-7539-4291-a60c-189bc06f0c89)

 - **Тесты класса Message:**
    - **Тест на проверку корректной пометки сообщения, как прочитанного:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/fe2baabe-c96a-4b13-835a-0dc51a272a50)

    - **Тест на проверку корректной отправки сообщения пользователю, не находящемуся в чёрном списке:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/955a9f9b-d4e5-49bd-973d-e3f4d23fda02)

 - **Тесты класса Publication:**
    - **Тест на проверку корректного отображения информации о публикации:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/b10d646d-e455-4b53-9d43-09df9c515571)

    - **Тест на проверку изменения содержимого публикации:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/72eb02fc-a7b0-4d17-a86c-13ed6fd5d0ae)

 - **Тесты класса Commentary:**
    - **Тест на проверку корректного вывода текста комментария:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/b38c5e7f-f039-4889-9596-d070432adfd5)

    - **Тест на проверку корректного изменения текста комментария:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/7eab73a3-c817-433a-b54d-c818c5cdfa04)

    - **Тест на проверку вывода корректной информации об авторе сообщения:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/af9706f1-d6d6-4ea5-952b-11f763830854)

 - **Тесты класса Reaction:**
    - **Тест на проверку корректного вывода информации о реакции:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/55887ccc-9a8e-415f-b2b3-ebc2d4a504b3)

    - **Тест на проверку корректного изменения типа реакции:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/f0954741-6d4a-4f1f-8df6-d78bb0bf32d7)

    - **Тест на проверку корректного удаления реакции:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/4d78ee6a-ca81-4d58-a977-a385cba1ab19)

 - **Тесты класса GroupChat:**
    - **Тест на проверку корректного добавления участника в группу:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/f03cf657-5986-418b-963d-279df156eb65)

    - **Тест на проверку корректного добавления администратора в группу:**

    ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/75acbcfb-54ce-4a2e-84e0-ce32ca5a56ba)


   **Тестовое покрытие:**

   
   ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/f7d87090-4f07-4bb6-8a54-a3fb70b462eb)


   ![image](https://github.com/MarkGfrv/PPOIS/assets/113544592/dc12c6bf-8f05-40ae-90ee-b16bc0ce3513)

