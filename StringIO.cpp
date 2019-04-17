#include <iostream>

int main(void){
	char name[100];
	char lang[200];
	
	std::cout<<"이름은 무엇입니까?";
	std::cin>>name;
	
	std::cout<<"무슨 언어를 좋아합니까?";
	std::cin>>lang;
	
	std::cout<<"당신의 이름은 "<<name<<"\n 좋아하는 언어는"<<lang<<" 입니다."<<std::endl;
	return 0; 
}
