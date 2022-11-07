#include <iostream>
#include <iomanip>

using namespace std;



double arithmeticMean(){
cout<<"Enter 5 numbers: "<<endl;
int i = 0;
double sum , value , mean;


while (i < 5){

cin>>value;

sum += value;
i++;
}

mean = sum/5;

return mean;
}



int main(){
double mean{};
mean = arithmeticMean();

cout<<"The arithemtic mean is: "<< mean <<endl;
return 0;

}
