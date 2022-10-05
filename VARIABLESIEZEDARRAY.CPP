#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.
//Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.
//Click here to know more about how to create variable sized arrays in C++.
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,y,s=0;
    cin>>x>>y;
    int *arr[x];
    while(x--)
    {
        int n;
        cin>>n;
        arr[s]=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[s][i];
        }
        s++;
        
    }
    while(y--)
    {
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}