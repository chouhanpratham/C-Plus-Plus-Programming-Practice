#include<iostream>
using namespace std;
class arr{
    public:
    int arr[5];
    void set(){
        cout<<"enter 5 elements for array: ";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void validate(){
        try{
            int *ptr;
            ptr=&arr[0];
            for(int i=0;i<5;i++){
                if(*ptr!=arr[i]){
                    throw 1;
                    break;
                }
                else{
                    ptr++;
                }
            }
            cout<<"array is validated";
        }
        catch(int a){cout<<"array is not validated ";}
    }
};
int main(){
    arr A;
    A.set();
    A.validate();
    return 0;
}