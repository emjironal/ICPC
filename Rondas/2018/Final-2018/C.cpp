#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float costo(int c, int num){
	if ((num==0) || (num>5)){
		return c;
	}if(num==1){
		return c/2.0;
	}else
		return c/4.0;
}

float ahorro(int c, int num){
	if ((num==0) || (num>6)){
		return 0.0;
	}if(num==1){
		return c/2.0;
	}else
		return 3.0*(c/4.0) ;
}

int main()
{
	int time=0, num=0, n;
	float total = 0;
	cin >> n;
	int arr[n][2];
	int i = 0;

	for(int i=0; i< n; i++){
		cin >> arr[i][0] >> arr[i][1];
	}

	for(int i=0; i < n; i++){
		total += costo(arr[i][1], num);

		time += arr[i][0];
		num += 1;

		

		if (time >= 120 || num == 7){
			time = 0;
			num = 0;


		}else{

			if ( (i+2) < n){ //existe alguien que aprovecha el descuento

				if (!( ((time + arr[i+1][0]) < 120) && num < 6 )) { //puede aprovechar el descuento

					if ( ahorro( arr[i+2][1] , 1 )> ahorro( arr[i+1][1] , num ) ) //si vale la pena
					{
						cout << "cambia " << (arr[i+2][1]/2) << " " <<ahorro( arr[i+1][1] , num ) << "\n";
						time = 0;
						num = 0;
					}
				}
			}
		}


	}
	cout << setprecision(2) << fixed << total <<"\n";

}

/*
2
120 10
10 30

7
10 1
10 2
10 4
10 4
10 4
10 4
10 1
*/