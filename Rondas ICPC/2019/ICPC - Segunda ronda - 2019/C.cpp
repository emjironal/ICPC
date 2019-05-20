#include <iostream>
#include <math.h>
using namespace std;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  long k, result;
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> k;
    k -= 1;
    result = 10;
    int residuo = k % 10;
    int cosiente = k / 10;
    for (int j = 0; j < cosiente; j++){
      result *= 3486784401L;
      result = result % 1000000007L;
    }
    for (int j = 0; j < residuo; j++){
      result *= 9;
      result = result % 1000000007L;
    }

    cout << result << "\n";
  }

}
