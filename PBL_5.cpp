/*                           Assignment No :- 5
    Name :- Ronak Sandeep Dagale
    Roll no :- SYCOA43
*/
#include <iostream>

using namespace std;

class Shape
{
 public:
  double len,bth;
   void get_data()
  {
  cout<<"Enter length or base  :-"<<endl;
  cin>>len;
  cout<<"Enter breadth or height :-"<<endl;
  cin>>bth;
  }
virtual void display_area()=0;
};
class Square:public Shape
{
public:
  void get_data()
  {
    // Shape::get_data();
  }
  void display_area()
  {
  float area=len*len;
  cout<<"Area of Square is "<<area<<endl;
  }
};
class Rectangle:public Shape
{
public:

  void get_data()
  {
  // Shape::get_data();
  }
  void display_area()
  {
   float area=len*bth;
   cout<<"Area of Rectangle is "<<area<<endl;
  }
};
class Triangle:public Shape
{
public:
  void get_data()
  {
   // Shape::get_data();
  }
  void display_area()
  {
   float area=0.5*len*bth;
   cout<<"Area of Triangle is "<<area<<endl;
  }
};

int main()
{
  Shape *ptr;
 int ch;
 Square s;
 Rectangle r;
 Triangle tr;
 do
 {
   cout<<"\n\n 1. Square \n 2. Rectangle \n 3. Triangle \n 4. Exit\n"<<endl;
   cout<<"Enter your choice :-"<<endl;
   cin>>ch;
   switch(ch)
   {
    case 1:
      ptr=&s;
    ptr->get_data();
   ptr->display_area();
   break;

   case 2:
     ptr=&r;
    ptr->get_data();
   ptr->display_area();
   break;

   case 3:
     ptr=&tr;
    ptr->get_data();
    ptr->display_area();
   break;

   case 4:
   cout<<"\nThank you"<<endl;
   break;

   default:
    cout<<"Invalid Choice"<<endl;
   }
 }while(ch!=4);


    return 0;
}

