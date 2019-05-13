#include <iostream>
#include <iomanip>

using namespace std

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int canicaA = 0;
	bool jugador = true;
	int canicaTot;
	cin>>canicaTot;
	int canicas[canicaTot][2];
	
	for (int i = 0; i < canicaTot; i++)
	{
		cin>>canicas[i][0]>>canicas[i][1];
		if(canicas[i][0]==canicas[i][1]){cout<<"Y"<<"\n"; return 0;}
	}
	
	while(true)
	{
		if(canicas[i][0])
	}
	
	

	return 0;
}

