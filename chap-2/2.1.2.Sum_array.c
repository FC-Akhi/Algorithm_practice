/// Algorithm: Sum array
/// Code written date: 26 July, 2024
/// Pseudocode:
/// SUM-ARRAY (A,n)
/// 1 sum = 0
/// 2 for i = 1 to n
/// 3   sum = sum + A[i]
/// 4 return sum

/// Exercise: 2.1.2: State a Loop invariant for above procedure and use initialization, maintenance and termination properties to show that the SUM-ARRAY
/// procedure returns the sum of the numbers in A[1:n]


#include<stdio.h>

int sum_array(int *A, unsigned int length_A) {

    int sum = 0;

    for (unsigned int i = 0; i < length_A; i++) {

        sum = sum + A[i];

    }


    return sum;

}



int main() {

    int A[] = {1, 2, 3, 4, 5};

    unsigned int length_A = sizeof(A) / sizeof(A[0]);

    int sum = sum_array(A, length_A);

    printf("Sum: %d\n", sum);

    return 0;

}