#include <iomanip>
#include <iostream>
using namespace std;
int main() {

    //problem   1
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << " How old are you? ";
    cin >> age;
    cout << " Hello " <<name<< ", You are " << age <<" years old. " << endl;

    //problem    2
#include "iostream"
        std::cout << "Number Table:\n\n";
        for (int i = 1; i <= 5; ++i)
            std::cout << std::setw(5) << i << std::endl;


            //problem   3
#include "iostream"
            int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;
                // Swapping the values
int temp = a;
                a=b;
                b=temp;
                cout << "Swapped values " << a << " and " << b << endl;


            //problem  4
#include "iostream"
            int n;
            std::cout << "Enter a number";
std::cin >> n;
            std::cout << setw(10) <<"Number" <<setw(10)<< "Square" << endl;
            for (int i = 1; i <= n; ++i) {
                cout << setw(10) << i << setw(10) << i * i << endl;
            }
//problem  5
#include "iostream"
#include <iomanip>
#include <string>
            std::string input_string;

            std::cout << "Enter a string: ";
            std::getline(std::cin, input_string);

            std::cout << std::setw(50) << std::setfill('*') << std::internal << input_string << std::endl;
    return 0;
}
