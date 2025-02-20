#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    //problem   1
    // int sum_for = 0;
    // for (int i = 1; i <= 100; i++) {
    //     sum_for += i;
    // }
    // cout << "Sum of first 100 natural numbers (for loop): " << sum_for << endl;
    //
    // // b. Sum of up to a given positive integer n using a while loop
    // int n;
    // cout << "Enter a positive integer n: ";
    // cin >> n;
    //
    // if (n <= 0) {
    //     cout << "Please enter a positive integer." << endl;
    //     return 1; // Indicate an error
    // }
    //
    // int sum_while = 0;
    // int i = 1;
    // while (i <= n) {
    //     sum_while += i;
    //     i++;
    // }
    // cout << "Sum of first " << n << " natural numbers (while loop): " << sum_while << endl;



    //problem 2
    // bool isPrime(int num) {
    //     if (num <= 1) return false;
    //     for (int i = 2; i * i <= num; i++) {
    //         if (num % i == 0) return false;
    //     }
    //     return true;
    // }
    //
    // int main() {
    //     // a.
    //     cout << "First 10 prime numbers (for loop):" << endl;
    //     int count = 0;
    //     for (int num = 2; count < 10; num++) {
    //         if (isPrime(num)) {
    //             cout << num << " ";
    //             count++;
    //         }
    //     }
    //     cout << endl;
    //
    //     // b.
    //     int n;
    //     cout << "Enter the number of prime numbers to display (n): ";
    //     cin >> n;
    //
    //     if (n <= 0) {
    //         cout << "Please enter a positive integer." << endl;
    //         return 1;
    //     }
    //
    //     cout << "First " << n << " prime numbers (while loop):" << endl;
    //     count = 0;
    //     int num = 2;
    //     while (count < n) {
    //         if (isPrime(num)) {
    //             cout << num << " ";
    //             count++;
    //         }
    //         num++;
    //     }
    //     cout << endl;




    //problem 3
    // int n;
    // cout << "Enter a positive integer n: ";
    // cin >> n;
    //
    // if (n <= 0) {
    //     cout << "Please enter a positive integer." << endl;
    //     return 1;
    // }
    //
    // cout << "Collatz sequence for " << n << ": " << endl;
    //
    // while (n != 1) {
    //     cout << n << " ";
    //     if (n % 2 == 0) {
    //         n = n / 2;
    //     } else {
    //         n = 3 * n + 1;
    //     }
    // }
    // cout << 1 << endl;



//problem 4
    // int n;
    // cout << "Enter a positive integer n: ";
    // cin >> n;
    //
    // if (n <= 0) {
    //     cout << "Please enter a positive integer." << endl;
    //     return 1;
    // }
    // int count = 0;
    // while (n > 0) {
    //     n = n / 10;
    //     count++;
    // }
    //
    // cout << "Number of digits in n: " << count << endl;




//problem 5

    // int n;
    // cout << "Enter a positive integer n: ";
    // cin >> n;
    //
    // if (n <= 0) {
    //     cout << "Please enter a positive integer." << endl;
    //     return 1;
    // }
    // cout << "Digits of n from right to left: " << endl;
    //
    // while (n > 0) {
    //     int lastDigit = n % 10;
    //     cout << lastDigit << " ";
    //     n = n / 10;
    // }
    // cout << endl;


//problem 6



        // int gcd(int 'a', int 'b');
        //     if ('a' <= 0 || 'b' <= 0) {
        //         cout << "Please enter two positive integers." << endl;
        //         return 1;
        //     }
        //     while ('b' != 0) {
        //         int remainder = 'a' % 'b';
        //         'a' == "b";
        //         'b= remainder;
        //     }
        //     return 'a';
        // }
        //
        // int main() {
        //     int num1, num2;
        //
        //     cout << "Enter the first positive integer: ";
        //     cin >> num1;
        //
        //     cout << "Enter the second positive integer: ";
        //     cin >> num2;
        //
        //     int result = gcd(num1, num2);
        //
        //     if (result != -1) {
        //         cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;
        //     }



    //problem 7
    // int sum = 0;
    // int count = 0;
    //
    // while (sum <= 100) {
    //     int num;
    //     cout << "Enter a number: ";
    //     cin >> num;
    //     sum += num;
    //     count++;
    //
    //     if (sum > 100) {
    //         cout << "Sum exceeded 100! ";
    //         sum -= num;
    //         count--;
    //         break;
    //     }
    // }
    // cout << "Total sum: " << sum << " Total numbers entered: " << count << endl;



//problem 8
    // double balance = 500.0;
    //
    // cout << fixed << setprecision(2);
    //
    // while (balance > 0) {
    //     cout << "Your balance: $" << balance << endl;
    //     double withdrawal;
    //     cout << "Enter withdrawal amount (or 0 to cancel): ";
    //     cin >> withdrawal;
    //
    //     if (withdrawal == 0) {
    //         break;
    //     } else if (withdrawal > balance) {
    //         cout << "Insufficient funds!" << endl;
    //     } else {
    //         balance -= withdrawal;
    //         cout << "Remaining balance: $" << balance << endl;
    //     }
    // }
    //
    // if (balance == 0) {
    //     cout << "Account balance is zero. Thank you!" << endl;
    // }



