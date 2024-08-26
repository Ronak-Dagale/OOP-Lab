/*          
               Assignment No :- 2
 Name:- Ronak Sandeep Dagale
 Roll no :- SYCOA43
 */

#include<bits/stdc++.h>
using namespace std;
class Bank{
    long long int acc_no;
    int deposited_amount;
    int debited_amount;
    int total_amount;
    string name;
    public :
    Bank();
    ~Bank();
    void read();
    void display();
    void deposit();
    void total();
    void debit();
};
Bank::Bank()                                       // default constructor
    {
        acc_no=0;
        deposited_amount=0;
        debited_amount=0;
        total_amount=0;
        name="NULL";
    }
    Bank::~Bank()    //Destructor
    {

    }
    void Bank::display()
    {

       cout<<acc_no<<left<<setw(20)<<name<<left<<setw(20)<<total_amount<<left<<setw(20)<<endl;
    }
    void Bank::read()
    {
     cout<<"Enter username :-"<<endl;
     cin>>name;
     cout<<"Enter Account Number :-"<<endl;
     cin>>acc_no;
     cout<<"Enter Opening balance :-"<<endl;
     cin>>total_amount;

    }
    void Bank::deposit()
    {
      cout<<"Enter amount to deposit :-"<<endl;
      cin>>deposited_amount;
      total_amount=total_amount+deposited_amount;
      cout<<"your Account Balance is "<<total_amount<<endl;
    }
    void Bank::debit()
    {
      cout<<"Enter amount to debit :-"<<endl;
      cin>>debited_amount;
      if(debited_amount>total_amount)
      cout<<"Sorry, You have insufficient Balance "<<endl;
      else
      {
      total_amount=total_amount-debited_amount;
      cout<<"your Account Balance is "<<total_amount<<endl;
      }
    }
    void Bank::total()
    {
    cout<<"your Account Balance is "<<total_amount<<endl;
    }

int main()
{
   int n,ch,p;
   cout<<"Enter Number of Customer :-"<<endl;
   cin>>n;
   Bank b[n];
   do{
   cout<<"\n\n  1. Read data \n  2.Display data \n  3.Exit\n ";
   cout<<"Please Enter your choice :-"<<endl;
   cin>>p;
   switch(p){
   case 1:
   for(int i=0;i<n;i++)
   {
    cout<<"\n\n# Enter information of user "<<i+1<<endl;
      b[i].read();
      do{
      cout<<"\n\n  1.Deposit amount \n  2. Withdraw Amount \n  3.Check Balance \n  4.Exit\n\n";
      cout<<"Enter your Choice  :-"<<endl;
      cin>>ch;

      switch(ch)
      {
        case 1:
         b[i].deposit();
         break;

         case 2:
         b[i].debit();
         break;

         case 3:
         b[i].total();
         break;

         case 4:
         cout<<"Thank you\n";
         break;

         default:
         cout<<"Invalid Choice "<<endl;

      }
      }while(ch!=4);

   }
   break;

   case 2:
   cout<<"\n\n\t----------------------Display Data ---------------------\n\n";
   cout<<"acc_no"<<right<<setw(20)<<"name"<<right<<setw(20)<<"total_amount"<<left<<setw(20)<<endl;
   for(int i=0;i<n;i++)
      b[i].display();
      cout<<"----------------------------------------------------\n"<<endl;
   break;

   case 3:
   cout<<"\n Thank You"<<endl;
     break;

   default:
    cout<<"Invalid choice"<<endl;

}
}while(p!=3);
}
