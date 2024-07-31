/// Algorithm: Linear Search_v2
/// Code written date: 31 July, 2024
/// Details: Comments are added, Array taken from user
/// Pseudocode:
/// In pseudocode array A index number starts with 1 rather than 0 
/// LINEAR-SEARCH (A,x)
/// 1 for i = 1 to n
/// 2   if A[i] == x
/// 3       return i
/// 4   else
/// 5       continue


#include<stdio.h>
#include <stdbool.h>

/// @brief Linear search algorithm
/// @param A Array with data where we will search our number
/// @param length_A Length of input array
/// @param x Number we need to search
void linear_search(int *A, unsigned int length_A, int x) {
    bool found = false;

    /// Iterate over array elements until we find the number
    for (unsigned int i = 0; i < length_A; i++) {
        /// Condition to check if number x match with the number in index i
        if (A[i] == x) {
            printf("%d\n", i);
            found = true;
            break;
        }
    }

    /// If number is not found
    if (!found) {
        printf("NIL\n");
    }
}

int main() {
    int x;
    int size_A;

    

    /// Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size_A);

    int A[size_A];

    /// Input the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size_A; i++) {
        scanf("%d", &A[i]);
    }

    /// Input the number to search for
    printf("Enter the number to search: ");
    scanf("%d", &x);

    /// Call the linear search function
    linear_search(A, size_A, x);

    return 0;
}

/// Finding: Do not put any space after the format specifier in scanf, it will create issues while reading input