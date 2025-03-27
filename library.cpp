#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <sstream>
   using namespace std ;
//problem 1
// int main() {
//    std::vector<std::vector<int> > matrix = {
//       {23, 123, 456}
//    };
//    int sum = 0;
//    for (size_t i = 0; i < matrix.size(); ++i) {
//       for (size_t j = 0; j < matrix[i].size(); ++j) {
//          sum += matrix[i][j];
//       }
//    }
//    std::cout << "Sum: " << sum << std::endl;


//problem 2
// int main() {
//    int matrix[2][3] = {
//       {23, 352, 964},
//       {59, 12, 88}
//    };int rows = 2;
//    int cols = 3;
//    for (int i = 0; i < rows; ++i) {
//       int max_in_row = INT_MIN;
//       for (int j = 0; j < cols; ++j) {
//          if (matrix[i][j] > max_in_row) {
//             max_in_row = matrix[i][j];
//          }
//       }
//       std::cout << "Maximum in row " << i + 1 << ": " << max_in_row << std::endl;
//    }



//problem 3
// int main() {
//    int matrix[3][4] = {
//       {1, 2, 3, 4},
//       {5, 6, 7, 8},
//       {9, 10, 11, 12}
//    };
//    int rows = 3;
//    int cols = 4;
//    for (int j = 0; j < cols; ++j) {
//       int col_sum = 0;
//       for (int i = 0; i < rows; ++i) {
//          col_sum += matrix[i][j];
//       }
//       std::cout << "Sum of column " << j + 1 << ": " << col_sum << std::endl;
//    }



//problem 4
// int main() {
//    int matrix[3][3] = {
//       {1, 2, 3},
//       {4, 5, 6},
//       {7, 8, 9}
//    };
//    int size = 3;
//    int diagonal_sum = 0;
//    for (int i = 0; i < size; ++i) {
//       diagonal_sum += matrix[i][i];
//    }
//    std::cout << "Diagonal sum: " << diagonal_sum << std::endl;


//problem 5
// int main() {
//    int matrix[2][3] = {
//       {23, 123, 456},
//       {1, 4, 7}
//    };
//    int rows = 2;
//    int cols = 3;
//    int transposed[cols][rows];
//    for (int i = 0; i < rows; ++i) {
//       for (int j = 0; j < cols; ++j) {
//          transposed[j][i] = matrix[i][j];
//       }
//    }
//    std::cout << "Transposed Matrix:" << std::endl;
//    for (int i = 0; i < cols; ++i) {
//       for (int j = 0; j < rows; ++j) {
//          std::cout << transposed[i][j] << " ";
//       }
//       std::cout << std::endl;
//    }


//problem 6
// void matrixMultiply(int A[], int B[], int C[], int m, int n, int p) {
//    for (int i = 0; i < m; ++i) {
//       for (int j = 0; j < p; ++j) {
//          C[i * p + j] = 0;
//          for (int k = 0; k < n; ++k) {
//             C[i * p + j] += A[i * n + k] * B[k * p + j];
//          }
//       }
//    }
// }
// void printMatrix(int matrix[], int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//       for (int j = 0; j < cols; ++j) {
//          std::cout << matrix[i * cols + j] << " ";
//       }
//       std::cout << std::endl;
//    }
// }
//
// int main() {
//    int A[] = {1, 2, 3, 4, 5, 6}; // 2x3 matrix
//    int B[] = {7, 8, 9, 10, 11, 12}; // 3x2 matrix
//    int C[4]; // Result matrix (2x2)
//
//    int m = 2, n = 3, p = 2;
//
//    matrixMultiply(A, B, C, m, n, p);
//
//    std::cout << "Result Matrix C:" << std::endl;
//    printMatrix(C, m, p);


//problem 7
// void rotateMatrix(int matrix[][100], int n) {
//    for (int i = 0; i < n; ++i) {
//       for (int j = i + 1; j < n; ++j) {
//          int temp = matrix[i][j];
//          matrix[i][j] = matrix[j][i];
//          matrix[j][i] = temp;
//       }
//    }
//    for (int i = 0; i < n; ++i) {
//       for (int j = 0; j < n / 2; ++j) {
//          int temp = matrix[i][j];
//          matrix[i][j] = matrix[i][n - 1 - j];
//          matrix[i][n - 1 - j] = temp;
//       }
//    }
// }
// int main() {
//    int matrix[100][100] = {
//       {1, 2, 3},
//       {4, 5, 6},
//       {7, 8, 9}
//    };
//    int n = 3;
//    rotateMatrix(matrix, n);
//    std::cout << "Rotated Matrix:" << std::endl;
//    for (int i = 0; i < n; ++i) {
//       for (int j = 0; j < n; ++j) {
//          std::cout << matrix[i][j] << " ";
//       }
//       std::cout << std::endl;
//    }



