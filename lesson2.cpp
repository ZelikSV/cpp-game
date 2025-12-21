#include <iostream>

using namespace std;

int main()
{
  srand(time(0));

  int result = rand() % 2;

  if (result == 1) cout<<"Ти виграв!!"<<endl;

  else cout<<"Ти програв!!"<<endl;

  return 0;
}
