#include <iostream>
#include <math.h>
using namespace std;


bool primo(int numero){
	int i = 3;
	if (numero % 2 == 0){
		return false;
	}
	while (sqrt(numero) >= i){
		if (numero % i == 0){
			return false;
		}
		i+=2;
	}
	return true;
}
	

void recursion(int num, int lvl, int next[]){
	if (lvl == 0){
		cout << num << "\n";
		return;
	}
	for (int i = 0; i < 4; i++){
		if (primo((num * 10) + next[i])){
			recursion(((num * 10) + next[i]),lvl-1,next);
		}
	}
	return;
	
}



int main()
{
	int n;
	cin >> n;
	int next[4] = {1,3,7,9};
	recursion(2,n-1,next);
	recursion(3,n-1,next);
	recursion(5,n-1,next);
	recursion(7,n-1,next);
}


