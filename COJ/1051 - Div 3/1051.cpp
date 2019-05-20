#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int res = 0;
	if (n%3 == 2)
	{
		res++;
	}
	res += (n / 3) * 2;
	cout << res << "\n";
}