#include <iostream>
using namespace std;
int main()
{
  string n;
  int t;
  cin >> t;
  do
  {
    cin >> n;
    int temp = 0;
    for(int i = 0; i < n.size(); i++)
    {
      temp += stoi(to_string(n[i])) % 3;
    }
    if(temp % 3 == 0 && stoi(to_string(n[n.size() - 1])) % 2 == 0)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
    t--;
  }
  while(t > 0);
}
