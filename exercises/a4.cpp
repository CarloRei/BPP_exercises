#include <iostream>
#include <iomanip>   // formatting floating-point numbers with 1 decimal place
using namespace std;

int main()
{
   int m1 = 5, m2 = 7;
   double d1 = 3.7, d2 = 8.0;

    cout << "\n\n Display arithmetic operations with mixed data type :\n";
	cout << "---------------------------------------------------------\n";
   cout << fixed << setprecision(1);

   cout <<" "<< m1 << " + " << m2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< d1 << " + " << d2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< m1 << " + " << d2 << " = " <</*Enter code*/<< endl;

   cout <<" "<< m1 << " - " << m2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< d1 << " - " << d2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< m1 << " - " << d2 << " = " <</*Enter code*/<< endl;

   cout <<" "<< m1 << " * " << m2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< d1 << " * " << d2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< m1 << " * " << d2 << " = " <</*Enter code*/<< endl;

   cout <<" "<< m1 << " / " << m2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< d1 << " / " << d2 << " = " <</*Enter code*/<< endl;
   cout <<" "<< m1 << " / " << d2 << " = " <</*Enter code*/<< endl;
   cout << endl;
   return 0;
}
