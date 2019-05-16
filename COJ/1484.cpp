#include <iostream>
using namespace std;
int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t, result = 0;
  double temp, n;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cin >> n;
    if(n >= temp)
    {
      temp = n;
      result = i + 1;
    }
  }
  cout << result << "\n";
}
