#include <iostream>
using namespace std;
class triangle
{
private:
    int length;
    int breadth;
    

public:
float ar;
    void read()
    {
        cin >> length >> breadth;
        cout<<endl;
    }
    float area()
    {

        ar = 0.5 * length * breadth;
        cout << "Area of triangle "<< " = " << ar << endl;
        return ar;

    }
    void compare(triangle t)
    {
        if (this -> area() > t.area() )
        {
            cout << "Area of triangle-1 is greater";
        }
        else if (this->ar<t.ar)
            cout << "Area of trianlge-2 is greater";
        else cout<<"Area's are equal";
    }
};
int main()
{
    triangle t[2], c;
    for (int i = 0; i < 2; i++)
    {
        t[i].read(); // For 10 triangles, for 1 triangle just remove for loop and array of classes.
    }
    t[0].compare(t[1]);
}