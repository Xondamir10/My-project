#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

 int main() {

//problem 1
                 // int arr[5] = {10, 20, 30, 40, 50};
                 // int* ptr = arr;
                 // for (int i = 0; i < 5; ++i) {
                 //         std::cout << *(ptr + i) << " ";
                 // }
                 // std::cout << std::endl;


//problem 2
                 // int arr[6] = {2, 4, 6, 8, 10, 12};
                 // int* ptr = arr;
                 // for (int i = 0; i < 6; ++i) {
                 //         *ptr = *ptr * 3;
                 //         std::cout << *ptr << " ";
                 //         ptr++;
                 // }
                 // std::cout << std::endl;


//problem 3
         // int arr[4] = {5, 10, 15, 20};
         // int* ptr = arr;
         // std::cout << "arr[2] = " << ptr[2] << std::endl;
         // std::cout << "(arr + 2) = " << *(ptr + 2) << std::endl;

//problem 4
                 // int arr[5] = {1, 2, 3, 4, 5};
                 // int* ptr = arr + 4;
                 // for (int i = 0; i < 5; ++i) {
                 //         std::cout << *ptr;
                 //         ptr--;
                 // }
                 // std::cout << std::endl;



//problem 5
                 // int arr[3] = {1, 2, 3};
                 // int* ptr = arr;
                 // std::cout << "*ptr = " << *ptr << std::endl;
                 // ptr = ptr + 1;
                 // std::cout << "*ptr = " << *ptr << std::endl;


//problem 6
         // int arr[4] = {10, 20, 30, 40};
         // int* ptr = arr;
         // for (int i = 0; i < 4; ++i) {
         //     std::cout << "Value: " << *ptr << " Address: " << ptr << std::endl;
         //     ptr++;
         // }


//problem 7
         // int arr[7] = {11, 4, 7, 18, 5, 2, 9};
         // int* ptr = arr;
         // for (int i = 0; i < 7; ++i) {
         //     if (*ptr % 2 == 0) {
         //         std::cout << *ptr << " ";
         //     }
         //     ptr++;
         // }
         // std::cout << std::endl;


//problem 8
                 // int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
                 // int (*ptr)[3] = matrix;
                 // for (int i = 0; i < 2; ++i) {
                 //         for (int j = 0; j < 3; ++j) {
                 //                 std::cout << *(*(ptr + i) + j);
                 //         }
                 // }
                 // std::cout << std::endl;


//problem 9
         // int a = 7, b = 14, c = 21;
         // int* ptrs[3] = {&a, &b, &c};
         // for (int i = 0; i < 3; ++i) {
         //     std::cout << *ptrs[i] << " ";
         // }
         // std::cout << std::endl;


 //problem 10
     // void swap(int* a, int* b) {
     //     int temp = *a;
     //     *a = *b;
     //     *b = temp;
     // }
     // void sortArray(int* arr, int size) {
     //     for (int* i = arr; i < arr + size - 1; ++i) {
     //         for (int* j = arr; j < arr + (arr + size - 1 - i); ++j) {
     //             if (*j > *(j + 1)) {
     //                 swap(j, j + 1);
     //             }
     //         }
     //     }
     // }
     // int main() {
     //     int arr[5] = {9, 3, 7, 1, 6};
     //     int size = sizeof(arr) / sizeof(arr[0]);
     //     sortArray(arr, size);
     //     int* ptr = arr;
     //     for (int i = 0; i < size; ++i) {
     //         std::cout << *ptr;
     //         ptr++;
     //     }
     //     std::cout << std::endl;


//problem 11
         // const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
         // const char** ptr = suit;
         // for (int i = 0; i < 4; ++i) {
         //     std::cout << *ptr << " ";
         //     ptr++;
         // }
         // std::cout << std::endl;


//problem 12
         // const char* days[3] = {"Mon", "Tue", "Wed"};
         // const char** ptr = days;
         // for (int i = 0; i < 3; ++i) {
         //     std::cout << *(*ptr + 1);
         //     ptr++;
         // }
         // std::cout << std::endl;


//problem 13
         // int deck[4][13] = {0};
         // int (*ptr)[13] = deck;
         // *(*(ptr + 0) + 0) = 1;
         // *(*(ptr + 3) + 1) = 2;
         // const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
         // const char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
         // if (*(*(ptr + 0) + 0) != 0) {
         //     std::cout << faces[*(*(ptr + 0) + 0) - 1] << " of " << suits[0] << std::endl;
         // }
         // if (*(*(ptr + 3) + 1) != 0) {
         //     std::cout << faces[*(*(ptr + 3) + 1) - 1] << " of " << suits[3] << std::endl;
         // }


//problem 14
         // int deck[4][13];
         // const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
         // const char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
         // std::vector<int> cards(52);
         // for (int i = 0; i < 52; ++i) {
         //     cards[i] = i;
         // }
         // std::random_device rd;
         // std::mt19937 gen(rd());
         // std::shuffle(cards.begin(), cards.end(), gen);
         // int cardIndex = 0;
         // int (*ptr)[13] = deck;
         // for (int i = 0; i < 4; ++i) {
         //     for (int j = 0; j < 13; ++j) {
         //         *(*(ptr + i) + j) = cards[cardIndex++];
         //     }
         // }
         // int count = 0;
         // int (*printPtr)[13] = deck;
         // for (int i = 0; i < 4; ++i) {
         //     for (int j = 0; j < 13; ++j) {
         //         int card = *(*(printPtr + i) + j);
         //         std::cout << faces[card % 13] << " of " << suits[card / 13] << ", ";
         //         if (++count % 5 == 0) std::cout << std::endl;
         //     }
         // }
         // std::cout << std::endl;


//problem 15
     // void greet() {
     //     std::cout << "Hello from greet()" << std::endl;
     // }
     // void bye() {
     //     std::cout << "Goodbye from bye()" << std::endl;
     // }
     // int main() {
     //     void (*fptr)();
     //     fptr = greet;
     //     fptr();
     //     fptr = bye;
     //     fptr();


//problem 16
     // int add(int a, int b) {
     //     return a + b;
     // }
     // int multiply(int a, int b) {
     //     return a * b;
     // }
     // int main() {
     //     int (*fptr)(int, int);
     //     int num1 = 3;
     //     int num2 = 5;
     //     fptr = add;
     //     std::cout << "Add: " << fptr(num1, num2) << std::endl;
     //     fptr = multiply;
     //     std::cout << "Multiply: " << fptr(num1, num2) << std::endl;


//problem 17
// int add(int a, int b) {
//     return a + b;
// }
// int multiply(int a, int b) {
//     return a * b;
// }
// void calculate(int (*op)(int, int), int x, int y) {
//     std::cout << "Result: " << op(x, y) << std::endl;
// }
// int main() {
//     int num1 = 10;
//     int num2 = 2;
//     calculate(add, num1, num2);
//     calculate(multiply, num1, num2);


//problem 18
// int add(int a, int b) {
//     return a + b;
// }
// int multiply(int a, int b) {
//     return a * b;
// }
// int main() {
//     int (*ops[])(int, int) = {add, multiply};
//     int choice;
//     int num1 = 3;
//     int num2 = 5;
//     std::cout << "Select an operation:" << std::endl;
//     std::cout << "1. Add" << std::endl;
//     std::cout << "2. Multiply" << std::endl;
//     std::cin >> choice;
//     if (choice == 1) {
//         std::cout << "Result: " << ops[0](num1, num2) << std::endl;
//     } else if (choice == 2) {
//         std::cout << "Result: " << ops[1](num1, num2) << std::endl;
//     } else {
//         std::cout << "Invalid choice." << std::endl;
//     }
    return 0;
}
