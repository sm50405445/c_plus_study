#include <iostream>

int main(void){
	char num[100];
	
	std::cout<<"전화번호를 입력하세요";
	std::cin>>num;
	
	for(int i = 0 ; i<1 ; i++){
		std::cout<<"전화번호: "<<num<<std::endl;
	} 
	
	return 0;
}
