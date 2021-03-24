#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int a=rand()%10+1, b=rand()%10+1, c=rand()%10+1, d=rand()%10+1, e=rand()%10+1;
	int array[a][b][c][d][e];
	int size, amount,sum;
	string acknowledge;
	cout << "Array has five dimensions:" << endl;
	cout << "	-first will have: "<<a<<" elements." << endl;
	cout << "	-second will have: "<<b<<" elements." << endl;
	cout << "	-third will have: "<<c<<" elements." << endl;
	cout << "	-fourth will have: "<<d<<" elements." << endl;
	cout << "	-fifth will have: "<<e<<" elements." << endl;
	cout << "All amounts are randomly generated, from sizes of all dimensions(1 to 10) and values in last dimension (1 to 100)." << endl;
	do{
		cout << "Type \"Accept\" to continue or \"Decline\" to close." << endl;
		cin >> acknowledge;
		if(acknowledge == "Accept" || acknowledge == "accept"){
			for(int i=0; i<a; i++){
				for(int j=0; j<b; j++){
					for(int k=0; k<c;k++){
						for(int l=0; l<d;l++){
							for(int m=0;m<e;m++){
								array[i][j][k][l][m] = rand()%100+1;
							}
						}
					}
				}
			}
			for(int i=0; i<a; i++){
				cout << "|-First dimension(["<<i<<"]) inside there are:" << endl;
				for(int j=0; j<b; j++){
					cout << "	|-Second dimension(["<<i<<"]["<<j<<"]) inside there are:" << endl;
					for(int k=0; k<c;k++){
						cout << "		|-Third dimension(["<<i<<"]["<<j<<"]["<<k<<"]) inside there are:" << endl;
						for(int l=0; l<d;l++){
							cout << "			|-Fourth dimension(["<<i<<"]["<<j<<"]["<<k<<"]["<<l<<"]) inside there are:" << endl;
							for(int m=0;m<e;m++){
								cout << "				|-Fifth dimension(["<<i<<"]["<<j<<"]["<<k<<"]["<<l<<"]["<<m<<"]) inserted value is equal to: " << array[i][j][k][l][m] << endl;
								amount++;
								sum += array[i][j][k][l][m];
							}
						}
					}
				}
			}
			size = sizeof(array);
			cout << "Amount of memory used for Array is equal to: " << size << endl; 
			cout << "Sum of all values from Array is equal to: " << sum << endl;
			return 0;
		}
		else if(acknowledge == "Decline" || acknowledge == "decline"){
			return 0;
		}
	}
	while(1==1);
}
