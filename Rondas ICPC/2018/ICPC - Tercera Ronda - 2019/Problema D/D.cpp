#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int N, p;
	int victorias = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		cin >> p;
		if(p != 1)
		{
			victorias++;
		}
	}
	cout << victorias << "\n";

	return 0;
}
