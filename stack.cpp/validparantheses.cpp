#include<iostream>
using namespace std;
void stack(char a[],int n)
{
    char s[n];
    int top=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='(' || a[i]=='{' || a[i]=='[')
        {
            s[++top]=a[i];
        }
        else if(a[i]==')' && top>=0 && s[top]=='(')
        {
            top--;
        }
        else if(a[i]=='}' && top>=0 && s[top]=='{')
        {
            top--;
        }
        else if(a[i]==']' && top>=0 && s[top]=='[')
        {
            top--;
        }
        else
        {
            cout<<"Not valid parantheses";
            return;
        }
    }
    if(top==-1)
    {
        cout<<"Valid parantheses";
    }
    else
    {
        cout<<"Not valid parantheses";
    }
}