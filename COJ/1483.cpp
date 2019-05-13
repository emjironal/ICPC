#include <iostream>
using namespace std;
int main()
{
  string line;
  cin >> line;
  int a;
  cin >> a;
  if(line == "square")
  {
      a *= a;
  }
  else
  {
      int b;
      cin >> b;
      a *= b;
  }
  cout << a << "\n";
}
