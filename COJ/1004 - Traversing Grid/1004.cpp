#include <iostream>
using namespace std;
int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t, n, m;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cin >> n >> m;
    if(n == m)
    {
      if((n % 10) % 2 == 0)
      {
        cout << "L" << "\n";
      }
      else
      {
        cout << "R" << "\n";
      }
    }
    else if(n < m)
    {
      if((n % 10) % 2 == 0)
      {
        cout << "L" << "\n";
      }
      else
      {
        cout << "R" << "\n";
      }
    }
    else
    {
      if((m % 10) % 2 == 0)
      {
        cout << "U" << "\n";
      }
      else
      {
        cout << "D" << "\n";
      }
    }
  }
}
