#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	
	string mensaje, crib;
	int cont = 0;
	bool bandera = true;
	cin>> mensaje >> crib;
	int largom = mensaje.length();
	int largoc = crib.length();
	
	for(int i=0; i<=largom-largoc; i++){
		for(int j=0; j<largoc; j++){
			if(mensaje[i+j] == crib[j]){
					bandera = false;
					break;
			}
		
		}
		if(bandera){
			cont++;
		}
		bandera = true;	
	}
	cout<<cont<<"\n";

	return 0;
}
