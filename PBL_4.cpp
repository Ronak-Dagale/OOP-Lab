/*                        Assignment No :- 4
    Name :- Ronak Sandeep Dagale
    Roll no :- SYCOA43
  */
#include <iostream>

using namespace std;

class Complex
{
  float real,imag;

  public:
  Complex operator +(Complex);
  Complex operator -(Complex);
  Complex operator *(Complex);

  friend istream& operator>>(istream &in, Complex &c)
  {
  cout<<"Enter real part "<<endl;
  in>>c.real;
  cout<<"Enter imaginary part "<<endl;
  in>>c.imag;
  return in;
  }
  friend ostream& operator<<(ostream &out, Complex &c)
  {
  out<<c.real;
    if(c.imag>0)
    { cout<<"+";
      out<<c.imag<<"i";
    }
    else
    {
      out<<c.imag<<"i";
    }
  cout<<endl;
  return out;
  }
};

int main()
{
    Complex c1,c2,c;
    int ch;
    cout<<"\nEnter Complex number 1"<<endl;
    cin>>c1;
    cout<<"\nComplex number 1 :-"<<endl;
    cout<<c1;
    cout<<"\nEnter Complex number 2"<<endl;
    cin>>c2;
    cout<<"\nComplex number 2 :-"<<endl;
    cout<<c2;
    do{
    cout<<"\n 1. Addition \n 2. Subtraction \n 3. Multiplicaton \n 4. Exit \n";
    cout<<"Enter your Choice :-"<<endl;
    cin>>ch;
    switch(ch)
    {
     case 1:
     c=c1+c2;
      cout<<"\nAddition is :- "<<endl;
     cout<<c;
     break;

     case 2:
     c=c1-c2;
      cout<<"\nSubtraction is :- "<<endl;
     cout<<c;
     break;

     case 3:
     c=c1*c2;
      cout<<"\nMultiplication is :- "<<endl;
     cout<<c;
     break;

     case 4:
     cout<<"Thank you"<<endl;
     break;

     default:
     cout<<"Invalid Choice"<<endl;
    }
    }while(ch!=4);

    return 0;
}

Complex Complex::operator +(Complex c3)
{
    Complex c;
    c.real=real+c3.real;
    c.imag=imag+c3.imag;
    return c;
}
Complex Complex::operator -(Complex c3)
{
    Complex c;
    c.real=real-c3.real;
    c.imag=imag-c3.imag;
    return c;
}
Complex Complex::operator *(Complex c3)
{
    Complex c;
    c.real=(real*c3.real)-(imag*c3.imag);
    c.imag=real*c3.imag+imag*c3.real;
    return c;
}
