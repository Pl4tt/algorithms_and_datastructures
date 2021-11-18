void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int l = (low - 1);

    for (int pos = low; pos < high; pos++) {
        if (arr[pos] <= pivot) {
            l++;
            swap(&arr[l], &arr[pos]);
        }
    }

    swap(&arr[l+1], &arr[high]);
    
    return (l + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quicksort(arr, low, pivot-1);
        quicksort(arr, pivot+1, high);
    }
}


