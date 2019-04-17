#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account
{
	int Id;
	string name;
	int money;
	public:Account(int Id, string name, int money)
	{
		this->Id = Id;
		this->name = name;
		this->money = money;
	}
	int getId(){
		return Id;
	}
	string getName(){
		return name;
	}
	int getMoney(){
		return money;
	}
	void plusMoney(int money){
		this->money += money;
	}
	void minusMoney(int money){
		this->money -= money;
	}
};

int main(void){
	
	vector<Account> av;
	int Id = 1;
	
	while(true){
	
	int s;
	
	cout<<"-----Menu-----\n"<<endl;
	cout<<"1. 계좌개설\n"<<endl;
	cout<<"2. 입 금\n"<<endl;
	cout<<"3. 출 금\n"<<endl;
	cout<<"4. 계좌정보 전체 출력\n"<<endl;
	cout<<"5. 프로그램 종료\n"<<endl;
	
	cout<<"선택: "<<endl;
	cin>>s;
	
	if(s==1){
		string name;
		int money; 
		cout<<"[계좌개설]"<<"\n";
		cout<<"이름: ";
		cin>>name;
		cout<<"입금액: ";
		cin>>money;
		Account a(Id,name,money);
		av.push_back(a);
		Id++;
	}else if(s==2){
		int id;
		int money;
		cout<<"[입    금]\n"<<endl;
		cout<<"계좌 ID: ";
		cin>>id;
		cout<<"입금액 : ";
		cin>>money;
		for(int i = 0 ; i<av.size() ; i++){
			if(av[i].getId()==id){
				av[i].plusMoney(money);
			}
		}
		cout<<"입금완료"; 
	}else if(s==3){
			int id;
		int money;
		cout<<"[출   금]\n"<<endl;
		cout<<"계좌 ID: ";
		cin>>id;
		cout<<"출금액 : ";
		cin>>money;
		
		if(av[id-1].getId()==id && av[id-1].getMoney()>money){
			av[id-1].minusMoney(money);
			cout<<"출금완료\n";
		}else{
			cout<<"계좌 잔액이 부족합니다\n";
		}
		
	}else if(s==4){
		for(int i = 0 ; i < av.size() ; i++){
			cout<<"계좌Id: "<<av[i].getId()<<"\n";
			cout<<"이름: "<<av[i].getName()<<"\n";
			cout<<"잔액: : "<<av[i].getMoney()<<"\n";
		}
	}else if(s==5){
		break;
	}else{
		cout<<"올바른 값을 입력하세요\n";
	} 
	
	}
	
	 
}
