## Homework

### Part I

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.![image](https://user-images.githubusercontent.com/92674699/158900128-609ed2d4-cbce-4b39-b5c5-0f52c914eb3b.png)

3. Создайте файл `hello_world.cpp` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку `using namespace std;`.![image](https://user-images.githubusercontent.com/92674699/158900149-07fbe53c-55d1-40b9-ac48-ffa7105c78b7.png)
![image](https://user-images.githubusercontent.com/92674699/158900278-e09fd0c9-2039-46e0-a5a7-4cc9375930f2.png)

4. Добавьте этот файл в локальную копию репозитория.![image](https://user-images.githubusercontent.com/92674699/158900305-a8a125be-003b-4243-a1c2-b28270db2304.png)

5. Закоммитьте изменения с *осмысленным* сообщением.![image](https://user-images.githubusercontent.com/92674699/158900531-e7d035bb-afa7-4574-ac59-2ef80c059179.png)

6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение `Hello world from @name`, где `@name` имя пользователя.
nano hello_world.cpp
![image](https://user-images.githubusercontent.com/92674699/158900347-f4cd0ba2-89e5-4f5b-a673-619f43c199a9.png)
7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно `git add`?![image](https://user-images.githubusercontent.com/92674699/158900597-612844ff-d425-48b2-90c6-38ae07e3f712.png)

8. Запуште изменения в удалёный репозиторий.![image](https://user-images.githubusercontent.com/92674699/158900641-839e5505-df4f-4b5e-a320-a2e929b7adbf.png)

9. Проверьте, что история коммитов доступна в удалёный репозитории.![image](https://user-images.githubusercontent.com/92674699/158900614-534c969a-d999-4a53-970c-d0275a75dc47.png)


### Part II

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. В локальной копии репозитория создайте локальную ветку `patch1`.
>git checkout -b patch1

2. Внесите изменения в ветке `patch1` по исправлению кода и избавления от `using namespace std;`.
>Через nano hello_world.cpp редактируем файл
3. **commit**, **push** локальную ветку в удалённый репозиторий.![image](https://user-images.githubusercontent.com/92674699/158900829-50369b11-6133-4e04-bd64-52b236ee3a4b.png)

4. Проверьте, что ветка `patch1` доступна в удалёный репозитории.![image](https://user-images.githubusercontent.com/92674699/158900856-7496e054-d543-4a9e-bf5c-bab7133a170d.png)

5. Создайте pull-request `patch1 -> master`.![image](https://user-images.githubusercontent.com/92674699/158900892-b9a8088d-6f13-44d5-bd21-e3138bcda85b.png)

6. В локальной копии в ветке `patch1` добавьте в исходный код комментарии.![image](https://user-images.githubusercontent.com/92674699/158900972-e88f6d80-1d6c-4f11-8e82-857ffe372eb7.png)

7. **commit**, **push**.
8. Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request![image](https://user-images.githubusercontent.com/92674699/158901004-45706e58-169b-4ea6-9fce-eac72aa66e02.png)

9. В удалённый репозитории выполните  слияние PR `patch1 -> master` и удалите ветку `patch1` в удаленном репозитории.
10. Локально выполните **pull**.
11. С помощью команды **git log** просмотрите историю в локальной версии ветки `master`.
![image](https://user-images.githubusercontent.com/92674699/158901125-c84cd1f2-5721-4ca8-ae7e-c7b69ad85067.png)

12. Удалите локальную ветку `patch1`.
![image](https://user-images.githubusercontent.com/92674699/158901099-ed49f2df-f8ac-4629-8f79-79ffb1e1566a.png)


### Part III

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. Создайте новую локальную ветку `patch2`.
2. Измените *code style* с помощью утилиты [**clang-format**](http://clang.llvm.org/docs/ClangFormat.html). Например, используя опцию `-style=Mozilla`.
![image](https://user-images.githubusercontent.com/92674699/158901217-d6fda53d-4bb3-426e-8308-8aacb43e69e7.png)

3. **commit**, **push**, создайте pull-request `patch2 -> master`.
![image](https://user-images.githubusercontent.com/92674699/158901253-b39e75dd-a109-4706-8413-3dcaea44f68d.png)

4. В ветке **master** в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
![image](https://user-images.githubusercontent.com/92674699/158901317-2da67d0e-83fd-4591-88b7-b1442273e202.png)
![image](https://user-images.githubusercontent.com/92674699/158901343-99668e98-dadb-4139-92a6-e0bd28221a52.png)

5. Убедитесь, что в pull-request появились *конфликтны*.
![image](https://user-images.githubusercontent.com/92674699/158901357-f4716481-574a-4d66-b228-e36cce3bc62c.png)

6. Для этого локально выполните **pull** + **rebase** (точную последовательность команд, следует узнать самостоятельно). **Исправьте конфликты**.
![image](https://user-images.githubusercontent.com/92674699/158901379-fbc7a40a-e215-46c5-bd6b-042a7d00f1b8.png)
![image](https://user-images.githubusercontent.com/92674699/158901410-84aa4793-0104-468c-b367-2b84311b3d73.png)
![image](https://user-images.githubusercontent.com/92674699/158901428-c4aaa2a1-cc11-4bd8-a1b3-fd493cbe8020.png)

7. Сделайте *force push* в ветку `patch2`
8. Убедитель, что в pull-request пропали конфликтны. 
![image](https://user-images.githubusercontent.com/92674699/158901451-cf746f8d-7f7e-460f-a591-73670b911865.png)

9. Вмержите pull-request `patch2 -> master`.
![image](https://user-images.githubusercontent.com/92674699/158901461-e327d500-4ada-48f1-bdae-18fab69b38a0.png)

