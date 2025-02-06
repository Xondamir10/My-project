#include <iostream>
using  namespace std;

int main() {

//problem  1
    double number;
 cout << "Enter a number: ";
    cin >> number;
   if (number > 0) {
        cout << number << " is positive" << endl;
    } else if (number < 0) {
        cout << number << " is negative" << endl;
    } else {
        cout << number << " is zero" << endl;
    }


 //problem 2
    int numb;
cout << "Enter an integer: ";
    cin >> numb;
 if (numb % 2 == 0) {
        cout << numb << " is even" << endl;
    } else {
        cout << numb << " is odd" << endl;
    }



    
//problem 3
    double x, y;
   cout << "Enter two numbers: ";
    cin >> x >> y;
    if (x > y) {
        cout << x << " is the largest number." << endl;
    } else if (y > x) {
        cout << y << " is the largest number." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }



//problem  4
    double numbe1, numbe2, numbe3;
    cout << "Enter three numbers: ";
    cin >> numbe1 >> numbe2 >> numbe3;
    if (numbe1 >= numbe2 && numbe1 >= numbe3) {
        cout << numbe1 << " is the largest number." << endl;
    } else if (numbe2 >= numbe1 && numbe2 >= numbe3) {
        cout << numbe2 << " is the largest number." << endl;
    } else {
        cout << numbe3 << " is the largest number." << endl;
    }


    
//problem 5
    int year;
     cout << "Enter a year: ";
  cin >> year;
// Leap year conditions:
  // 1. Divisible by 4 but not by 100
  // 2. Divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << year << " is a leap year." << endl;
  } else {
    cout << year << " is not a leap year." << endl;
  }



//problem 6
  int speed;
 cout << "Enter the speed of the vehicle: ";
  cin >> speed;
 if (speed < 20) {
    cout << "Too slow" << endl;
  } else if (speed > 80) {
    cout << "Too fast" << endl;
  } else {
    cout << "Just right" << endl;
  }


 
    //problem 7
  int marks;
 cout << "Enter the marks: ";
  cin >> marks;
 if (marks >= 50) {
    cout << "Pass" << endl;
  } else {
    cout << "Fail" << endl;
  }


//problem  8
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {cout << "positive" << endl; }
    else if (num < 0) {cout << "negative" << endl; }
    else {cout << "zero" << endl; }




//problem 9
char input;
    cout << "Enter traffic light colours('g','y' or 'r')";
    cin >> input;
    if (input == 'g') {cout << "Go!" << endl; }
    else if (input == 'y') {cout << "Get ready!" << endl; }
    else if (input == 'r') {cout << "Stop!" << endl; }
    else {cout << "Error" << endl; }




//problem  10
    int grade;
    cout << "Enter a grade: ";
    cin >> grade;
    if (grade >= 90 && grade <= 100) {cout<< "A"<< endl; }
    else if (grade >= 80 && grade <= 89) {cout<< "B"<< endl; }
    else if (grade >= 70 && grade <= 79) {cout<< "C"<< endl; }
    else if (grade >= 60 && grade <= 69) {cout<< "D"<< endl; }
    else {cout<< "F"<< endl; }




//problem  11
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 % num2 == 0) {cout << "num1 is divisible by num2" << endl; }
    else {cout << "num1 is not divisible by num2" << endl; }



//problem 12
    int A, B, C;
    cout << "Enter three numbers for triangle: ";
    cin >> A >> B >> C;
    if (A < B+C && B< A+C && C< A+B) {cout << "The triangle is valid" << endl; }
    else {cout << "The triangle is not valid" << endl; }



//problem  13
    char Ch;
     cout << "Enter a character: ";
    cin >> Ch;
    if (islower(Ch)) {
        cout << Ch << " is a lowercase character." << endl;
    } else if (isupper(Ch)) {
        cout << Ch << " is an uppercase character." << endl;
    } else {
        cout << Ch << " is not an alphabet character." << endl;
    }



//problem 14
    double weight1, price1, weight2, price2;
    cout << "Enter weight and price of package 1: ";
    cin >> weight1 >> price1;
    cout << "Enter weight and price of package 2: ";
    cin >> weight2 >> price2;
    if (weight1 <= 0 || price1 <=0 || weight2 <= 0 || price2 <= 0) {
        cout << "Invalid input. Weight and price must be positive values." << endl;
        return 1;
    }
    // Calculation
    double pricePerUnit1 = price1 / weight1;
    double pricePerUnit2 = price2 / weight2;
    if (pricePerUnit1 < pricePerUnit2) {
        cout << "Package 2 has a better price (" << pricePerUnit1 << " per unit)." << endl;
    } else if (pricePerUnit2 < pricePerUnit1) {
        cout << "Package 1 has a better price (" << pricePerUnit2 << " per unit)." << endl;
    } else {
        cout << "Both packages have the same price per unit (" << pricePerUnit1 << " per unit)." << endl;
    }





    //problem  15
    int N, reversed_num=0;
    double remainder, original_num;
    cout << "Enter a three-digit integer: ";
    cin >> N;
    //Validation
    if (N<100 || N >999) {
        cout << "Invalid input. Please enter a three-digit integer." << endl;
        return 1;
    }
    original_num = N;
    while (N != 0) {
        remainder = N%10;
        reversed_num = reversed_num * 10 + remainder;
        N /= 10;
    }
    if (original_num == reversed_num) {
        cout << original_num << " is a palindrome." << endl;
    } else {
        cout << original_num << " is not a palindrome." << endl;
    }
    return 0;
}
