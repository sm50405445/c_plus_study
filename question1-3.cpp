#include <iostream>
#include <stdio.h>

int main(void){
	
	int num,i;
	std::cout<<"Ȯ���� �������� �Է��ϼ���";
	std::cin>>num;
	
	for(i = 1 ; i<10 ; i++){
		std::cout<<num<<" x "<<i<<" = "<<(num*i)<<"\n"; 
	}

	return 0;
}
