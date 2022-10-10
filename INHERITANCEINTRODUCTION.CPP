#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//One of the important topics of Object Oriented Programming is Inheritance. Inheritance allows us to define a class in terms of another class, which allows us in the reusability of the code.Check out the code below:

class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		//Write your code here.
          void description()
          {
              cout<<"In an isosceles triangle two sides are equal"<<endl;
          }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}