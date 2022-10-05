#include<iostream>
using namespace std;
class matrix{
    public:
    int **a;
    int **b;
    int **c;
    int n,t,r,cl,i,j;
    void setdata(int a1){
        
        if(a1==1){
        cout<<"enter number of rows: and coloumns: for 1 ";
        cin>>n>>t;
        a=new int*[n];
        for(int i=0;i<n;i++){
            a[i]=new int[t];
        }
        cout<<"enter matrix elements: "<<endl;
        for(i=0;i<n;i++){
            for(int j=0;j<t;j++){
                cin>>a[i][j];
                }
            }
        }
        if(a1==2){
        cout<<"enter number of rows: and coloumns: for 2 ";
        cin>>r>>cl;
        b=new int*[r];
        for(int i=0;i<n;i++){
            b[i]=new int[cl];
        }
        cout<<"enter matrix elements: "<<endl;
        for(i=0;i<r;i++){
            for(int j=0;j<cl;j++){
                cin>>b[i][j];
                }
            }
        }
    }
    void mul(){
        if(t==r){
        c=new int*[n];
        for(int i=0;i<n;i++){
            c[i]=new int[cl];
        }
        for(i=0;i<n;i++){
            for(j=0;j<cl;j++){
                c[i][j]=0;
            }
        }
        for(i=0;i<n;i++){
                for(int j=0;j<cl;j++){
                    for(int k=0;k<cl;k++){
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                    
                }
            }
    }
    else{
        cout<<"multiplication is not possible";
    }
    }
    

    
    void show(){
        for(int i=0;i<n;i++){
                for(int j=0;j<cl;j++){
                    cout<<c[i][j]<<"\t";
                }
                cout<<endl;
            }
    }
    void del(){
        delete[] a;
        delete[] b;
        delete[] c;
    }
};

int main(){
    matrix m;
    m.setdata(1);
    m.setdata(2);
    m.mul();
    m.show();
    m.del();
    return 0;
}