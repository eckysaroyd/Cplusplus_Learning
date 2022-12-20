#include <iostream>
using namespace std;

//**********  call by value program **********
void callbyValue(int x, int y){
	int z;
	z=x;
	x=y;
	y=z;
}
//**********  call by value program **********  
void callbyReference(int &x, int &y){
	int z;
	z=x;
	x=y;
	y=z;
}
//**********  call by value address **********  
void callbyAddress(int *x, int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
int main(){
 int a=5;
 int b=10;
 cout<<"Before swapping : "<<"a= "<<a<<" and "<<"b= "<<b<<endl;
 
 
// function call
//callbyValue(a,b);
//callbyReference(a,b);
callbyAddress(&a,&b);
 cout<<"After swapping : "<<"a= "<<a<<" and "<<"b= "<<b<<endl;
}
