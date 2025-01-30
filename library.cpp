#include <iomanip>
#include <iostream>
using namespace std;
int main() {

    //problem   1
    //int  a,b,c,d,e ;
    //cin >>a>>b>>c>>d>>e;
    //int sum=a+b+c+d+e,
       // cout<< "Sum is" <<sum>> endl;


    //problem    2
 int studentID;
    float GPA;
 int  Yearofstudy;
    int studyfee;
   cout<<"Enter Your Student ID: ";
    cin>>studentID;
    cout<<"Enter Your GPA: ";
    cin>>GPA;
    cout<<"Enter Your Year of study: ";
  cin>>Yearofstudy;
   cout<<"Enter Your Study fee: ";
   cin>>studyfee;
   cout<<endl;

    //problem  3
 //declaration
    int temp_Celsius;
 int temp_Fahrenheit;
  cout<<"Enter Your Celsius: ";
   cin>>temp_Celsius;
   //calculation
  temp_Fahrenheit = (temp_Celsius*9/5)+32;//printing the result
    cout<< "Temperature in Celsius" <<temp_Celsius<<endl;
    cout<< "Temperature in Fahrenheit" <<temp_Fahrenheit<<endl;
    //problem  4
int quantity;
    cout<<"Enter Your Quantity: ";
     double cost_per_item;
cin>>cost_per_item;
cout<<quantity<<endl;
    // problem  5
     int age1, age2, age3, age4;
     float average_age;
    cout<<"Enter Your Age 1: ";
    cin>>age1;
     cout<<"Enter Your Age 2: ";
    cin>>age2;
     cout<<"Enter Your Age 3: ";
   cin>>age3;
    cout<<"Enter Your Age 4: ";
    cin>>age4;
    average_age = (age1+age2+age3+age4)/4;
     cout<<"Average age is "<<average_age<<endl;


    // problem 6
     int length, width, area, perimeter;
     cout<<"Enter Your Length: ";
    cin>>length;
    cout<<"Enter Your Width: ";
     cin>>width;
     //calculation
     area = length*width;
    perimeter = 2*(length+width);
     cout<<"Perimeter is "<<perimeter<<endl;cout<<"Area is "<<area<<endl;


 //problem  7
 int dividend, divisor, quotient, remainder;
    cout<<"Enter Your Dividend: ";
    cin>>dividend;
    cout<<"Enter Your Divisor: ";
    cin>>divisor;
    //calculationquotient = dividend / divisor;
    remainder = dividend-(quotient*divisor);
    cout<<"Quotient is "<<quotient<<endl;
    cout<<"Remainder is "<<remainder<<endl;


//problem  8
    int UZS, USD;
    cout<<"Enter amount of money in USD: ";
    cin>>USD;
    //calculation
    UZS = USD*12500;
     cout<<"USD is "<<UZS<<endl;
//problem  9
    int radius,area_of_circle;
    float pi = 3.14159;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    //calculation
    area_of_circle = radius*radius*pi;
    cout<<"Area is "<<area_of_circle<<endl;

    return 0;
}
