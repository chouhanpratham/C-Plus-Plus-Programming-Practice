#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    char name[20];
};
class exam : virtual public student{
    protected:
    float mark1,mark2;
};
class sports: virtual public student{
    protected:
    float score;
};

class result: public exam,public sports{
    public:
    float total,avg;
    void set(){
        cout<<"enter you name: ";
        cin>>name;
        cout<<"enter your roll number: ";
        cin>>roll;
        cout<<"enter your marks in 1: ";
        cin>>mark1;
        cout<<"enter your marks in 2: ";
        cin>>mark2;
        cout<<"enter score: ";
        cin>>score;
    }
    void marksheet(){
        total=mark1+mark2+score;
        avg=total/3;
        cout<<"result of : "<<name<<"\t roll number: "<<roll<<"\n total is: "<<total<<"\t and average is : "<<avg<<endl;

    }

};

int main(){
    result s;
    s.set();
    s.marksheet();
    return 0;
}