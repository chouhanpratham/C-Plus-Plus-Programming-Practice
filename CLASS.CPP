#include <iostream>
#include <sstream>
using namespace std;
//Classes in C++ are user defined types declared with keyword class that has data and functions . Although classes and structures have the same type of functionality, there are some basic differences. The data members of a class are private by default and the members of a structure are public by default. Along with storing multiple data in a common block, it also assigns some functions (known as methods) to manipulate/access them. It serves as the building block of Object Oriented Programming.
/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{ 
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
    void set_age(int a)
    {
        age=a;
    }
    void set_first_name(string name)
    {
        first_name=name;
    }
    void set_last_name(string last)
    {last_name=last;}
    void set_standard(int b)
    {standard=b;}
    int get_age()
    {
        return age;
    }
    int get_standard()
    {return standard;}
    string get_first_name()
    {return first_name;}
    string get_last_name()
    {return last_name;}
    string to_string()
    {
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
        return ss.str();
    }
    
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}