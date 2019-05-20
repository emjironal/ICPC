#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int temp;
	int arr[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int cant;
	cin >> cant;

	for (int i = 0; i < cant ; i++){
		cin >> temp;
		if (arr[temp+11] == 0) arr[temp+11]++;
		else
			arr[temp+11] = 0;

	}
	int cola = 23;
	for (int i = 0; i < cola; i++){
		if (arr[cola]==0) cola--;
		else if (arr[i] == 1){
			for(int j = i+1){
				
				
			}


		}

	}

}

int distancia(int a, int b){
	return Math.min((24-Math.abs(a-b)), Math.abs(a-b));
}