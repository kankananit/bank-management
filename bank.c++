#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
class bank{
    char name[100],add[100],y;
    int balance;
    public :
        void open_account();
        void deposite_money();
        void withdraw();
        void display_account();
};
void bank::open_account()
{
    cout<<"enter your full name :: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address :: ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"what type of account you want to open saving (s) or current (c) ";
    cin>>y;
    cout<<"enter amount for deposite :: ";
    cin>>balance;
    cout<<"your account is created\n";

}
void bank::deposite_money(){
    int a;
    cout<<"enter how much you deposite ::";
    cin>>a;
    balance+=a;
    cout<<"total amount you deposite :: \t"<<balance;


}
void bank::display_account(){
    cout<<"your full name :: \t"<<name;
    cout<<"your address :: \t"<<add;
    cout<<"type of account that you open :: \t"<<y;
    cout<<"amount you deposite :: \t"<<balance;

}
void bank:: withdraw(){
    float amount;
    cout<<"\n withdraw :: ";
    cout<<"enter amount to withdraw :: ";
    cin>> amount;
    balance-=amount;
    cout<<"now total amount is left :: "<< balance;


}
int main()

{   
    int ch,x;
    bank obj;
    do{
    cout<<"1) Open account \n";
    cout<<"2) deposite money \n";
    cout<<"3) withdraw money \n";
    cout<<"4) Display account \n";
    cout<<"5) Exit";
    cout<<"\n select the option from the above \n";
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"1) open account \n";
            obj.open_account();
            break;
        case 2:
            cout<<"2) deposite money \n";
            obj.deposite_money();
            break;
        case 3:
            cout<<"3) withdraw money \n";
            obj.withdraw();
            break;
        case 4:
            cout<<"4) display account \n";
            obj.display_account();
            break;
        case 5:
            if(ch==5) {
                exit(1);
            }
        default:
            cout<<" this is not exist try again \n";
        }
         cout<<"\n do you want to select next option than press y : ";
            cout<<"\n if you want to exit then press :: N ";
            x=getch();
            if(x=='n' || x=='N') exit(0);
    }while(x=='y' || x=='Y');

return 0;
}