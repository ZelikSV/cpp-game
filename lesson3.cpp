#include <iostream>

using namespace std;

int main()
{
  srand(time(0));

  int playerResult = rand() % 6 + 1;

  int computerResult = rand() % 6 + 1;

  cout << "Твій результат:" <<playerResult << endl;
  cout << "Результат комп'ютера:" << computerResult << endl;

  if (playerResult > computerResult)
    cout << "Ви виграли!" << endl;
  else if (playerResult < computerResult)
    cout << "Ви програли!" << endl;
  else
    cout << "Нічия!" << endl;

  return 0;
}
