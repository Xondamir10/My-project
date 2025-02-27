#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
   using namespace std;
// const double pi = 3.141592653589793;
// double area(double r)
// {return pi * r * r;
// }
// double circumference(double r)
// {return 2*pi * r;
// }
// double volume(double r)
//  {return 4/3 *pi * r*r*r;}
//
// int main() {
// double r;
// cout << "Enter the radius of the circle: ";
// cin >> r;
// if (r<0){ cout << "Invalid input" << endl; return 1; }
// cout << "Area of the circle: " << area(r) << endl;
// cout << "Volume of the sphere: " << volume(r) << endl;
// cout << "Sircumference of the circle: " << circumference(r) << endl;





//problem   14

    // Function declaration
    // void welcomeMessage() {
    //     std::cout << "Welcome to the C++ programming world!" << std::endl;
    // }
    // int main() {
    //     welcomeMessage();

//problem 15

        // void greetUser() {
        //     std::string name;
        //     std::cout << "Please enter your name: ";
        //     std::getline(std::cin, name);
        //     std::cout << "Hello, " << name << "!" << std::endl;
        // }
        //  int main() {
        //     greetUser();


//problem 16

// int maxNumber(int a, int b) {
//     return (a > b) ? a : b;
// }
// int main() {
//     int num1, num2;
//     std::cout << "Enter two integers: ";
//     std::cin >> num1 >> num2;
//     int maxNum = maxNumber(num1, num2);
//     std::cout << "The larger number is: " << maxNum << std::endl;


//problem 17

// long long factorial(int n) {
//     if (n < 0) return -1;
//     long long res = 1;
//     for (int i = 2; i <= n; ++i) res *= i;
//     return res;
// }
// int main() {
//     int n;
//     cout << "Enter a number to find its factorial: ";
//     std::cin >> n;
//     long long f = factorial(n);
//     if (f == -1) std::cout << "Error";
//     else std::cout << f;

//problem 18

// void printRectangle(int width, int height) {
//     if (width <= 0 || height <= 0) {
//         cout << "Width and height must be positive integers." << endl;
//         return;
//     }
//      for (int i = 0; i < height; ++i) {
//         for (int j = 0; j < width; ++j) {
//             cout << "*";
//         }
//         cout << endl;
//    }
// }
// int main() {
//     int width, height;
//     cout << "Enter the width of the rectangle: ";
//     cin >> width;
//      cout << "Enter the height of the rectangle: ";
//     cin >> height;
//     printRectangle(width, height);





//problem 1
// double calc(int p, int b, int s) { return p * 10.0 + b * 8.0 + s * 5.0; }
// int main() {
//     int c, q, p = 0, b = 0, s = 0;
//     do {
//         cout << "\n1. Pizza $10\n2. Burger $8\n3. Salad $5\n4. Bill\n5. Exit\n";
//         cin >> c;
//         switch (c) {
//             case 1: cout << "Qty: "; cin >> q; p += q; break;
//             case 2: cout << "Qty: "; cin >> q; b += q; break;
//             case 3: cout << "Qty: "; cin >> q; s += q; break;
//             case 4:
//                 cout << fixed << setprecision(2) << "\nPizza: " << p << " x $10 = $" << p * 10.0
//                      << "\nBurger: " << b << " x $8 = $" << b * 8.0
//                      << "\nSalad: " << s << " x $5 = $" << s * 5.0
//                      << "\nTotal: $" << calc(p, b, s) << endl;
//             p = b = s = 0;
//             break;
//             case 5: cout << "Bye!\n"; break;
//             default: cout << "Invalid.\n";
//         }
//     } while (c != 5);


//problem 2
// double calculateParkingFee(int hours) {
//     if (hours <= 2) {
//         return 0.0;
//     }
//     if (hours <= 5) {
//         return (hours - 2) * 2.0;
//     }
//     return 3 * 2.0 + (hours - 5) * 5.0;
// }
// int main() {
//     int hours;
//     char continueParking = 'y';
//      while (continueParking == 'y' || continueParking == 'Y') {
//         cout << "Enter the number of hours parked: ";
//         cin >> hours;
//          double fee = calculateParkingFee(hours);
//         cout << "Parking fee: $" << fee << endl;
//         cout << "Calculate fee for another user? (y/n): ";
//         cin >> continueParking;
//     }



