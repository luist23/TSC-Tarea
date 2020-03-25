#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

using namespace std;



int main(void){
	//cout<<"hola mundo";
	Matrix M;
	zeroes(M,3);

	M.at(0).at(0)=2.0;M.at(0).at(1)=2.0;M.at(0).at(2)=3.0;
	M.at(1).at(0)=4.0;M.at(1).at(1)=5.0;M.at(1).at(2)=6.0;
	M.at(2).at(0)=7.0;M.at(2).at(1)=8.0;M.at(2).at(2)=9.0;
	
	Matrix T;
	inversa(M,T);


	showMatrix(M);
	cout<<'\n';
	showMatrix(T);

	return 0;
}



