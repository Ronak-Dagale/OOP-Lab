//============================================================================
// Name        :  PBL Assignment no :- 1
// Author      :  Ronak Sandeep Dagale
// Description :  Student Data Base System
// Concept     :  Use of class and Array of objects
//============================================================================
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class student{

int roll_no,m,d,y,cls;
long long ph;
char div,blood[5],add[50];
string name;


public:
// To read data
void read();
// To displat data
void display();
// To count how many number of student data is entered
static int count;
student();
static int getcount() 
{
 return count;
 }
 ~student();

};
// Default Constructor
student::student(){
name=" ";
roll_no=0;
m=d=y=cls=0;
div='A';
//cout<<"\nConstructor is called";
}
// Destructor
student::~student()
{
 // cout<<"\nDestructor is Called";
}

inline void student::read()
{
  count++;
 cout<<"\nEnter Name of Student:- ";
  cin>>name;
  cout<<"\nEnter Roll Number of Student:-\n ";
  cin>>roll_no;
  cout<<"\nEnter class of Student:-\n ";
  cin>>cls;
 //cout<<"\nEnter Div of Student:-\n ";
  //cin>>div;
  cout<<"\nEnter Date of birth of Student 'dd/mm/yyyy':-\n ";
  cin>>d>>m>>y;
  cout<<"\nEnter Address of Student:-\n ";
  cin>>add;
  cout<<"\nEnter Blood Group of Student:-\n ";
  cin>>blood;
  cout<<"\nEnter Phone Number of Student:-\n ";
  cin>>ph;
}

 inline void student::display()
{
    cout<<roll_no;

  cout<<setw(20)<<name;

  cout<<setw(20)<<cls;
  cout<<setw(20)<<div;
  cout<<setw(20)<<blood;
  cout<<setw(20)<<d<<"/"<<m<<"/"<<y;
  cout<<setw(20)<<add;

  cout<<setw(20)<<ph;


}
int student::count=0;
int main()
{
  int n,ch;
  cout<<"Enter Number of Student:- ";
  cin>>n;
   student s[n];

  do{
  cout<<"\n1.Enter the student Data\n2.Show the student data\n3.Exit\n";
  cout<<"Which Opration you want to perform :-";
  cin>>ch;
  switch(ch)
  {
     case 1:
     for(int i=0;i<n;i++)
    { cout<<"\nEnter data of Student "<<i+1<<"\n";
      s[i].read();
    }
     break;

     case 2:
     cout<<"\n\n****************************Displaying Student Data******************************\n\n";
cout<<"Roll No"<<setw(20)<<"Name"<<setw(20)<<"Class"<<setw(20)<<"Div"<<setw(20)<<"Blood"<<setw(20)<<"dd//mm//yyyy"<<setw(20)<<"address"<<setw(20)<<"phone no"<<endl;
     for(int i=0;i<n;i++)
    {
    s[i].display();
    cout<<"\n";
    }
    cout<<"\n\n";
    break;

    case 3:
    cout<<"\n\nTotal number of student data entered are "<<student::getcount()<<"\n";
     return 0;

     default :
     cout<<"\n Sorry, Invalid Choice";

  }
 }while(ch!=3);
}
  // Thank you 
