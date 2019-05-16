#include <iostream>
using namespace std;
int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    int n, candy = 0, temp;
    cin >> n;
    for(int j = 0; j < n; j++)
    {
      cin >> temp;
      candy += temp;
    }
    if(candy % n == 0)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
}
