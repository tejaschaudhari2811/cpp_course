#include<iostream>
using namespace std;
#include<stack>

int isOperand(const char c){
    if((c=='+')||(c=='-')||(c=='*')||(c=='/'))
    {
        return 0;
    }
    else{
        return 1;
    }
}

int Eval(string s)
{
    stack<int> st;
    int i,x1,x2,r;
    for(i=0;s[i]!='\0';i++)
    {
        if(isOperand(s[i]))
        {
            st.push(s[i]-'0');
        }
        else
        {
            x2=st.top();
            x1=st.top();
        }
        switch (s[i])
        {
        case '+':
            r = x1 + x2;
            st.push(r);
            break;
        case '-':
            r = x1 - x2;
            st.push(r);
            break;
        
        case '*':
            r = x1 * x2;
            st.push(r);
            break;
        
        case '/':
            r = x1 / x2;
            st.push(r);
            break;
        
        default:
            break;
        }
    }
    return st.top();
}

int main()
{
    string str = "65+43*+";
    cout<<Eval(str)<<endl;
}