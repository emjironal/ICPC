#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int total, var1, var2, cont;
	cin >> total;
	cont = total;
	cin >> var1;
	for (int i = 1; i < cont; ++i)
	{
		cin >> var2;
		if (var1 >= var2) {
			total--;
		}
		var1 = var2;
	}
	cout << total << "\n";
}