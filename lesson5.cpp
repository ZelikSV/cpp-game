#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "====================" << endl;
    cout << "      КАРАВАН       " << endl;
    cout << "====================" << endl;

    cout << "Ти очолюєш торговий караван, що прямує крізь безкраю пустелю." << endl;
    cout << "Твоя подорож пролягатиме від однієї оази до іншої." << endl;
    cout << "У твоєму розпорядженні - золоті динари та мішки з зерном." << endl;
    cout << "В оазах ти можеш торгувати зерном або зробити перепочинок." << endl;
    cout << "Кожен перехід до нової оази потребує одного мішка зерна." << endl;
    cout << "Коли запаси зерна вичерпаються - мандрівка добігає кінця." << endl;
    cout << "Твоя мета - пройти якомога більшу відстань." << endl;

    int money = 20;
    int food = 5;
    int oasis = 0;

    while (food > 0) {
      // oasis = 1 + oasis;
      // oasis += 1;
      oasis++;
      // food -= 1;
      food--;

      int price = rand() % 6 + 1;

      cout << endl;
      cout << "--------------------" << endl;
      cout << "Оаза № " << oasis << endl;
      cout << "--------------------" << endl;
      cout << "Гроші : " << money << endl;
      cout << "Зерно : " << food << endl;
      cout << "Ціна  : " << price << endl;
      cout << "--------------------" << endl;
      cout << "Скільки зерна бажаєш придбати або продати?" << endl;
      cout << "(>0 - купівля, <0 - продаж, 0 - нічого не робити)" << endl;

      int amount;
      cout << "Введи кількість:";
      cin >> amount;

      if (amount > 0) {
         int cost = amount * price;

         if (money >= cost) {
           // money = money - cost;
            money -= cost;
            food += amount;
         } else {
            cout << "Ти не маєш достатньо грошей." << endl;
         }
      } else if (amount < 0) {
        int sellAmount = -amount;
        int cost = amount * price;

        if (food >= -sellAmount) {
          food -= sellAmount;
          money += cost;
        } else {
          cout << "Ти не маєш достатньо зерна." << endl;
        }
      } else {
        cout << "Ти не можеш нічого купувати або продавати." << endl;
      }

      if(money > 50 && rand() % 6 + 1 == 1) {
        cout << "Розбійники грабують караван!" << endl;
        int demant = money * 0.4;
        int choice;

        cout<<"Розбійники вимагають "<<demant<<" динарів"<<endl;

        cout<<"1 - Заплатити розбійникам"<<endl;
        cout<<"2 - Битися 3 розбійниками"<<endl;

         cin >> choice;

         if (choice == 1) {
          money -= demant;
         } else if (choice == 2) {
          int fight = rand() % 100;
          if (fight < 40) {
            cout<<"Ти переміг розбійників!"<<endl;
          } else if (fight < 80) {
            cout<<"Ти програв битву!"<<endl;
            demant *=1.5;
            cout<<"Розбійники забрали "<<demant<<" динарів"<<endl;
            money -= demant;
         } else {
            cout<<"Фатальна поразка! Гру закінчено!"<<endl;
            break;
         }
         }
      }
    }

    cout<<"Ти пройшов "<<oasis<<" оаз."<<endl;
    cout<<"Ти заробив "<<money<<" динарів."<<endl;

    return 0;
}
