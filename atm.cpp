#include <iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "************************" << endl;
}

int main ()
{
    //check balance, deposit, withdraw, show menu
int option;
double balance = 500;

showMenu();
cout << "Please choose one of the options of the menu"<< endl;
cin >> option;

switch (option) {
    case 1: 
    cout << "Balance is:" <<balance<<"$"<<endl;
    
}



 int ret = system("ls -l > test.txt");
    return 0;
}