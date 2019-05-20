#include<iostream>
using namespace std;

int[] encontrarCamino(int l[][], int n, int a, int b, int recorridos[])
{
  for(int i = 0; i < n; i++)
  {

  }
}

int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
   int v, e;
   cin >> v >> e;
   int c[v];
   for(int i = 0; i < v; i++)
   {
     cin >> c[i];
   }
   int rally[v][v];
   for(int i = 0; i < v; i++)
   {
     rally[i].fill(0);
   }
   for(int i = 0; i < v - 1; i++)
   {
     int a, b;
     cin >> a >> b;
     rally[a - 1][b - 1] = 1;
     rally[b - 1][a - 1] = 1;
   }

}
