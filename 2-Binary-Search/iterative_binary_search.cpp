#include "main5.h"
int binary_search(int array [], int find_nm, int max, int min) {
    int id;
    int mid_val;

    while (min <= max) {
        id = (min + max) / 2;
        mid_val = array[id];
        if (mid_val == find_nm) {
            return id;
        }
        else if (mid_val > find_nm) {
            max = id-1;
        }
        else {
            min = id + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 8, 9, 12, 13, 14, 19, 23, 24, 26, 29, 31, 34, 56, 57, 67, 76, 77};
    int max = sizeof (arr) / sizeof(int);
    int searched_num;
    cout << "Enter Number to Search: ";
    cin >> searched_num;

    cout << "Id: " << binary_search(arr, searched_num, max-1, 0) << endl;
    // Binary Search Algortihm is applied.
    // If number is found, it returns its position at the array.
    // Otherwise, it returns -1
    return 0;
}