//problem1
// int main() {
//    std::string s;
//    std::getline(std::cin, s);
//    int vowelCount = 0;
//    int consonantCount = 0;
//    for (char c : s) {
//       if (c >= 'a' && c <= 'z') {
//          if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//             vowelCount++;
//          } else {
//             consonantCount++;
//          }
//       }
//    }
//    std::cout << vowelCount << std::endl;
//    std::cout << consonantCount << std::endl;



//problem2
 // int main() {
 //   std::string s;
 //   std::cin >> s;
 //   std::string reversed_s = "";
 //   for (int i = s.length() - 1; i >= 0; --i) {

 //      reversed_s += s[i];
 //   }
 //   std::cout << reversed_s << std::endl;


//problem 3
// bool isPalindrome(std::string str) {
//     int left = 0;
//     int right = str.length() - 1;
//     while (left < right) {
//         if (str[left] != str[right]) {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }
// int main() {
//     std::string str1 = "madam";
//     std::string str2 = "hello";
//     std::cout << (isPalindrome(str1) ? "true" : "false") << std::endl;
//     std::cout << (isPalindrome(str2) ? "true" : "false") << std::endl;


//problem 4
// char mostFrequentChar(std::string str) {
//     int charCounts[256] = {0};
//     for (char c : str) {
//         charCounts[static_cast<int>(c)]++;
//     }
//     char mostFrequent = '\0';
//     int maxCount = 0;
//     for (int i = 0; i < 256; ++i) {
//         if (charCounts[i] > maxCount) {
//             maxCount = charCounts[i];
//             mostFrequent = static_cast<char>(i);
//         }
//     }
//     return mostFrequent;
// }
// int main() {
//     std::string str1 = "hello world";
//     std::string str2 = "abracadabra";
//     std::cout << mostFrequentChar(str1) << std::endl;
//     std::cout << mostFrequentChar(str2) << std::endl;



//problem5
// std::string removeDuplicates(const std::string& s) {
//     if (s.empty()) {
//         return "";
//     }
//     std::vector<bool> seen(256, false);
//     std::string result = "";
//     for (char c : s) {
//         int asciiVal = static_cast<int>(c);
//         if (!seen[asciiVal]) {
//             seen[asciiVal] = true;
//             result += c;
//         }
//     }
//     return result;
// }
// int main() {
//     std::string inputString = "programming";
//     std::string outputString = removeDuplicates(inputString);
//     std::cout << "Original string: " << inputString << std::endl;
//     std::cout << "String with duplicates removed: " << outputString << std::endl;



//problem 6
// std::string findLongestWord(const std::string& sentence) {
//     std::stringstream ss(sentence);
//     std::string word, longestWord;
//     while (ss >> word) {
//         if (word.length() > longestWord.length()) {
//             longestWord = word;
//         }
//     }
//     return longestWord;
// }
// int main() {
//     std::cout << findLongestWord("The quick brown fox jumps over the lazy dog") << std::endl;
//     std::cout << findLongestWord("This is a simple sentence") << std::endl;
//     std::cout << findLongestWord("") << std::endl;
//     std::cout << findLongestWord("a") << std::endl;
//     std::cout << findLongestWord("a very long word") << std::endl;



//problem7
bool areAnagrams(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    std::string s1 = str1;
    std::string s2 = str2;
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 == s2;
}
int main() {
    std::cout << (areAnagrams("listen", "silent") ? "Yes" : "No") << std::endl;
    std::cout << (areAnagrams("hello", "world") ? "Yes" : "No") << std::endl;
    std::cout << (areAnagrams("", "") ? "Yes" : "No") << std::endl;
    std::cout << (areAnagrams("a", "a") ? "Yes" : "No") << std::endl;
    std::cout << (areAnagrams("ab", "ba") ? "Yes" : "No") << std::endl;
    std::cout << (areAnagrams("abc", "abd") ? "Yes" : "No") << std::endl;
    return 0;
}

