#include<iostream>
#include<stack>
using namespace std;
stack<int>read()
{
    stack<int>s;
    int n;
    cout<<"\n Enter the total number of the digits: ";
    cin>>n;
    cout<<"\n Enter the digits: ";
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        s.push(k);
    }
    return s;
}
void display(stack<int> &s)
{
   
    cout<<"\n";
    while(!s.empty())
    {
       
        cout<<s.top();
        s.pop();
    }
}
stack<int>add(stack<int>s1,stack<int>s2)
{
    int sum=0,carry=0,a=0,b=0;
    stack<int>s3;
    while(!s1.empty() && !s2.empty())
    {
        if(!s1.empty())
        {
            a=s1.top();
            s1.pop();
        }
        if(!s2.empty())
        {
            b=s2.top();
            s2.pop();
        }
        sum=(a+b+carry)%2;
        carry=(a+b+carry)/2;
        s3.push(sum);
    }
    while(!s1.empty())
    {
        if(!s1.empty())
        {
            a=s1.top();
            s1.pop();
        }
        sum=(a+carry)%2;
        carry=(a+carry)/2;

        s3.push(sum);
    }
     while(!s2.empty())
    {
        if(!s2.empty())
        {
            a=s2.top();
            s2.pop();
        }
        sum=(a+carry)%2;
        carry=(a+carry)/2;

        s3.push(sum);
    }
    if(carry==1)
    {
        s3.push(1);
    }
    return s3;
}
int main()
{
    stack<int>s1,s2,s3;
    cout<<"\n Enter the first number: \n";
    s1=read();
    cout<<"\n Enter the second number: \n";
    s2=read();
    cout<<"\n Addition is:   \n";
    s3=add(s1,s2);
    display(s3);
    return 0;
}