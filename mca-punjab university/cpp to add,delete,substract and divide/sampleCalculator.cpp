#include <iostream>
using namespace std;
  
int main() {
    char choise;
    float a, b;
      
    cout << "Enter an arithemetic operator[ + - * / ]"<<endl;
    cin >> choise;
    cout << "Enter two numbers\n";
    cin >> a >> b;
  
    switch(choise) {
        case '+': 
                cout << a << " + " << b << " = " << a+b;
                break;
        case '-':
                cout << a << " - " << b << " = " << a-b;
                break;
        case '*':
                cout << a << " * " << b << " = " << a*b;
                break;
        case '/':
                cout << a << " / " << b << " = " << a/b;
                break;
        default: 
                cout<<"invalid choise";
    }
      
    return 0;
}
