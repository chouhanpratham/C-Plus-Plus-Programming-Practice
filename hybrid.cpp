#include<iostream>
using namespace std;
class shape{
    public:
    int l,b,h;
};
class rectangle:virtual public shape{
    public:
    float ar;
    void arear(){
        ar=2*(l+b);
    }
};
class area:virtual public shape{
    public:
    float are;
    void areac(){
        are=2*(l*b+l*h+b*h);
    }
};

class cuboid:public rectangle,public area{
    public:
    float volume;
    cuboid(float a,float b1,float c ){
        l=a;
        b=b1;
        h=c;
    }
    void vol(){
        volume=l*b*h;
    }
    void show(){
        cout<<"area of rectangle is: "<<ar<<" \narea of cuboid is: "<<are<<"\nvolume of cuboid is: "<<volume<<endl;
    }

};

int main(){
    cuboid a(4,5,6);
    a.vol();
    a.areac();
    a.arear();
    a.show();
    return 0;
}