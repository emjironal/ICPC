#include <iostream>
using namespace std;
int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  string n;
  while(cin >> n)
  {
    int size = n.size(), temp = 0, par = 0, impar = 0;
    if(n[size - 1] - 48 == 5)
    {
      //divisible entre 3
      for(int i = 0; i < size; i++)
      {
        temp += n[i] - 48 % 9;
      }
      if(temp % 9 == 0)
      {
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
          cout << "YES" << "\n";
        }
        else
        {
          cout << "NO" << "\n";
        }
      }
      else
      {
        cout << "NO" << "\n";
      }
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
}
