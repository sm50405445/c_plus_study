#include <iostream>

void swap(int* num1, int* num2){
	
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swap(char* ch1, char* ch2){
	
	int temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

int main(void){
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;
	
	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;
	
	return 0;
}
