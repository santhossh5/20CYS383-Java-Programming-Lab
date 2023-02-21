#include <iostream>
#include <list>
using namespace std;

bool compare(int a, int b)
{
    return (a > b);
}

int main()
{
    list<int> l = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};

    // for(it=l.begin() ; it != l.end() ; it++)
    //{
    //   cout<<*it<<" ";
    //}
    list<int> l2 = {2};
    l2.merge(l);
    cout << endl;
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";

    }
    // l2.unique(compare);
    cout << endl;
    l2.reverse();
    // l2.sort(compare);
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }
}