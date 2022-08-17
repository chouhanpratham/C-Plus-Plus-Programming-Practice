#include<iostream.h>
#include<conio.h>
void main()
//Here we are using cout and cin predefined object and endl
//We are using endl to move the cursor to the next line
{
    clrscr();
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    int s=x*x;
    cout<<"Square of "<<x<<"is"<<s;
    getch();
}