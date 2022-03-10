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
    break;
    case 2:
    cout << "Deposit amount:";
    double depositAmount;
    cin >> depositAmount;
    balance +=depositAmount;
    break;
    case 3:
    double withdrawAmount;
    cout << "How much money do you want to withdraw?";
    cin >> withdrawAmount;
    if (withdrawAmount <= balance) {
         balance -=withdrawAmount;
    } else {
        cout << "Sorry, not enough money on the balance!";
    }
    break;

}



 int ret = system("ls -l > test.txt");
    return 0;
}