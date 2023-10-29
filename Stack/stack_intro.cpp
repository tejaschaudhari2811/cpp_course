#include <stack>
#include <iostream>
using namespace std;

// Create a stack uisng STL stack

int main(){
    //Create a stack of Strings.
    stack<string> languages;
    
    //Add elements to the Stack.
    languages.push("C++");
    languages.push("Java");
    languages.push("Python");

    //Print top element.
    cout<<languages.top();
    return 0;
}

