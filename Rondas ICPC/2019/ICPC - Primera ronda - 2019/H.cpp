#include<iostream>
#include<queue>
using namespace std;

int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, t, tmp;
  cin >> n >> t;
  priority_queue<int> array;
  int problems[n];
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    array.push(tmp);
  }
  for(int i = n - 1; i >= 0; i--)
  {
    problems[i] = array.top();
    array.pop();
  }
  int uno = 0, dos = 0;
  tmp = t;
  for(int i = 0; i < n; i++)
  {
    if(tmp - problems[i] <= 0)
    {
      break;
    }
    tmp -= problems[i];
    uno++;
  }
  tmp = t;
  for(int i = n - 1; i >= 0; i--)
  {
    if(tmp - problems[0] <= 0)
    {
      break;
    }
    else if(tmp - problems[i] <= 0)
    {
      continue;
    }
    else
    {
      tmp -= problems[i];
      dos++;
    }
  }
  cout << dos << " " << uno << "\n";
}
