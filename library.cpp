#include <iomanip>
#include <iostream>
#include <climits>
#include <vector>
#include <cstdlib>
#include <ctime>
   using namespace std ;
//problem 1
//  int main() {
// int n;
// std::cout << "Enter the number of integers (n): ";
// std::cin >> n;
//      if (n <= 0) {
//     std::cout << "Please enter a positive integer for n." << std::endl;
//     return 1;
// }
//      int numbers[n];
//      std::cout << "Enter " << n << " integers:" << std::endl;
// for (int i = 0; i < n; ++i) {
//     std::cin >> numbers[i];
// }
// int sum = 0;
// for (int i = 0; i < n; ++i) {
//     sum += numbers[i];
// }
//      std::cout << "The sum of the integers is: " << sum << std::endl;


//problem 2
     // double calculateAverage(int arr[], int size) {
     //     if (size <= 0) {
     //         return 0.0;
     //     }
     //     double sum = 0.0;
     //     for (int i = 0; i < size; ++i) {
     //         sum += arr[i];
     //     }
     //     return sum / size;
     // }
     //   int main() {
     //     int n;
     //     std::cout << "Enter the size of the array (n): ";
     //     std::cin >> n;
     //     if (n <= 0) {
     //         std::cout << "Invalid array size." << std::endl;
     //         return 1;
     //     }
     //     int arr[n];
     //     std::cout << "Enter the elements of the array:" << std::endl;
     //     for (int i = 0; i < n; ++i) {
     //         std::cin >> arr[i];
     //     }
     //     double average = calculateAverage(arr, n);
     //     std::cout << "The average of the array elements is: " << average << std::endl;



//problem 3
// int findMinimum(int arr[], int size) {
//     if (size <= 0) {
//         return INT_MAX;
//     }
//     int minElement = arr[0];
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] < minElement) {
//             minElement = arr[i];
//         }
//     }
//     return minElement;
// }
// int main() {
//     int n;
//     std::cout << "Enter the size of the array (n): ";
//     std::cin >> n;
//     if (n <= 0) {
//         std::cout << "Invalid array size." << std::endl;
//         return 1;
//     }
//     int arr[n];
//     std::cout << "Enter the elements of the array:" << std::endl;
//     for (int i = 0; i < n; ++i) {
//         std::cin >> arr[i];
//     }
//     int minimum = findMinimum(arr, n);
//     std::cout << "The minimum element is: " << minimum << std::endl;


//problem 4
// int indexOfLargestElement(double array[], int size) {
//     if (size <= 0) {
//         return -1;
//     }
//     int largestIndex = 0;
//     for (int i = 1; i < size; ++i) {
//         if (array[i] >= array[largestIndex]) {
//             largestIndex = i;
//         }
//     }
//     return largestIndex;
// }
// int main() {
//     const int SIZE = 15;
//     double numbers[SIZE];
//     std::cout << "Enter 15 numbers:" << std::endl;
//     for (int i = 0; i < SIZE; ++i) {
//         std::cin >> numbers[i];
//     }
//     int largestIndex = indexOfLargestElement(numbers, SIZE);
//     std::cout << "The index of the largest element is: " << largestIndex << std::endl;



//problem 5
// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     if (size <= 0) {
//         return false;
//     }
//     for (int i = 0; i < size; ++i) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int size;
//     std::cout << "Enter the size of the lists: ";
//     std::cin >> size;
//     if (size <= 0) {
//         std::cout << "Invalid size." << std::endl;
//         return 1;
//     }
//     int list1[size];
//     int list2[size];
//     std::cout << "Enter elements for list1:" << std::endl;
//     for (int i = 0; i < size; ++i) {
//         std::cin >> list1[i];
//     }
//     std::cout << "Enter elements for list2:" << std::endl;
//     for (int i = 0; i < size; ++i) {
//         std::cin >> list2[i];
//     }
//     if (strictlyEqual(list1, list2, size)) {
//         std::cout << "The lists are strictly identical." << std::endl;
//     } else {
//         std::cout << "The lists are not strictly identical." << std::endl;
//     }




//problem 6
// int main() {
// int frequencies[26] = {0};
//     char ch;
// std::cout << "Enter a sequence of characters (enter '0' to terminate):" << std::endl;
//     while (true) {
//     std::cin.get(ch);
//         if (ch == '0') {
//         break;
//     }
//         if (ch >= 'a' && ch <= 'z') {
//         frequencies[ch - 'a']++;
//     }
// }
//     std::cout << "\nLetter frequencies:" << std::endl;
// for (int i = 0; i < 26; ++i) {
//     if (frequencies[i] > 0) {
//         std::cout << static_cast<char>('a' + i) << ": " << frequencies[i] << std::endl;
//     }
// }



//problem 7
    // int main() {
    // int n;
    // std::cout << "Enter the number of integers: ";
    // std::cin >> n;
    //     if (n <= 0) {
    //     std::cout << "Invalid number of integers." << std::endl;
    //     return 1;
    // }
    //     std::vector<int> numbers(n);
    //     std::cout << "Enter the integers:" << std::endl;
    // for (int i = 0; i < n; ++i) {
    //     std::cin >> numbers[i];
    // }
    //     std::sort(numbers.begin(), numbers.end());
    //     std::cout << "Sorted integers:" << std::endl;
    // for (int num : numbers) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;



//problem 8
// int main() {
//     const int rolls = 10000;
//     int counts[6] = {0};
//     int dieRolls[rolls];
//     srand(static_cast<unsigned int>(time(0)));
//     for (int i = 0; i < rolls; ++i) {
//         int roll = rand() % 6 + 1;
//         dieRolls[i] = roll;
//         counts[roll - 1]++;
//     }
//     std::cout << "Die roll counts (10000 rolls):" << std::endl;
//     for (int i = 0; i < 6; ++i) {
//         std::cout << "Face " << i + 1 << ": " << counts[i] << " times" << std::endl;
//     }



//problem 9
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main() {
//     int myArray[] = {1, 2, 3, 4, 5};
//     int size = sizeof(myArray) / sizeof(myArray[0]);
//     std::cout << "Original array: ";
//     for (int i = 0; i < size; ++i) {
//         std::cout << myArray[i] << " ";
//     }
//     std::cout << std::endl;
//     reverseArray(myArray, 0, size - 1);
//     std::cout << "Reversed array: ";
//     for (int i = 0; i < size; ++i) {
//         std::cout << myArray[i] << " ";
//     }
//     std::cout << std::endl;
//     int subArray[] = {10, 20, 30, 40, 50};
//     int subSize = sizeof(subArray) / sizeof(subArray[0]);
//     std::cout << "Original sub-array: ";
//     for (int i = 0; i < subSize; ++i) {
//         std::cout << subArray[i] << " ";
//     }
//     std::cout << std::endl;
//     reverseArray(subArray, 1, 3);
//     std::cout << "Reversed sub-array: ";
//     for (int i = 0; i < subSize; ++i) {
//         std::cout << subArray[i] << " ";
//     }
//     std::cout << std::endl;


//problem 10
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    bool sorted = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }








     return 0;
}