#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int cantLados, tamCir = 0;
	cin >> cantLados;
	int lados[cantLados];
	for(int i = 0; i < cantLados; i++)
	{
		cin >> lados[i];
		tamCir += lados[i];
	}
	if(tamCir % 2 != 0){
		cout << "N" << "\n";
		return(0);
	}
	tamCir /= 2;

	int temp = 0, 
		voy = 0,
		diag = 0,
		k = 0;
	for(int i = 0; i < cantLados; i++)
	{
		if(voy >= tamCir or diag >= 2)
		{
			break;
		}
		else
		{
			for(int j = k; j < cantLados; j++)
			{
				if(temp == tamCir)
				{
					diag++;
					k = j;
					temp -= lados[i];
					break;
				}
				else if(temp > tamCir)
				{
					k = j;
					temp -= lados[i];
					break;
				}
				temp += lados[j];
			}
		}
		voy += lados[i];
	}
	if(diag >= 2)
	{
		cout << "Y" << "\n";
	}
	else
	{
		cout << "N" << "\n";
	}
}
/*
6
3 7 7 3 10 10
*/