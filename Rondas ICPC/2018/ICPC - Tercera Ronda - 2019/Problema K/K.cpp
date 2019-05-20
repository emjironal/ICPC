#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int entrada;
	float x, y, r, d, s, r2;
	cin >> entrada;
	float circulos[entrada * 3];
	int resultado = 0;
	cin >> x >> y >> r;
	circulos[0] = x;
	circulos[1] = y;
	circulos[2] = r;
	
	for(int i = 1; i < entrada; i++)
	{
		cin >> x >> y >> r;
		circulos[i*3] = x;
		circulos[(i*3)+1] = y;
		circulos[(i*3)+2] = r;

		for(int f = 0; f < i; f++)
		{
			d = sqrt(pow((x-circulos[f*3]),2) + pow((y-circulos[(f*3)+1]), 2));
			r2 = circulos[(f*3)+2];
			
			if(((r > r2) && ( abs(r - d) < r2)) || ((r <= r2) && (abs(r2 - d) < r)))
			{
				resultado += 2;
			}
			
			if (resultado > entrada*2)
			{
				cout <<"greater"<<"\n";
				return 0;
			}
			
		}
		
	}
	 
	
	cout << resultado << "\n";

	return 0;
}

