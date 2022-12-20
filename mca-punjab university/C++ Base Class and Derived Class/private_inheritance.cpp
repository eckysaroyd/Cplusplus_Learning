#include <iostream>
using namespace std;

class Person{
	protected :
		string name;
	public :
		void setName(string iname){
			name=iname;
		}
};
class Student: private Person{
	//when we use private derived class all the public and protected members
	// of inheritance class are going to act as private members
	public:
	void display(){
		cout<<name<<endl;
	}
	void studentSetName(string iname){
		setName(iname);
	}
};
class GStudents:public Student{
	public:
		void setGStudentsName(string iname){
			studentSetName(iname);
			
		}
	
};
int main (){
	GStudents Ecky;
	Ecky.setGStudentsName("ECKY");
	Ecky.display();
	return 0;
}
