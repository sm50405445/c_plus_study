#include <iostream>
#include <stdio.h>

int main(void){
	
	int num,i;
	std::cout<<"확인할 구구단을 입력하세요";
	std::cin>>num;
	
	for(i = 1 ; i<10 ; i++){
		std::cout<<num<<" x "<<i<<" = "<<(num*i)<<"\n"; 
	}

	return 0;
}
