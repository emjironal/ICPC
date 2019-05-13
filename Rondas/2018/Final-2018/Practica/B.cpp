#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int dig, temp;
	cin >> dig;
	string numeros[dig];
	string braille;
	temp = dig;
	dig *= 3;
	for(int contDig = 0; contDig < dig; contDig++)
	{
		cin >> braille;
		numeros[contDig % temp] += braille;
	}
	for(int contDig = 0; contDig < temp; contDig++)
	{
		if(numeros[contDig] == "*.....")
		{
			cout << 1;
		}
		else if(numeros[contDig] == "*.*...")
		{
			cout << 2;
		}
		else if(numeros[contDig] == "****..")
		{
			cout << 7;
		}
		else if(numeros[contDig] == "**....")
		{
			cout << 3;
		}
		else if(numeros[contDig] == "**.*..")
		{
			cout << 4;
		}
		else if(numeros[contDig] == "*..*..")
		{
			cout << 5;
		}
		else if(numeros[contDig] == "***...")
		{
			cout << 6;
		}
		else if(numeros[contDig] == "*.**..")
		{
			cout << 8;
		}
		else if(numeros[contDig] == ".**...")
		{
			cout << 9;
		}
		else if(numeros[contDig] == ".***..")
		{
			cout << 0;
		}
	}
	cout << "\n";
}