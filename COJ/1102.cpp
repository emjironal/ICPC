#include <iostream>
using namespace std;
int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  string n;
  while(cin >> n)
  {
    if(n == "0")
    {
      break;
    }
    int size = n.size(), par = 0, impar = 0;
    for(int i = 0; i < size; i++)
    {
      if((i + 1) % 2 == 0)
      {
        par += n[i] - 48;
      }
      else
      {
        impar += n[i] - 48;
      }
    }
    if((par - impar) % 11 == 0)
    {
      cout << n << " is a multiple of 11." << "\n";
    }
    else
    {
      cout << n << " is not a multiple of 11." << "\n";
    }
  }
}
