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
	cout<<"1. ���°���\n"<<endl;
	cout<<"2. �� ��\n"<<endl;
	cout<<"3. �� ��\n"<<endl;
	cout<<"4. �������� ��ü ���\n"<<endl;
	cout<<"5. ���α׷� ����\n"<<endl;
	
	cout<<"����: "<<endl;
	cin>>s;
	
	if(s==1){
		string name;
		int money; 
		cout<<"[���°���]"<<"\n";
		cout<<"�̸�: ";
		cin>>name;
		cout<<"�Աݾ�: ";
		cin>>money;
		Account a(Id,name,money);
		av.push_back(a);
		Id++;
	}else if(s==2){
		int id;
		int money;
		cout<<"[��    ��]\n"<<endl;
		cout<<"���� ID: ";
		cin>>id;
		cout<<"�Աݾ� : ";
		cin>>money;
		for(int i = 0 ; i<av.size() ; i++){
			if(av[i].getId()==id){
				av[i].plusMoney(money);
			}
		}
		cout<<"�ԱݿϷ�"; 
	}else if(s==3){
			int id;
		int money;
		cout<<"[��   ��]\n"<<endl;
		cout<<"���� ID: ";
		cin>>id;
		cout<<"��ݾ� : ";
		cin>>money;
		
		if(av[id-1].getId()==id && av[id-1].getMoney()>money){
			av[id-1].minusMoney(money);
			cout<<"��ݿϷ�\n";
		}else{
			cout<<"���� �ܾ��� �����մϴ�\n";
		}
		
	}else if(s==4){
		for(int i = 0 ; i < av.size() ; i++){
			cout<<"����Id: "<<av[i].getId()<<"\n";
			cout<<"�̸�: "<<av[i].getName()<<"\n";
			cout<<"�ܾ�: : "<<av[i].getMoney()<<"\n";
		}
	}else if(s==5){
		break;
	}else{
		cout<<"�ùٸ� ���� �Է��ϼ���\n";
	} 
	
	}
	
	 
}
