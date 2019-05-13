#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, total = 0, tam, igual = 0;
	cin >> n;
	string correos[n];
	for(int i = 0; i < n; i++)
	{
		string correo,sub,temp;
		cin >> correo;
		tam = correo.size();
		temp = "";
		bool flag = true;
		for(int j = 0; j < tam; j++)
		{
			sub = correo.at(j);
			if(sub == "@")
			{
				temp += correo.substr(j,tam-j);
				break;
			}
			else if(sub == "+")
			{
				flag = false;
			}
			else if(flag && sub != ".")
			{
				temp += sub;
			}
		}
		correos[i] = temp;
	}
	for(int i = 0; i < n; i++)
	{
		bool flag = true;
		for(int j = i + 1; j < n; j++)
		{
			if(correos[i] == correos[j])
			{
				flag = false;
				igual++;
			}
		}
		if(flag)
		{
			total++;
		}
	}
	cout << total << "\n";
}

/*
7
alice@e.mail
eve@another.mail
bob.@e.mail
joe90@e.mail
b.o.b@e.mail
bob+new@e.mail
bob@another.provide
*/