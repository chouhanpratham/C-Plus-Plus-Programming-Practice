#include<iostream>
#include<fstream>
using namespace std;
class A{
    int x;
    public:
    void write(){
        ofstream fout("output");
        cout<<"enter ID: ";
        cin>>x;
        fout<<x;
        fout.close();
    }
    void read(){
        int y;
        ifstream fin("output");
        fin>>y;
        cout<<y;
    }
};
int main(){
    A a;
    a.write();
    a.read();
    return 0;
}