#include <iostream>
using namespace std;

class students{
	public:
		void displayStudents(){
			cout<<"These are students Data"<<endl;
		}
};
class teachers:public students{
	public:
		void displayTeachers(){
			cout<<"Now is time for teachers"<<endl;
		}
};
int main (){
	teachers members;
	
	members.displayStudents();
	members.displayTeachers();
	return 0;
}