//problem 9
    // char input;
    //
    // do {
    //     cout << "Enter 'Y' or 'N': ";
    //     cin >> input;
    //     input = tolower(input);
    //
    //     if (input != 'y' && input != 'n') {
    //         cout << "Invalid input. Please enter 'Y' or 'N'." << endl;
    //     }
    // } while (input != 'y' && input != 'n');
    //
    // cout << "Valid input received: " << input << endl;


//problem 10

    // double balance = 1000.0;
    // int choice;
    // cout << fixed << setprecision(2);
    // do {
    //     cout << "\nATM Menu" << endl;
    //     cout << "1. Check Balance" << endl;
    //     cout << "2. Deposit" << endl;
    //     cout << "3. Withdraw" << endl;
    //     cout << "4. Exit" << endl;
    //     cout << "Enter your choice: ";
    //     cin >> choice;
    //
    //     switch (choice) {
    //         case 1:
    //             cout << "Your balance: $" << balance << endl;
    //             break;
    //         case 2: {
    //             double deposit;
    //             cout << "Enter deposit amount: ";
    //             cin >> deposit;
    //             if (deposit > 0) {
    //                 balance += deposit;
    //                 cout << "Deposit successful. New balance: $" << balance << endl;
    //             } else {
    //                 cout << "Invalid deposit amount." << endl;
    //             }
    //             break;
    //         }
    //         case 3: {
    //             double withdrawal;
    //             cout << "Enter withdrawal amount: ";
    //             cin >> withdrawal;
    //             if (withdrawal > 0) {
    //                 if (withdrawal <= balance) {
    //                     balance -= withdrawal;
    //                     cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
    //                 } else {
    //                     cout << "Insufficient funds!" << endl;
    //                 }
    //             } else {
    //                 cout << "Invalid withdrawal amount." << endl;
    //             }
    //             break;
    //         }
    //         case 4:
    //             cout << "Thank you for using the ATM." << endl;
    //             break;
    //         default:
    //             cout << "Invalid choice. Please try again." << endl;
    //     }
    // } while (choice != 4);



//problem 11
// int choice;
//     double num1, num2, result;
//
//     cout << fixed << setprecision(2);
//
//     do {
//         cout << "\nMenu-Driven Calculator" << endl;
//         cout << "1. Addition" << endl;
//         cout << "2. Subtraction" << endl;
//         cout << "3. Multiplication" << endl;
//         cout << "4. Division" << endl;
//         cout << "5. Square Root" << endl;
//         cout << "6. Power" << endl;
//         cout << "7. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//
//         if (choice >= 1 && choice <= 4) {
//             cout << "Enter number 1: ";
//             cin >> num1;
//             cout << "Enter number 2: ";
//             cin >> num2;
//         } else if (choice == 5) {
//            cout << "Enter number 1: ";
//             cin >> num1;
//         } else if (choice == 6){
//             cout << "Enter number 1: ";
//             cin >> num1;
//             cout << "Enter number 2: ";
//             cin >> num2;
//         }
//
//         switch (choice) {
//             case 1:
//                 result = num1 + num2;
//                 cout << "Result: " << result << endl;
//                 break;
//             case 2:
//                 result = num1 - num2;
//                 cout << "Result: " << result << endl;
//                 break;
//             case 3:
//                 result = num1 * num2;
//                 cout << "Result: " << result << endl;
//                 break;
//             case 4:
//                 if (num2 != 0) {
//                     result = num1 / num2;
//                     cout << "Result: " << result << endl;
//                 } else {
//                     cout << "Division by zero is not allowed." << endl;
//                 }
//                 break;
//             case 5:
//                 if (num1 >= 0) {
//                     result = sqrt(num1);
//                     cout << "Result: " << result << endl;
//                 } else {
//                     cout << "Square root of a negative number is not allowed." << endl;
//                 }
//                 break;
//             case 6:
//                 result = pow(num1, num2);
//                 cout << "Result: " << result << endl;
//                 break;
//             case 7:
//                 cout << "Thank you for using the calculator." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
    // } while (choice != 7);



    //problem 12
//     const int stored_Pass = 1234;
//     int entered_Passw;
//     int attempts = 0;
// do {
//     cout<< "Enter password (numeric only): ";
//     cin >> entered_Passw;
//     if (entered_Passw == stored_Pass) {
//         {
//             cout << "Welcome" << endl;
//             return 1;
//         }
//         if (attempts % 2 == 0) {
//             cout << "Invalid Password" << endl;
//             attempts++;
//         }
//     }
//     while (attempts < 3);
//     cout << "Limit exceeded" << endl;
}



    //problem 13
// int guess;
//     int attempts = 0;
//     cout << "Welcome to the Guessing Game!" << endl;
// do {
//         cout << "Guess: ";
//         cin >> guess;
//         attempts++;
//     if (cin.fail()) {
//             cout << "Invalid input. Please enter a number." << endl;
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         } else if (guess < secretNumber) {
//             cout << "Too low" << endl;
//         } else if (guess > secretNumber) {
//             cout << "Too high" << endl;
//         } else {
//             cout << "Correct!" << endl;
//         }
//
//
//     return 0;
// }