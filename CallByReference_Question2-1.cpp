#include <iostream>
using namespace std;

void Plus(int *num1){
	
	*num1 += 1;
}

void Minus(int *num1){
	*num1 = -*num1;
}

int main(void){
	
	int num = 10;
	Plus(&num);
	cout<<"num = "<<num<<endl;
	Minus(&num);
	cout<<"num = "<<num<<endl;
	
	return 0;
}
