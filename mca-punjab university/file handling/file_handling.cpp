#include<iostream>
#include<fstream>

using namespace std;

int main (){
	
	fstream file;
	
	file.open("ecky.txt",ios::in | ios::out);
	
	if(!file.is_open()){
		cout<<"Error while opening the file";
	}else{
			cout<<"File opening Successfully";
			
			file.close();
	}
	
	return 0;
}
