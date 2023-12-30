/*                          Assignment No :- 3
    Name :- Ronak Sandeep Dagale
    Roll No :- SYCOA43
  */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Vehicle;
class Car;
class Bike;
class Audi;
class Ford;
class Bajaj;
class Tvs;

class Vehicle {
private:
  int mileage;
  int price;

public:
  void get_v();
  void display_v();
};

class Car : public Vehicle {
private:
  int cost;
  int warranty;
  int seat;
  int fuel;

public:
  void get_c();
  void display_c();
};

class Bike : public Vehicle {
private:
  int cylinder;
  int gears;
  int cool;
  int wheel;
  int fuel_t;

public:
  void get_b();
  void display_b();
};

class Audi : public Car {
private:
  string model;

public:
  void get_a();
  void display_a();
};

class Ford : public Car {
private:
  string model;

public:
  void get_f();
  void display_f();
};

class Bajaj : public Bike {
private:
  string model;

public:
  void get_ba();
  void display_ba();
};

class Tvs : public Bike {
private:
  string model;

public:
  void get_t();
  void display_t();
};

void Vehicle::get_v() {
  cout << "Enter Mileage of Vehicle :-" << endl;
  cin >> mileage;
  cout << "Enter Price of Vehicle :-" << endl;
  cin >> price;
}
void Vehicle::display_v() { cout << mileage << setw(20) << price << setw(20); }

void Car::get_c() {
  get_v();
  cout << "Enter store Ownership Cost of Car :-" << endl;
  cin >> cost;
  cout << "Enter Warranty of Car (in Years) :-" << endl;
  cin >> warranty;
  cout << "Enter Seating Capacity in Car :-" << endl;
  cin >> seat;
  cout << "Enter Fuel type of Car \n 1. Petrol\n 2. Diesel :-" << endl;
  cin >> fuel;
}
void Car::display_c() {
  display_v();
  cout << cost << setw(20);
  cout << warranty << setw(20);
  cout << seat << setw(20);
  if (fuel == 1)
    cout << "petrol" << setw(20);
  else if (fuel == 2)
    cout << "Diesel" << setw(20);
}

void Bike::get_b() {
  get_v();
  cout << "Enter Number of Cylinders in Bike :-" << endl;
  cin >> cylinder;
  cout << "Enter Number of Gears in Bike :-" << endl;
  cin >> gears;
  cout << "Enter Cooling  type of Bike \n 1. air\n 2. liquid\n 3.oil :-"
       << endl;
  cin >> cool;
  cout << "Enter Wheel type of Bike \n 1. Alloys\n 2. Spokes :-" << endl;
  cin >> wheel;
  cout << "Enter Fuel tank Size of Bike (in inches) :-" << endl;
  cin >> fuel_t;
}
void Bike::display_b() {
  display_v();
  cout << "Number of Cylinders in Bike is :- " << cylinder << endl;
  cout << "Number of Gears in Bike is     :- " << gears << endl;
  if (cool == 1)
    cout << "Cooling type of the Bike is air" << endl;
  else if (cool == 2)
    cout << "Cooling type of the Bike is liquid" << endl;
  else if (cool == 3)
    cout << "Cooling type of the Bike is oil" << endl;
  else
    cout << "Invalid Cooling type" << endl;

  if (wheel == 1)
    cout << "Wheel type of Bike is alloys" << endl;
  else if (wheel == 2)
    cout << "Wheel type of Bike is Spokes" << endl;
  else
    cout << "Invalid Wheel type" << endl;

  cout << "Fuel tank Size of Bike (in inches) is :- " << fuel_t << endl;
}

void Audi::get_a() {
  get_c();
  cout << "Enter Model Type of Audi :- " << endl;
  cin >> model;
}
void Audi::display_a() {
  display_c();
  cout << model << endl;
  ;
}
void Ford::get_f() {
  get_c();
  cout << "Enter Model Type of Ford :- " << endl;
  cin >> model;
}
void Ford::display_f() {
  display_c();
  cout << model << endl;
}
void Bajaj::get_ba() {
  get_b();
  cout << "Enter Model Type of Bajaj :- " << endl;
  cin >> model;
}
void Bajaj::display_ba() {
  display_b();
  cout << "Model Type of Bajaj is " << model << endl;
}
void Tvs::get_t() {

  get_b();
  cout << "Enter Model Type of Tvs :- " << endl;
  cin >> model;
}
void Tvs::display_t() {
  display_b();
  cout << "Model Type of Tvs is " << model << endl;
}
int main() {
  int a, b, ch, i;
  cout << "How many cars are there :- " << endl;
  cin >> b;
  Audi au[b];
  Ford fo[b];
  Bajaj ba[b];
  Tvs tv[b];
  do {
    cout << "\n 1. Audi \n 2. Ford \n 3. Bajaj \n 4. TVS\n 5. Exit" << endl;
    cout << "Enter the Car Choice :-" << endl;
    cin >> a;
    switch (a) {
    case 1:
      cout << "Enter data of Audi :-" << endl;
      for (i = 0; i < b; i++) {
        cout << "Enter data of Audi " << i + 1 << endl;
        au[i].get_a();
      }
      cout << "\n\n\n***********************************************Display "
              "Audi "
              "data**********************************************************"
              "\n\n\n"
           << endl;
      cout << "Mileage" << setw(20) << "Price" << setw(20) << "Owner cost"
           << setw(20) << "warrenty" << setw(20) << "seat capacity" << setw(20)
           << "Fuel type" << setw(20) << "Model" << endl;
      for (i = 0; i < b; i++) {
        au[i].display_a();
      }
      break;

    case 2:
      cout << "Enter data of Ford :-" << endl;
      for (i = 0; i < b; i++) {
        cout << "Enter data of Ford " << i + 1 << endl;
        fo[i].get_f();
      }
      cout << "\n\n\n***********************************************Display "
              "Ford "
              "data**********************************************************"
              "\n\n\n"
           << endl;
      cout << "Mileage" << setw(20) << "Price" << setw(20) << "Owner cost"
           << setw(20) << "warrenty" << setw(20) << "seat capacity" << setw(20)
           << "Fuel type" << setw(20) << "Model" << endl;

      for (i = 0; i < b; i++) {
        fo[i].display_f();
      }
      break;

    case 3:
      cout << "Enter data of Bajaj :-" << endl;
      for (i = 0; i < b; i++) {
        cout << "Enter data of Baja" << i + 1 << endl;
        ba[i].get_ba();
      }
      cout << "***************Display Baja data******************" << endl;
      for (i = 0; i < b; i++) {
        cout << "Data of Bajaj " << i + 1 << endl;
        ba[i].display_ba();
      }
      break;

    case 4:
      cout << "Enter data of Tvs :-" << endl;
      for (i = 0; i < b; i++) {
        cout << "Enter data of Tvs " << i + 1 << endl;
        tv[i].get_t();
      }
      cout << "***************Display Tvs data******************" << endl;
      for (i = 0; i < b; i++) {
        cout << "Data of Tvs " << i + 1 << endl;
        tv[i].display_t();
      }
      break;

    case 5:
      cout << "Thank You" << endl;
      break;

    default:
      cout << "Invalid choice" << endl;
    }
  } while (a != 5);
  return 0;
}


           // Thank You
