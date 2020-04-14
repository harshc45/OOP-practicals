#include<iostream>
#include<fstream>
#include<cstring>
# define max 10
using namespace std;
class phonebook
{
    public:
    int n;
    string name[max],phno[max];
    void getdata()
    {
        cout<<"\n Enter the total number of entries: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"\n Enter the name: ";
            cin>>name[i];
            cout<<"\n Enter the phone number: ";
            cin>>phno[i];
        }
    }
    void display()
    {
        cout<<"\n Name\t\tphone";
        for(int i=0;i<n;i++)
        {
            cout<<"\n"<<name[i]<<"\t\t"<<phno[i];
        }
    }
};
int main()
{
    phonebook o;
    o.getdata();
    ofstream of("sample.txt",ios::out);
    of.write((char*)&o,sizeof(o));
    of.close();
    ifstream in;
    in.open("sample.txt",ios::in,ios::beg)

}