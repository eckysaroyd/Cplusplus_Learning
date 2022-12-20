#include <iostream>
using namespace std;

class abc{
	
	public :
		void dispaly(){ //function in base class
			cout<<"This is a base-abc class's function'"<<endl;
		}
};
class xyz:public abc{
	public:
		void display(){ //function of base class redifened in a derived class
				cout<<"This is a derived-xyz class's' function"<<endl;	
		}
};

int main (){
	abc a;
	xyz x;
	a.dispaly(); // call base class function
	x.display(); // call derived class functio
	return 0;
}
