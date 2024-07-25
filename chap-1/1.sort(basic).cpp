#include<iostream>

void sort_basic(unsigned int *input, unsigned int size) {

    for (unsigned int i = 0; i < size; i++)

        for (unsigned int j = i+1; j < size; j++)

            if (input[i] > input [j]) {

                unsigned int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }


}


int main(){

    unsigned int arr[6] = {31, 41, 59, 26, 41, 58};
    unsigned int size = sizeof(arr) / sizeof(arr[0]);

    sort_basic(arr, size);


    for (unsigned int i = 0; i < size; i++)

        std::printf("%d ", arr[i]);



    return 0;


}