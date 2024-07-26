/// Algorithm: Insertion sort(decreasing order)
/// Code written date: 26 July, 2024
/// Pseudocode:
/// In pseudocode array A index number starts with 1 rather than 0 
/// INSERTION-SORT (A,n)
/// 1 for i = 2 to n
/// 2   key = A[i]
/// 3   /// Insert A[i] into the sorted subarray A[1 : i-1].
/// 4   j = i - 1
/// 5   while j > 0 and A[j] < key 
/// 6       A[j + 1] = A[j]
/// 7       j = j - 1
/// 8   A[j + 1] = key


#include<stdio.h>

void insertion_sort(int *A, unsigned int length_A) {

    printf("Input Array A: ");
    for (unsigned int k = 0; k < length_A; k++) {

        printf("%d, ", A[k]);

    }

    printf("\n");

    for (unsigned int i = 1; i < length_A; i++){

        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] < key) {

            A[j + 1] = A[j];
            j = j - 1;

        }

        A[j + 1] = key;

        printf("Key: %d| ", key);
        printf("A: ");
        for (unsigned int k = 0; k < length_A; k++) {

            printf("%d, ", A[k]);

        }
        printf("\n");


    }

}


int main() {

    int A[] = {5, 2, 4, 6, 1, 3};

    unsigned int length_A = sizeof(A) / sizeof(A[0]);

    insertion_sort(A, length_A);


    return 0;
}


