#include<iostream>
#include<string.h>
using namespace std;
class Acc{
    char name[100];
    long long acc_no;
    int amount;
    char type[20];
    public:
    Acc(char name[], long long acc_no, int amount, char type[]){
        this->amount = amount;
        this->acc_no = acc_no;
        strcpy(this->name, name);
        strcpy(this->type, type);
    }

    void modify(int newAmount){
        amount = newAmount;
    }

    void withdraw(int withdrawAmount){
        if(amount >= withdrawAmount){
            cout << "Successfully Withdrawn\n";
            amount -= withdrawAmount;
            cout << "Balance Left = " << amount << endl;
        }
        else{
            cout << "Insufficient Balance\n";
            cout << "Balance Left  = " << amount << endl;
            cout << "Balance Withdraw amount  = " << withdrawAmount << endl;
        }
    }
    void details(){
        cout << "Name = " << name << endl;
        cout << "Balance = " << amount << endl;
    }
};
int main()
{
    char name[100], type[20];
    long long acc_no;
    int amount;
    cout << "Enter details : ";
    cin >> name >> acc_no >> amount >> type;
    Acc a(name, acc_no, amount, type);
    int ch = 1;
    while(ch){
        int choice;
        cout << "Enter 1 for Details\n2 for modify\n3 for withdraw\n";
        cin >> choice;
        int amt;
        switch(choice){
            case 1: a.details();break;
            case 2: cout << "Enter amount" << endl;
            cin >> amt;
            a.modify(amt);
            break;
            case 3:cout << "Enter amount" << endl;
            cin >> amt;
            a.withdraw(amt);
            break;
            default: cout << "Wrong Choice\n";
        }
        cout << "Enter 0 to exit or any other number to continue\n";
        cin >> ch;
    }  
    return 0;
}