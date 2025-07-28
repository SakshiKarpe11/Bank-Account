/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
class Bank
{
    int account_no,withdrawal_amt,amount;
    string name;
    public:
    void accept();
    void display();
    inline int getRemainingAmount(){
        return amount - withdrawal_amt;
    }
}B[100];

void Bank::accept(){
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"account_no : ";
    cin>>account_no;
    cout<<"amount : ";
    cin>>amount;
    cout<<"withdrawal_amt : ";
    cin>>withdrawal_amt;
    
    if (withdrawal_amt > amount){
        cout<<"Setting withdrawal to 0\n ";
        withdrawal_amt = 0;
    }
}


void Bank::display()
{
    cout<<name<<"\t"<<account_no<<"\t"<<amount<<"\t"<<withdrawal_amt<<"\t\t"<<getRemainingAmount()<<"\n";
}




int main()
{
    int n,ch,i,total;
    cout<<"Enter number of costomers :";
    cin>>n;
    do{
        cout<<"Menu";
        cout<<"\n 1.Accect \n 2.Display\n 3.Show total amount left in bank\n 4.Exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        
        switch(ch){
            case 1:
            for (i=0;i<n;i++){
                B[i].accept();
            }
            break;
            case 2:
            cout<<"\nName\taccount_no\tamount\twithdrawal\tRemaining\n";
            for (i=0;i<n;i++){
                B[i].display();
            }
            break;
            case 3:{
            int total=0;
            for (i=0;i<n;i++){
                
                total += B[i].getRemainingAmount();
            }
            cout<<"\ntotal balance left in bank:"<< total <<"\n";
            break;
            }
            case 4:
            cout<<"Exiting the program";
            return 0;
            default:
            cout<<"\ninvalid choice";
        }
            
        }while(true);
        
        return 0;
}