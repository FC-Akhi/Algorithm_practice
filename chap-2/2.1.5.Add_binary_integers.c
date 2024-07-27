/// Algorithm: Add_binary_integers
/// Code written date: 27 July, 2024


#include<stdio.h>

void add_binary_integers(int *A, int *B, int *C, unsigned int length_A) {

    unsigned int carry = 0;

    printf("Input Array A: ");
    for (unsigned int k = 0; k < length_A; k++) {

        printf("%d", A[k]);

    }

    printf("\n");


    printf("Input Array B: ");
    for (unsigned int k = 0; k < length_A; k++) {

        printf("%d", B[k]);

    }

    printf("\n");



    for (int i = (length_A - 1); i >= 0; i--){
        printf("I AM HIT: %d\n", i);
        if (A[i] == 0 && B[i] == 0){

            if (carry == 0)

                C[i+1] = 0;

            else {

                C[i+1] = 1;
                carry = 0;

            }


        }

        else if ((A[i] == 0 && B[i] == 1) || (A[i] == 1 && B[i] == 0)){

            if (carry == 0)

                C[i+1] = 1;

            else {

                C[i+1] = 0;
                carry = 1;

            }

        }

        else if (A[i] == 1 && B[i] == 1){

            if (carry == 0) {

                C[i+1] = 0;
                carry = 1;

            }

            else {

                C[i+1] = 1;
                carry = 1;

            }

        }

    }

    C[0] = carry;

    /// Print the binary sum
    for (unsigned int k = 0; k < length_A + 1; k++) {

        printf("%d", C[k]);

    }
    printf("\n");

}


int main() {

    int A[] = {1, 0, 1, 0, 0, 1, 1};
    int B[] = {1, 0, 0, 1, 1, 1, 1};

    unsigned int length_A = sizeof(A) / sizeof(A[0]);

    int C[length_A + 1];

    add_binary_integers(A, B, C, length_A);


    return 0;
}