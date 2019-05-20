#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  long t, l, c, co;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cin >> l >> c;
    co = 0L;
    if (c > l){
      c -= l;
      l += 3L;
      co -= 2L;
      while(c > l){
        c -= l;
        l += 2L;
        co -= 1L;
      }
      c += co;
    }
      cout << c << "\n";
  }

}
