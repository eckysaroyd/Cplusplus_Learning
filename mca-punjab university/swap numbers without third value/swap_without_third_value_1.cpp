#include<iostream>
using namespace std;

//swap numbers without 3 variable by ecky

int main(){
	int a,b;
	
	
	cout<<"Enter two numbers in arranged form"<<endl;
	
	cout<<"1st number is :"<<endl;
	cin>>a;
	
	cout<<"2nd number is :"<<endl;
	cin>>b;
	
	
	cout<<"Numbers before SWAP are :"<<a<<" and "<<b<<endl;
	
	
//	swap logic [ +,- ]
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<endl;
	
	cout<<"Numbers After SWAP are :"<<a<<" and "<<b<<endl;
	
	system("pause");
	return (0);

}
