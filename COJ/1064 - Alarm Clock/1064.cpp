#include <iostream>
using namespace std;
int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int h1, m1, h2, m2;
  while(true)
  {
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
    {
      break;
    }
    int result = 0;
    if(m2 < m1 && h2 == h1)
    {
      result += 1440 + (m2 - m1);
    }
    else
    {
      if(h2 < h1)
      {
        result += (24 - (h1 - h2)) * 60;
      }
      else
      {
        result += (h2 - h1) * 60;
      }
      result += m2 - m1;
    }
    cout << result << "\n";
  }
}
