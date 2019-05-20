#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int angulo;
	char c = 10;
	cin >> angulo;
	if(angulo %6 == 0)
		cout << "Y\n";
	else
		cout << "N\n";
}