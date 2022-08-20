#include<iostream.h>
#include<conio.h>
//Here we have made class Room and function Data calculateArea and calculateVolume
//We are usaing them to claculate the area and volume
class Room
{
 private:
 double length;
 double breadth;
 double height;
 public:
 void Data(double l, double b, double h)
 {
  length = l;
  breadth = b;
  height = h;
 }
 double calculateArea()
 {
  return length * breadth;
 }
 double calculateVolume()
 {
  return length * breadth * height;
 }
};

void main()
{
  clrscr();
  Room room1;
  room1.Data(42.5, 30.8, 19.2);
  cout<<"Area of Room =  "<< room1.calculateArea()<<endl;
  cout<<"Volume of Room =  "<<room1.calculateVolume()<<endl;
  getch();
}
