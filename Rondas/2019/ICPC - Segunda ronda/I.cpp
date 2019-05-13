#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int N, M, T, t, r;
  cin >> N >> M >> T >> t >> r;
  int cont, ent, a;
  cont = 0;
  ent = 0;
  a = 0;
  if (T < t){
    cout << -1 << "\n";
  }else{
    while (cont < N && ent < M){
      if (a + t > T){
        a -= r;
        if (a < 0){
          a = 0;
        }
      }else{
        ent++;
        a += t;
      }
      cont++;
    }
    if(M == ent){
      cout << cont << "\n";
    }else{
      cout << -1 << "\n";
    }

  }

}
