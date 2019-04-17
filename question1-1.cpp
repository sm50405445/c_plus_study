#include <iostream>

int main(void){
	
	int num1,num2,num3,num4,num5;
	int result = 0;
	
	std::cout<<"첫 번째 정수 입력: ";
	std::cin>>num1;
	std::cout<<"두 번째 정수 입력: ";
	std::cin>>num2;
	std::cout<<"세 번째 정수 입력: ";
	std::cin>>num3;
	std::cout<<"네 번째 정수 입력: ";
	std::cin>>num4;
	std::cout<<"다섯 번째 정수 입력: ";
	std::cin>>num5;
	
	result = num1+num2+num3+num4+num5;
	std::cout<<"합계 : "<<result<<std::endl;
}
