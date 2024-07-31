/// Algorithm: Linear Search
/// Code written date: 27 July, 2024
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

void linear_search(int *A, unsigned int length_A, int x) {

    bool found = false;

    for (unsigned int i = 1; i < length_A; i++) {

        if (A[i-1] == x) {
            
            printf("%d", i-1);
            found = true;
            break;
        }

        else
            continue;

    }

    if (found == false)

        printf("NIL");


}


int main() {


    int A[] = {1, 3, 0, 5, 9};
    int x;

    scanf("%d", &x);

    unsigned int length_A = sizeof(A) / sizeof(A[0]);

    linear_search(A, length_A, x);

    return 0;
}
