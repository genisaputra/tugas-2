#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	
	
	cout<<"masukkan jumlah bintang : ";
	cin>> n;
	
	cout<<"pola 1\n";
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout<<"#";
		}
		cout<<endl;
	}
	
	cin.get();
	return 0;
}
