#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
   using namespace std ;

   //problem 1
// int recursiveProduct(int a, int b) {
//     if (b == 0) {
//         return 0;
//     }
//     if (b < 0) {
//         return -recursiveProduct(a, -b);
//     }
//     if (a < 0) {
//         return -recursiveProduct(-a, b);
//     }
//     return a + recursiveProduct(a, b - 1);
// }
// int main() {
//     int num1, num2;
//
//     std::cout << "Enter the first number: ";
//     std::cin >> num1;
//
//     std::cout << "Enter the second number: ";
//     std::cin >> num2;
//
//     int product = recursiveProduct(num1, num2);
//     std::cout << "Product: " << product << std::endl;


  //problem 2


// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     return (n > 0) ? n * factorial(n - 1) : 0;
// }
// int main() {
//     int num;
//     std::cout << "Enter a positive integer: ";
//     std::cin >> num;
//     int result = factorial(num);
//     if (num >= 0) {
//         std::cout << "Factorial of " << num << " is: " << result << std::endl;
//     } else {
//         std::cout << "Undefined." << std::endl;
//     }



     //problem 3

// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//      if (n == 1)
//         return 1;
//      else
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
//     int main () {
//         int n;
//         cin >> n ;
//         cout << fibonacci(n)<< endl ;




//problem 4

// int sumNaturalNumbers(int N) {
//
//     if (N == 0) {
//         return 0; // Base case: S(0) = 0
//     } else {
//         return N + sumNaturalNumbers(N - 1); // Recursive relation: S(N) = N + S(N - 1)
//     }
// }
//
// int main() {
// int n;
//     cin >> n ;
//     cout << sumNaturalNumbers(n) << endl ;



//problem 5
// void printDescending(int N) {
//
//     if (N > 0) {
//         std::cout << N << std::endl;
//         printDescending(N - 1);
//     }
// }
//
// int main() {
//    int N;
//     std::cin >> N;
//     printDescending(N);


//problem 6

// int countDigits(int n) {
//
//     if (n == 0) {
//         return 0; // Base case: 0 has 0 digits
//     } else {
//         return 1 + countDigits(n / 10);
//     }
// }
//
// int main() {
// int n ;
//     std::cin >> n ;
//     std::cout << countDigits(n) ;


//problem 7

// int sumOfDigits(int n) {
//     if (n == 0) {
//         return 0;
//     } else {
//         return (n % 10) + sumOfDigits(n / 10);
//     }
// }
//
// int main() {
// int n ;
//     std::cin >> n ;
//     std::cout << sumOfDigits(n) ;


//problem 8

// int power(int x, int y) {
//     if (y == 0) {
//         return 1; // Base case: x^0 = 1
//     } else {
//         return x * power(x, y - 1);
//     }
// }
//
// int main() {
// int x;
//  std::cin >> x;
//     int y;
//     std::cin >> y;
//     std::cout << power(x, y);



//problem 9

// int reverseDigits(int n, int digits) {
//     if (n == 0) {
//         return 0;
//     } else {
//         int lastDigit = n % 10;
//         int remainingDigits = n / 10;
//         return lastDigit * pow(10, digits - 1) + reverseDigits(remainingDigits, digits - 1);
//     }
// }
//
// int countDigits(int n) {
//     if(n==0){
//         return 0;
//     }
//     return 1 + countDigits(n/10);
// }
//
// int main() {
// int n ;
//     cin >> n ;
//     cout << countDigits(n) ;


//problem 10
// void calculateSums(int start, int end, int& evenSum, int& oddSum) {
//     if (start > end) {
//         return;
//     }
//     if (start % 2 == 0) {
//         evenSum += start;
//     } else {
//         oddSum += start;
//     }
//     calculateSums(start + 1, end, evenSum, oddSum); // Recursive call
// }
// int main() {
//     int startNum, endNum;
//     int evenSum = 0, oddSum = 0;
//     std::cout << "Starting number: ";
//     std::cin >> startNum;
//     std::cout << "Ending number: ";
//     std::cin >> endNum;
//     calculateSums(startNum, endNum, evenSum, oddSum);
//     std::cout << "Sum of even numbers: " << evenSum << std::endl;
//     std::cout << "Sum of odd numbers: " << oddSum << std::endl;


//problem 11

// void calculateSums(int start, int end, int& evenSum, int& oddSum) {
//     if (start > end) {
//         return;
//     }
//     if (start % 2 == 0) {
//         evenSum += start;
//     } else {
//         oddSum += start;
//     }
//     calculateSums(start + 1, end, evenSum, oddSum);
// }
// int main() {
//     int startNum, endNum;
//     int evenSum = 0, oddSum = 0;
//     std::cout << "Starting number: ";
//     std::cin >> startNum;
//     std::cout << "Ending number: ";
//     std::cin >> endNum;
//     calculateSums(startNum, endNum, evenSum, oddSum);
//     std::cout << "Sum of even numbers: " << evenSum << std::endl;
//     std::cout << "Sum of odd numbers: " << oddSum << std::endl;


//problem 12

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}
int main() {
    int numDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;
    towerOfHanoi(numDisks, 'A', 'C', 'B');

    return 0;
}