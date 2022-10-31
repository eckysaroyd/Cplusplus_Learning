//pointers
#include <iostream>
 
using namespace std;

int main(){
	
	int var =5;
	
	//	data type pointers

	int *ip; //pointer to integer
	float *fp; //pointer to  float
	double *dp; //pointer to double
	char *cp; //pointer to character
	
	ip=&var;
	
	cout<<"variable value : "<<var<<endl;
	cout<<"address in pointer : "<<ip<<endl;
	cout<<"pointer pointing to value : "<<*ip<<endl;
	
	
	*ip=7;
	cout<<endl<<endl;	
	cout<<"variable value : "<<var<<endl;
	cout<<"address in pointer : "<<ip<<endl;
	cout<<"pointer pointing to value : "<<*ip<<endl;
	
	system("pause");
	return (0);
}
 
