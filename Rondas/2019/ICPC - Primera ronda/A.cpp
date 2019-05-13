#include<iostream>
using namespace std;
int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int cantidad, diff,i,j;
  int totaldiff = 0;
  cin >> cantidad;
  int arr[cantidad];

  for(i = 0; i < cantidad ; i++)
  {
    cin >> arr[i];
  }
  for(i = 0; i < cantidad ; i++)
  {
    for(j = i + 1; j < cantidad ; j++)
    {
      diff = arr[j] - arr[i];
      if(diff != 1 && diff != -1)
      {
        totaldiff += diff;
      }
    }
  }
  cout << totaldiff << "\n";
}
