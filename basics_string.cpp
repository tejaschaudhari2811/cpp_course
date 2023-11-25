#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myGreeting = "Hello World";
    cout<<myGreeting<<endl;

    //Concatenation of two strings.
    string firstName = "Tejas";
    string lastName = "Chaudhari";
    cout<<firstName + lastName<<endl;

    string fullname = firstName.append(lastName);
    cout<<fullname<<endl;


    /* To get length of a string, there are following 2 ways
    1. str.length()
    2. str.size()*/
    cout<<"The size of the string is "<<fullname.length()<<endl;
    cout<<"The size of the string is "<<fullname.size()<<endl;

    //String can be traversed in C++
    for(int i = 0;i<fullname.length();i++)
    {
        cout<<fullname[i]<<" ";
    }

    /* The user input for string can be taken in two ways
    1. cin - Using cin with extraction operator >>, only a single word can be taken
    from the user.
    2. getline - Syntax getline(cin, <string_variable_name>)*/

    string name;
    cout<<"Please enter your full name ";
    getline(cin, name);
    cout<<name<<endl;
    return 0;
}