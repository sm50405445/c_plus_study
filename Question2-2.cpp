#include <iostream>
using namespace std;

int main(void){
	
	const int num = 12;
	const int *pointer = &num;
	cout<<"*pointer = "<<*pointer<<"\n";
	const int &ref = *pointer;
		
	cout<<ref;
	
	return 0;
}
