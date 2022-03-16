#include <iostream>

int main(){
   std::cout << "Введите ваше имя"; //Запрашиваем имя пользователя
   std::string name;
   std::cin >> name;//Запоминаем имя пользователя
   std::cout << "Hello world from " << name;//Вывод
}
