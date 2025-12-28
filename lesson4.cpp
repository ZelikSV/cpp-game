// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0));

  cout << "САКРАЛЬНЕ ЧИСЛО" << endl
       << endl;

  cout << "Ти обираєш своє Сакральне Число від 1 до 6." << endl;
  cout << "Далі на тебе чекає випробування у чотирьох святилищах." << endl
       << endl;
  cout << "Страж кожного святилища викине власний кубик Долі" << endl;
  cout << "І вирішить, чи заслуговуєш ти на Монети Провидіння" << endl;
  cout << "Якщо - згідно закону цього святилища." << endl;
  cout << "Потрібно зібрати не менше 4 Монети Провидіння." << endl;
  cout << "І тоді Брама Долі відкриється перед тобою..." << endl
       << endl;

  cout << "Святилища і їхні закони:" << endl;
  cout << "- Абсолют: Закон Співпадіння -> +3 монети" << endl;
  cout << "- Різноманітність: Закон Відмінності -> +1 монета" << endl;
  cout << "- Перевершення: Закон Переваги -> +2 монети" << endl;
  cout << "- Обережність: Закон Смирення -> +2 монети" << endl
       << endl;

  cout << "Обери своє Сакральне Число (1-6): ";

  int luckNumber;
  cin >> luckNumber;
  int money = 0;

  cout << "Святилище Абсолюту" << endl;

  int number1 = rand() % 6 + 1;

  cout << "Гра викидає номер " << number1 << endl;

  if (luckNumber == number1)
  {
    cout << "Абсолют визнає тебе" << endl
         << endl;
    money = money + 3;
  }
  else
  {
    cout << "Абсолют не визнає тебе" << endl
         << endl;
  }

  cout << "Святилище Різноманітністі" << endl;

  int number2 = rand() % 6 + 1;

  cout << "Страж викидає номер " << number2 << endl;

  if (luckNumber != number2)
  {
    cout << "Різноманітність визнає тебе" << endl
         << endl;
    money = money + 1;
  }
  else
  {
    cout << "Різноманітність не визнає схожість" << endl
         << endl;
  }

  cout << "Святилище Перевершення" << endl;

  int number3 = rand() % 6 + 1;

  cout << "Страж викидає номер " << number3 << endl;

  if (luckNumber > number3)
  {
    cout << "Ти перевершив сподівання" << endl
         << endl;
    money = money + 2;
  }
  else
  {
    cout << "Кубік вивився сильніше за тебе" << endl
         << endl;
  }

  cout << "Святилище Обережності" << endl;
  int number4 = rand() % 6 + 1;

  cout << "Страж викидає номер " << number4 << endl;

  if (luckNumber <= number4)
  {
    cout << "Ти залишився обережним" << endl
         << endl;
    money = money + 2;
  }
  else
  {
    cout << "Зухвалість не для цього місця" << endl
         << endl;
  }

  cout << "Твої гроші " << money << " монет." << endl
       << endl;

  if (money >= 4)
  {
    cout << "Брама Долі відкриється перед тобою" << endl
         << endl;
  }
  else
  {
    cout << "Брама Долі залишилися зачиненою" << endl
         << endl;
  }
}
