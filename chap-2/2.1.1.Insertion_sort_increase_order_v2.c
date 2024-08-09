/// Algorithm: Insertion sort
/// Code written date: 9 Aug, 2024
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


/// Best pratices
/// 1. Use meaningful variable names
/// 2. Print array function
/// 3. Use size_t for array length: size_t is the standard type for sizes and should be preferred when working with array lengths.
/// 4. Details comments



#include<stdio.h>

/// @brief Print array
/// @param arr : Input array
/// @param arr_len : Length of array
void print_array(int *arr, size_t arr_len) {

    /// Iterate over array
    for (size_t k = 0; k < arr_len; k++) {

        printf("%d, ", arr[k]);

    }

    printf("\n");

}


/// @brief Insertion algorithm implementation
/// @param arr : Input array
/// @param arr_len : Length of array
void insertion_sort(int *arr, size_t arr_len) {
    
    /// Print array before sorting
    printf("Array before Sort: ");
    print_array(arr, arr_len);


    /// Insertion sort algorithm
    for (size_t i = 1; i < arr_len; i++) {

        int key = arr[i];

        int j = i - 1;

        /// Comparing the number from index A[j] which is one less then i/key.
        /// Gradually value of j will decrease untill it moves to -1
        /// If j hits -1 or the value of key is greater than the value of A[j] index, loop will break
        while(j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];

            j = j - 1;

        }

        arr[j + 1] = key;

        /// Print array after each sorting process
        printf("Key: %d\n", key);
        printf("Array After a Sort: ");
        
        print_array(arr, arr_len);

    }

}


/// @brief Main function, Entry point
/// @return 0
int main() {

    /// Static Array
    int arr[6] = {5, 2, 4, 6, 1, 3};

    /// Array size
    size_t arr_len = sizeof(arr)/sizeof(arr[0]);

    /// Insertion sort function call
    insertion_sort(arr, arr_len); 

    return 0;

}