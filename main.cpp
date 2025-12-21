#include <iostream>

using namespace std;

int main()
{
  cout << "Твоя задача - отримати чарівну книгу йопта" << endl;
  cout << "Тебе зустрічає дух лісу і шепоче дивну *уйню" << endl;

  int divna_uinya = 1234;

  cout << divna_uinya << endl;

  cout << "Ти добрався до замку та знайшов сейф, кий вимагає код" << endl;

  int answer;

  cin >> answer;

  if (answer == divna_uinya)
    cout << "Ти вгадав. Молодець!!!" << endl;
  else
    cout << "Не вгадав дурень!" << endl;

  return 0;
}
