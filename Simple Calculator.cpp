#include <iostream>


using namespace std;

int main(){
    
    double Num1, Num2;
    char operation;

    cout<<"Welcome to my calculator please input your first number..."<<endl;
        cin>>Num1;
    cout<<"Please Enter operation (*,-,+,/)"<<endl;
        cin>>operation;
    cout<<"Please input your second number..."<<endl;
        cin>>Num2;
    
    switch (operation)
    {
    case '*':
         cout<<Num1 * Num2<<endl;
        break;

    case '+':
        cout<<Num1+Num2<<endl;
        break;
    case '-':
        cout<<Num1-Num2<<endl;
        break;
    case '/':
        cout<<Num1/Num2<<endl;
        break;
    default:
        cout<<"You've entered an invalid operator"<<endl;
        break;
    }

   return 0;     
}
