#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int size, n,pos;
  cin >> size;

  int arr[size];
  for(int i=0 ; i < size ; i++){
    cin >> arr[i];

    arr[i] = arr[i] / 5 + ( arr[i]%5 != 0 ? 1 : 0 );
  

  }

  cin >> n;
  for (int i=0; i<n ; i++){
    cin >> pos;
    cout << arr[pos-1]<< "\n";
  }

}
