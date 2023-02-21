#include <iostream>

using namespace std;

class test
{
    public:
    int code;
    static int count; 
    void setcode() 
    {
        code = count++; 
    }
    void showcode() 
    {
        cout<<"object number: "<<code<<endl; 
    }
    static int name()
    {
        return 5;
    }
    static void showcount()
    { 
        cout<<"count: "<<count<<endl<<name()<<endl;
    } 
    
};

int test::count = 10;

int main()
{
    test t1,t2; 
    t1.setcode(); 
    t2.setcode();
    test :: showcount(); 
    test t3; 
    t3.setcode();
    t1.showcount(); 
    t1.showcode(); 
    t2.showcode(); 
    t3.showcode(); 
    cout<<test::count<<endl;
    
    return 0;
}