#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    for(int i=1 ; i<=8 ; i++)
    {
        v.push_back(i);
    }
    for(auto i=v.begin() ; i!=v.end() ; i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_Size : " << v.max_size();
    v.resize(5);
    cout<<"\nSize after resize to 5 : "<< v.size()<<endl;
    for(auto i=v.begin() ; i!=v.end() ; i++)
    {
        cout<<*i<<" ";
    }
    v.shrink_to_fit();
    cout << "\nCapacity : " << v.capacity();
    cout<<"\nIs it empty : "<<v.empty();
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout<<"\nSize : "<<v.size();
    cout<<"\nCapacity : "<<v.capacity();
    cout << "\nReference operator [g] : v[2] = " << v[2];
 
    cout << "\nat : g1.at(4) = " << v.at(4);
 
    cout << "\nfront() : g1.front() = " << v.front();
 
    cout << "\nback() : g1.back() = " << v.back();
    v.pop_back();
    cout<<"\nSize : "<<v.size();
    cout<<"\nCapacity : "<<v.capacity();
    
    cout<<endl<<endl;
    
    vector <int> a;
    a.assign(5,8);
    for(auto i=a.begin() ; i!=a.end() ; i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    a.insert(a.begin(),4);
    for(auto i=a.begin() ; i!=a.end() ; i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    a.erase(a.begin());
    for(auto i=a.begin() ; i!=a.end() ; i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}