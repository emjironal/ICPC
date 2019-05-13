#include <iostream>
#include <iomanip>

using namespace std;

bool memeber(bool arreglo[], int lamp)
{
	for(int i = 0; i < lamp; i++)
	{
		if(arreglo[i])
		{
			return false;
		}
	}
	return true;
}

bool estadoInicial(bool inicial[], bool arreglo[], int lamp)
{
	for(int i = 0; i < lamp; i++)
	{
		if(arreglo[i] != inicial[i])
		{
			return false;
		}
	}
	return true;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int sw, lamp;
	cin >> sw >> lamp;
	
	//inicializar variable lamparas e inicial
	bool lamparas[lamp];
	bool inicial[lamp];
	
	for(int j = 0; j < lamp; j++)
	{
		lamparas[j] = false;
		inicial[j] = false;
	}
	
	//encendiendo lamparas
	int in;
	cin >> in;
	for(int j = 0; j < in; j++)
	{
		int encendida;
		cin >> encendida;
		lamparas[encendida - 1] = true;
		inicial[encendida - 1] = true;
	}
	
	//enlaces de interruptores
	
	bool switches[sw][lamp];
	for(int i = 0; i < sw; i++)
	{
		for(int j = 0; j < lamp; j++)
		{
			switches[i][j] = false;
		}
	}
	
	for(int i = 0; i < sw; i++)
	{
		int cant;
		cin >> cant;
		for(int j = 0; j < cant; j++)
		{
			int lampa;
			cin >> lampa;
			switches[i][lampa - 1] = true;
		}
	}
	
	
	//proceso
	int cont = 0;
	while(true)
	{
		for(int i = 0; i < sw; i++)
		{
			cont++;
			for(int j = 0; j < lamp; j++)
			{
				if(switches[i][j])
				{
					lamparas[j] = !lamparas[j];
				}
			}
			if(memeber(lamparas, lamp))
			{
				cout << cont << "\n";
				return 0;
			}
			
		}
		if(estadoInicial(inicial, lamparas, lamp))
		{
			cout << -1 << "\n";
			return 0;
		}
	}
}
