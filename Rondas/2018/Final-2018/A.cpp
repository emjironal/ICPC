#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int dos = 5;
	int tres = 2;
	int cinco = 3;
	float num;
	int a;
	cin >> num;
	int num2 = num * 100;
	a = num2;
	while(a % 2 == 0 && dos != 0){
		dos--;
		a/=2;
	}
	while(a % 5 == 0 && cinco != 0){
		cinco--;
		a/=5;
	}
	while(a % 3 == 0 && tres != 0){
		tres--;
		a/=3;
	}
	cout << ((36000*a)/(num2)) << "\n"; 
}