#include<iostream>
#include<list>
using namespace std;
class stack
{
    public:
    list<int>s;
    list<int>::iterator i;
    public:
    void push(int a)
    {
        s.push_back(a);
    }
    int top()
    {
        return s.back();
    }
    int pop()
    {
        int x=top();
        s.pop_back();
        return x;
    }
    int size()
    {
        return s.size();
    }
    void display()
    {
        cout<<"\n";
        for( i=s.begin();i!=s.end();i++)
        {
            cout<<" "<<*i;
        }
        cout<<"\n";
    }

};
int main()
{
    stack o;
    int c,k;
    do
    {
        cout<<"\n1.push\n2pop\n3.top\n4.size\n5.display6.exit\n";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<"\n Enter the element\n";
            cin>>k;
            o.push(k);
            break;
            case 2:
            k=o.pop();
            cout<<"\n"<<k<<"  popped";
            break;
            case 3:
            k=o.top();
            cout<<"\n Top="<<k;
            break;
            case 4:
            k=o.size();
            cout<<"\n Size="<<k;
            break;

            case 5:
            o.display();
            break;
        
        default:
            break;
        }
    } while (c<=5);
 return 0;   
}