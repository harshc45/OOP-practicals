#include<iostream>
using namespace std;
class student
{
    private:
    string name,bg,cls,add,phno;
    char div;
    int roll;
  
    public:
      static int count;
    student()
    {
        cout<<"\n In default constructor....";
        name="";
        bg="";
        add=""; 
        phno="";
        div=' ';
        cls="";
        roll=0;
    }
    student(string cls,char div)
    {
        cout<<"\n In paramerterized constructor....";
        this->cls=cls;
        this->div=div;
    }
    student(student &x)
    {
        cout<<"\n In copy constructor....";
    }
    ~student()
    {
        cout<<"\n In Destructor.....";
    }
    void getdata()
    {
        cout<<"\n Enter the name of student: \n";
        cin>>name;
         cout<<"\n Enter the blood group of student: \n";
        cin>>bg;
         cout<<"\n Enter the phone number of student: \n";
        cin>>phno;
         cout<<"\n Enter the address of student: \n";
        cin>>add;
        roll=totnum();
    }
    void display()
    {
        cout<<"\nrRoll\tName\tClass\tDivision\tBlood Group\tAddress\t\tPhone";
        cout<<"\n";
        cout<<roll<<"\t"<<name<<"\t"<<cls<<"\t"<<div<<"\t\t"<<bg<<"\t\t"<<add<<"\t\t"<<phno;
    }
    static int totnum()
    {
        cout<<"\n In static member function....";
        ++count;
        return count;
    }
};
int student::count;
int main()
{
    student d;
    cout<<"\n This is to show copy constructor..\n";
    d.getdata();
    student c=d;
    d.display();
    student *t;
    t = new student("SE",'c');
    t->getdata();
    t->display();
    delete(t);
    int n;
    cout<<"\n Enter total number of students: ";
    cin>>n;
    
        student *s[n];
        for(int i=0;i<n;i++)
        {
        s[i]=new student("SE",'C');
           
        
        s[i]->getdata();
        }
        for(int i=0;i<n;i++)
        {
        s[i]->display();
        }
      

        return 0;
    
}