#include <stdio.h>
#include <stdbool.h>

#define LENGTH 68


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("end\n");
}

bool equal_arrays(int arr[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != arr2[i]) return false;
    }

    return true;
}


int sol[] = {-124714, -83148, -7285, -1247, -1235, -124, -100, -10, -2, 0, 1, 2, 2, 3, 7, 7, 9, 9, 10, 13, 16, 21, 23, 32, 63, 68, 87, 121, 125, 126, 135, 166, 216, 247, 261, 274, 389, 521, 532, 742, 852, 913, 942, 1235, 2162, 6216, 6543, 7317, 7327, 7654, 8421, 8539, 8765, 19361, 21261, 21561, 24171, 32732, 37272, 47421, 48245, 62161, 100000, 123456, 2157105, 21742174, 24151621, 987654321};
int arr[] = {21561, 9, -124714, 0, -1247, 24171, 21742174, 47421, -7285, 261, 2, 521, 10, 3, 216, 7, 6216, 2, 62161, 7, 68, 9, -83148, -1235, 1, -10, 166, 389, 13, 63, 19361, 32, 7317, 8539, 32732, 24151621, -2, 7327, 2157105, 1235, 852, 121, 21, -100, -124, 23, 742, 7654, 87, 123456, 6543, 21261, 48245, 16, 8765, 987654321, 247, 125, 8421, 942, 532, 913, 126, 274, 135, 100000, 2162, 37272};