//problem 3
// double balance = 500;
//
// void deposit(double amount) { balance += amount; }
// void withdraw(double amount) { if (amount <= balance) balance -= amount; else cout << "Insufficient funds\n"; }
// void showBalance() { cout << "Balance: $" << fixed << setprecision(2) << balance << endl; }
//
// int main() {
//     int choice;
//     double amount;
//      do {
//         cout << "1. Deposit, 2. Withdraw, 3. Balance, 4. Exit: ";
//         cin >> choice;
//             switch (choice) {
//             case 1: cin >> amount; deposit(amount); break;
//             case 2: cin >> amount; withdraw(amount); break;
//             case 3: showBalance(); break;
//             case 4: cout << "Exiting\n"; break;
//             default: cout << "Invalid choice\n";
//         }
//     } while (choice != 4);


//problem 4

// double calculatePrice(int movieChoice, int numTickets) {
//     switch (movieChoice) {
//         case 1: return numTickets * 8.0;
//         case 2: return numTickets * 10.0;
//         case 3: return numTickets * 12.0;
//         default: return 0.0;
//     }
// }
// int main() {
//     int movieChoice, numTickets;
//     double totalPrice;
//     char continueBooking;
//     do {
//         cout << "\n--- Movie Ticket Booking ---" << endl;
//         cout << "1. Movie A: $8" << endl;
//         cout << "2. Movie B: $10" << endl;
//         cout << "3. Movie C: $12" << endl;
//         cout << "Enter movie choice: ";
//         cin >> movieChoice;
//
//         cout << "Enter number of tickets: ";
//         cin >> numTickets;
//
//         totalPrice = calculatePrice(movieChoice, numTickets);
//
//         if (totalPrice > 0) {
//             cout << "Total price: $" << totalPrice << endl;
//         } else {
//             cout << "Invalid movie choice." << endl;
//         }
//
//         cout << "Book another ticket? (yes/no): ";
//         cin >> continueBooking;
//
//     } while (continueBooking == 'y' || continueBooking == 'Y');
//
//     cout << "Thank you for booking!" << endl;



//problem 5
// double calculatePrice(int trainChoice, int numTickets)
//    {
//       switch (trainChoice) {
//        case 1: return numTickets * 15.0;
//        case 2: return numTickets * 20.0;
//        case 3: return numTickets * 25.0;
//        default: return 0.0;  }
// }
//    int main()
// {
//       int trainChoice, numTickets;
//       double totalPrice;
//       char continueBooking;
//       do {
//          cout << "\n--- Train Ticket Booking ---" << endl;
//          cout << "1. Train X: $15" << endl;
//          cout << "2. Train Y: $20" << endl;
//          cout << "3. Train Z: $25" << endl;
// cout << "Enter Train Choice: ";
// cin >> trainChoice;
// cout << "Enter Number of Tickets: ";
// cin >> numTickets;
// totalPrice = calculatePrice(trainChoice, numTickets);
// cout << "Total Price: " << totalPrice << endl;
// cout << " Book another tickets:? (Y/N)";
// cin >> continueBooking; }
// while (continueBooking == 'Y' || continueBooking == 'y');
// cout << " Thank you for booking " << endl;



//problem 6

// void check(string p) {
//     bool u = 0, l = 0, d = 0, s = 0;
//     if (p.size() < 8) { cout << "Weak: Length\n"; return; }
//     for (char c : p) {
//         if (isupper(c)) u = 1;
//         if (islower(c)) l = 1;
//         if (isdigit(c)) d = 1;
//         if (strchr("!@#$%^&*()_+=-`~[]{};':\",.<>/?|\\", c)) s = 1;
//     }
//     if (u && l && d && s) cout << "Strong\n";
//     else {
//         cout << "Weak:";
//         if (!u) cout << " Upper";
//         if (!l) cout << " Lower";
//         if (!d) cout << " Digit";
//         if (!s) cout << " Symbol";
//         cout << endl;
//     }
// }
//
// int main() {
//     string p;
//     cout << "Password: ";
//     getline(cin, p);
//     check(p);



//problem 7

// bool leap(int year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }
//
// bool valid(int day, int month, int year) {
//     if (month < 1,month > 12, day < 1) return false;
//     int days[] = {0, 31, leap(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     return day <= days[month];
// }
//
// void next(int &d, int &m, int &y) {
//     int days[] = {0, 31, leap(y) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     if (++d > days[m]) {
//         d = 1;
//         if (++m > 12) {
//             m = 1;
//             y++;
//         }
//     }
// }
//
// int main() {
//     int d, m, y;
//     char again;
//     do {
//         cout << "Please enter day, month, year: ";
//         cin >> d >> m >> y;
//         if (valid(d, m, y)) {
//             cout << "Valid. ";
//             next(d, m, y);
//             cout << "Next: " << d << " " << m << " " << y << endl;
//         } else {
//             cout << "Invalid\n";
//         }
//         cout << "Again? (y/n): ";
//         cin >> again;
//     } while (again == 'y' || again == 'Y');
return 0;
 }