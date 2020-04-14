#include<iostream>
using namespace std;
#define max 10
template<class T>
class vector
{
    public:
    T a[max];
    int n;
    void create()
    {
        cout<<"\n Enter the total number of elements: ";
        cin>>n;
        cout<<"\n Enter the values\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void modify()
    {
        int found=0;
        cout<<"\n Enter the number which you want to modify: ";
        int k=0;
        cin>>k;
        for(int i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                found=1;
                cout<<"\n Enter the new value: ";
                int r;
                cin>>r;
                a[i]=r;
            }
            
        }
        if(found==0)
        {
                cout<<"\n not found.....";   
        }
    }
    void multiply()
    {
        int h;
        cout<<"\n Enter the number with which you want to multiply: ";
        cin>>h;
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]*h;
        }
    }
    void display()
    {
        
            cout<<"\n";
            cout<<"(";
            for(int i=0;i<n;i++)
        {
            cout<<a[i];
             if(i!=n-1)
            cout<<",";
        }
        cout<<")";
    }
};
int main()
{
    vector<int>o;
    vector<float>p;
    int j,u;

    do
    {
         cout<<"\n Enter 1 to take integer data: ";
        cout<<"\n Enter 2 to take float data: ";
        cin>>j;
        switch(j)
        {
            case 1:
                {
                    o.create();
                    do{
                    cout<<"\n Enter 1 to modify: ";
                    cout<<"\n Enter 2 to multiply: ";
                    cout<<"\n Enter 3 to dispaly: ";
                    cin>>u;
                    switch(u)
                    {
                        case 1:
                            {
                                o.modify();
                                break;
                            }
                        case 2:
                            {
                                o.multiply();
                                break;
                            }
                            case 3:
                            {
                                o.display();
                            }
                    }
                    }while(u<=3);
                    break;
                }
                case 2:
                    {
                        p.create();
                        do{
                        cout<<"\n Enter 1 to modify: ";
                         cout<<"\n Enter 2 to multiply: ";
                         cout<<"\n Enter 3 to display: ";
                         cin>>u;
                          switch(u)
                         {
                              case 1:
                            {
                                p.modify();
                                break;
                            }
                             case 2:
                            {
                                p.multiply();
                                break;
                            }
                             case 3:
                            {
                                p.display();
                            }
                          }
                        }
                        while(u<=3);
                          break;
                    }
        }
    }while(j<=2);
    return 0;   
}