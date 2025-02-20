#include <iostream>
using  namespace std;

int main() {
    //problem  1
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Sum of first 100 natural numbers (for loop): " << sum << endl;
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int sum_while = 0;
    int i = 1;
    while (i <= n) {
        sum_while += i;
        i++;
    }
    cout << "Sum of first " << n << " natural numbers: " << sum_while << endl;







    return 0;
}