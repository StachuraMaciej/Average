#include <iostream>
#include <windows.h>

using namespace std;
float ocena[5],srednia,suma=0;
int main()
{
    for (int i=1; i<=5 ;i++)
    {
    cout << "Podaj "<<i<<" ocene: ";
    cin >> ocena[i];
    suma += ocena[i];
    }

  srednia=suma/5;
  cout << "Srednia wynosi: "<<srednia<<endl;

  system("pause");
    return 0;
}
