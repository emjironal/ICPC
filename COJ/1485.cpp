#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<string> cola;
	string str;
	cin >> str;
	for(int i = 0; i < str.size(); i++)
	{
		string temp(1, str[i]);
		cola.push(temp);
	}
	string result = "";
	for(int i = 0; i < str.size(); i++)
	{
		result = cola.top() + result;
		cola.pop();
	}
	cout << result << "\n";
}