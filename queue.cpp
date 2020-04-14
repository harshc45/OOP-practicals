#include<iostream>
#include<list>
using namespace std;
class queue
{
    list<int>q;
    public:
    void pushback(int a)
    {
        q.push_back(a);
    }
    int popfront()
    {
        int x;
        q.pop_front();
        return x;
    }
    int fornt()
    {
        int x;
        x=q.front();
        return x;
    }
    int rear();
    {
        int x;
        
    }
};