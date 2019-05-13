#include <iostream>
#include <queue>
using namespace std;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int i;
  cin >> i;
  int k;
  priority_queue<int> cola;
  for (int j = 0; j < i; j++){
    cin >> k;
    cola.push(k);
  }
  int array[i];
  for(int c = i-1; c >= 0; c--)
  {
    array[c] = cola.top();
    cola.pop();
  }
  long r = 1;
  for (int j = 0; j < i; j++){
    if (r >= array[j]){
      r += array[j];
    }else{
      break;
    }
  }
  cout << r << "\n";
}
