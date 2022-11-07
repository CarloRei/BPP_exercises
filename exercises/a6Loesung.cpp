#include <iostream>


using namespace std;



int main(){

int x = 20;
int y = 30;
int temp = x;
cout<<"Variable x is: "<<x <<endl;
cout<<"Variable y is: "<<y <<endl;
cout<<endl<<"swap"<<endl;

x = y;
y = temp;

cout<<"Variable x is: "<<x <<endl;
cout<<"Variable y is: "<<y <<endl;



return 0;
}
