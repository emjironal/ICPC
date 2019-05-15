#include <iostream>
using namespace std;
int main()
{
  short d, i, r;
  while(cin >> d >> i)
  {
    if(d == 0 && i == 0)
    {
      break;
    }
    r = d + i;
    cout << r << "\n";
  }
}
