#include<iostream>
using namespace std;
int main()
{
   int length, breadth, area;
   cout << "Enter length of rectangle : "<<endl;
   cin >> length;

   cout << "Enter breadth of rectangle : "<<endl;
   cin >> breadth;
   area = length * breadth;
   cout << "Area of rectangle : " << area<<endl;

   return 0;
}
