#include <iostream>

int main(void){
	char name[100];
	char lang[200];
	
	std::cout<<"�̸��� �����Դϱ�?";
	std::cin>>name;
	
	std::cout<<"���� �� �����մϱ�?";
	std::cin>>lang;
	
	std::cout<<"����� �̸��� "<<name<<"\n �����ϴ� ����"<<lang<<" �Դϴ�."<<std::endl;
	return 0; 
}
