#include <iostream>
using namespace std;
int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  long result = 0;
  for(long i = 0; i < str1.size(); i++)
  {
    int a = (str1[i] - 48);
    for(long j = 0; j < str2.size(); j++)
    {
      result += a * (str2[j] - 48);
    }
  }
  cout << result << "\n";
}
