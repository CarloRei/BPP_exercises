#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
    float radius, area;
    cout << "Enter Radius: "<<endl;

    cin >> radius;
    area = PI * radius * radius;

    cout << area<<endl;
    return 0;
}
