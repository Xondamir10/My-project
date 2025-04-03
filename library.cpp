#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>
 int main() {

//problem 1
         // int myInt = 100;
         // int* myPtr = &myInt;
         // std::cout << "Value of integer: " << myInt << std::endl;
         // std::cout << "Memory address of integer: " << myPtr << std::endl;
         // std::cout << "Value at address: " << *myPtr << std::endl;



//problem 2
                // int myInt = 10;
                // int* myPtr = &myInt;
                // std::cout << "Value before modification: " << myInt << std::endl
                // *myPtr = 25;
                // std::cout << "Value after modification: " << myInt << std::endl;


//problem 3
        // void swap(int *a, int *b) {
        //         int temp = *a;
        //         *a = *b;
        //         *b = temp;
        // }
        // int main() {
        //         int num1 = 5;
        //         int num2 = 10;
        //         std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;
        //         swap(&num1, &num2);
        //         std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;


//problem 4
                 // int arr[] = {10, 20, 30, 40, 50};
                 // int* ptr = arr;
                 // int size = sizeof(arr) / sizeof(arr[0]);
                 // for (int i = 0; i < size; ++i) {
                 //         std::cout << *ptr << " ";
                 //         ptr++;
                 // }
                 // std::cout << std::endl;


//problem 5
                 // int arr[] = {1, 2, 3, 4, 5, 6, 7};
                 // int size = sizeof(arr) / sizeof(arr[0]);
                 // int* middlePtr;
                 // if (size % 2 == 0) {
                 //         middlePtr = arr + size / 2 -1;
                 //         std::cout << "Middle elements: " << *middlePtr << " and " << *(middlePtr +1) << std::endl;
                 // } else {
                 //         middlePtr = arr + size / 2;
                 //         std::cout << "Middle element: " << *middlePtr << std::endl;
                 // }


//problem 6
         // void squareValue(int* numPtr) {
         //         *numPtr = (*numPtr) * (*numPtr);
         // }
         // int main() {
         //         int num = 5;
         //         std::cout << "Original value: " << num << std::endl;
         //         squareValue(&num);
         //         std::cout << "Squared value: " << num << std::endl;


//problem 7
        // int myArray[] = {1, 2, 3, 4, 5};
        // int* myPointer = myArray;
        // std::cout << "sizeof(myArray): " << sizeof(myArray) << " bytes" << std::endl;
        // std::cout << "sizeof(myPointer): " << sizeof(myPointer) << " bytes" << std::endl;


//problem 8
                 // int myInt = 42;
                 // void* voidPtr = &myInt;
                 // int* intPtr = static_cast<int*>(voidPtr);
                 // std::cout << "Value of myInt: " << *intPtr << std::endl;


//problem 9
         // int findMax(int* arr, int size) {
         //         if (size <= 0) {
         //                 return 0;
         //         }
         //         int max = *arr;
         //         int* ptr = arr + 1;
         //         for (int i = 1; i < size; ++i) {
         //                 if (*ptr > max) {
         //                         max = *ptr;
         //                 }
         //                 ++ptr;
         //         }
         //         return max;
         // }
         // int main() {
         //         int myArray[] = {5, 12, 8, 20, 3};
         //         int maxSize = sizeof(myArray) / sizeof(myArray[0]);
         //         int maxValue = findMax(myArray, maxSize);
         //         std::cout << maxValue << std::endl;


 //problem 10
    // int a;
    // int b;
    // int *ptrA;
    // int *ptrB;
    // std::cout << "Enter  value for 'a': ";
    // std::cin >> a;
    // std::cout << "Enter  value for 'b': ";
    // std::cin >> b;
    // ptrB = &b;
    // std::cout << "\nValue pointed to by ptrA: " << *ptrA << std::endl;
    // std::cout << "Value pointed to by ptrB: " << *ptrB << std::endl;


//problem 11
        // int n;
        // std::cin >> n;
        // int* data = new int[n];
        // for (int i = 0; i < n; ++i) {
        //     std::cin >> data[i];
        // }
        // int* maxPtr = data;
        // int maxVal = data[0];
        // for (int i = 1; i < n; ++i) {
        //     if (data[i] > maxVal) {
        //         maxVal = data[i];
        //         maxPtr = &data[i];
        //     }
        // }
        // std::cout << maxPtr << std::endl;
        // delete[] data;



//problem 12
        // int a = 10;
        // int b = 20;
        // int* ptrA = &a;
        // int* ptrB = &b;
        // std::cout << *ptrA << " " << *ptrB << std::endl;
        // *ptrA = *ptrA + *ptrB;
        // *ptrB = *ptrA - *ptrB;
        // *ptrA = *ptrA - *ptrB;
        // std::cout << *ptrA << " " << *ptrB << std::endl;


//problem 13
        // int arr[10];
        // int* ptrA = arr;
        // std::srand(std::time(0));
        // for (int i = 0; i < 10; ++i) {
        //     arr[i] = std::rand() % 100;
        // }
        // for (int i = 0; i < 10; ++i) {
        //     std::cout << ptrA + i << " " << *(ptrA + i) << std::endl;
        // }


//problem 14
        // int message = 42;
        // int* ptr = &message;
        // std::cout << *ptr << std::endl;


//problem 15
                // int treasures[] = {10, 20, 30, 40, 50};
                // int* ptr = treasures;
                // ptr = ptr + 4;
                // std::cout << *ptr << std::endl;


//problem 16
                // int score = 75;
                // int* ptr = &score;
                // *ptr = *ptr + 10;
                // std::cout << 65 << " " << *ptr << std::endl;


//problem 17
        // void reverseArray(int arr[], int size) {
        //         int* start = arr;
        //         int* end = arr + size - 1;
        //         while (start < end) {
        //                 int temp = *start;
        //                 *start = *end;
        //                 *end = temp;
        //                 start++;
        //                 end--;
        //         }
        // }
        //int main() {
        //         int arr[] = {1, 2, 3, 4, 5};
        //         int size = sizeof(arr) / sizeof(arr[0]);
        //         reverseArray(arr, size);
        //         for (int i = 0; i < size; ++i) {
        //                 std::cout << arr[i] << " ";
        //         }
        //         std::cout << std::endl;



//problem 18
                // int scores[] = {78, 95, 85, 62, 88};
                // int size = sizeof(scores) / sizeof(scores[0]);
                // int* first = nullptr;
                // int* second = nullptr;
                // int* third = nullptr;
                // for (int i = 0; i < size; ++i) {
                //         if (first == nullptr || scores[i] > *first) {
                //                 third = second;
                //                 second = first;
                //                 first = &scores[i];
                //         } else if (second == nullptr || scores[i] > *second) {
                //                 third = second;
                //                 second = &scores[i];
                //         } else if (third == nullptr || scores[i] > *third) {
                //                 third = &scores[i];
                //         }
                // }
                // std::cout << *first << " " << *second << " " << *third << std::endl;



//problem 19
        // int* countDigits(const int& number) {
        //         int* counts = new int[10]();
        //         int num = number;
        //         if (num == 0) {
        //                 counts[0] = 1;
        //                 return counts;
        //         }
        //         if (num < 0) {
        //                 num = -num;
        //         }
        //         while (num > 0) {
        //                 counts[num % 10]++;
        //                 num /= 10;
        //         }
        //         return counts;
        // }
        // int main() {
        //         int number = 1223444;
        //         int* counts = countDigits(number);
        //         for (int i = 0; i < 10; ++i) {
        //                 std::cout << counts[i] << " ";
        //         }
        //         std::cout << std::endl;
        //         delete[] counts;
                return 0;
        }
