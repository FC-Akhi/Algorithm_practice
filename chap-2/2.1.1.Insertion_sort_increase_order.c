/// Algorithm: Insertion sort
/// Code written date: 25 July, 2024
/// Pseudocode:
/// In pseudocode array A index number starts with 1 rather than 0 
/// INSERTION-SORT (A,n)
/// 1 for i = 2 to n
/// 2   key = A[i]
/// 3   /// Insert A[i] into the sorted subarray A[1 : i-1].
/// 4   j = i - 1
/// 5   while j > 0 and A[j] > key 
/// 6       A[j + 1] = A[j]
/// 7       j = j - 1
/// 8   A[j + 1] = key



#include<stdio.h>

void insertion_sort(int *A, int length_A) {
    
    printf("Input Array A: ");
    for (unsigned int k = 0; k < length_A; k++) {

        printf("%d, ", A[k]);

    }

    printf("\n");

    /// Insertion sort algorithm
    for (unsigned int i = 1; i < length_A; i++) {

        int key = A[i];

        int j = i - 1;

        /// Comparing the number from index A[j] which is one less then i/key.
        /// Gradually value of j will decrease untill it moves to -1
        /// If j hits -1 or the value of key is greater than the value of A[j] index, loop will break
        while(j >= 0 && A[j] > key) {

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

    int A[6] = {5, 2, 4, 6, 1, 3};

    int length_A = sizeof(A)/sizeof(A[0]);

    /// Insertion sort function call
    insertion_sort(A, length_A); 



    return 0;
}