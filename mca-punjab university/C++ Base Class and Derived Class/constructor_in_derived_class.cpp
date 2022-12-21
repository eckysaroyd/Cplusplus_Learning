#include <iostream>
using namespace std;

class abc{
	
	public :
	abc(){ //function in base class
			cout<<"This is ABC CONSTRUCTOR"<<endl;
		}
};
class xyz:public abc{
	public:
		xyz(){
				cout<<"This is XYZ CONSTRUCTOR"<<endl;	
		}
};

int main (){
	xyz a;
	return 0;
}
