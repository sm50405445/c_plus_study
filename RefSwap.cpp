#include <iostream>
using namespace std;

void swap(int *ref1,int *ref2){
	
	int temp = *ref1;
	*ref1 = *ref2;
	*ref2 = temp;
}

int main(void){
	
	int num1 = 20;
	int num2 = 30;
	swap(&num1,&num2);
	cout<<"num1 = "<<num1<<endl;
	cout<<"num2 = "<<num2<<endl;
	
	return 0;
}

