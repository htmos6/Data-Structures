#include "main5.h"

int find_number(int array [], int find_nm, int max, int min) {
    int id;
    int mid;

    id = (min+max)/2;
    mid = array[id];
    if (min > max) {
        return -1;
    }
    if (mid == find_nm) {
        return id;
    }
    else if (find_nm < mid) {
        return find_number(array, find_nm, id-1, min);
    }
    else if (find_nm > mid) {
        return find_number(array, find_nm, max, id+1);
    }
}

int main() {
    int arr[] = {5, 8, 9, 12, 13, 14, 19, 23, 24, 26, 29, 31, 34, 56, 57, 67, 76, 77};
    int max = sizeof (arr) / sizeof(int);
    int searched_num;
    cout << "Enter Number to Search: ";
    cin >> searched_num;

    // cout << "Id: " << binary_search(arr, searched_num, max-1, 0) << endl;
    cout << "Id: " << find_number(arr, searched_num, max-1, 0) << endl;
    // Binary Search Algortihm is applied.
    // If number is found, it returns its position at the array.
    // Otherwise, it returns -1
    return 0;
}
