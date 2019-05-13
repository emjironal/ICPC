#include <iostream>
using namespace std;
int main()
{
  int n, a, even, odd;
  string temp;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    even = odd = 0;
    cin >> a;
    for(int j = 0; j < a; j++)
    {
      cin >> temp;
      if((temp[temp.size() - 1] - 48) % 2 == 0)
        even++;
      else
        odd++;
    }
    cout << even << " even and " << odd << " odd." << "\n";
  }
}
