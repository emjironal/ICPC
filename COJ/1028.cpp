#include <iostream>
using namespace std;
int main()
{
  string s, t;
  while(cin >> s >> t)
  {
    if(s != "\n" || t != "\n")
    {
      int conts = 0;
      for(int i = 0; i < t.size(); i++)
      {
        if(t[i] == s[conts])
          conts++;
      }
      if(conts == s.size())
        cout << "Yes" << "\n";
      else
        cout << "No" << "\n";
    }
  }
}
