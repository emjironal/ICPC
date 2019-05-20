#include<iostream>
using namespace std;
int main()
{
  string entrada;
  cin >> entrada;
  long cont = 0;
  for(int i = 0; i < entrada.size() ; i++)
  {
    if (entrada[i] == 49)
    {
        cont++;
    }
  }
  cont *= (cont + 1);
  cont /= 2;
  cout << cont << "\n";
}
