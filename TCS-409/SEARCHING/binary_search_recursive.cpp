#include <iostream>

int binary_search(int array[], int lower_bound, int upper_bound, int key) {
    if (lower_bound <= upper_bound) {
        int mid = lower_bound + (upper_bound - lower_bound) / 2;
        if (array[mid] == key)
            return mid;
        if (key > array[mid])
            return binary_search(array, mid + 1, upper_bound, key);
        return binary_search(array, lower_bound, mid - 1, key);
    }
    return -1;
}

int main() {
    int n;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        array[i] = element;
    }
    int key;
    std::cin >> key;
    int result = binary_search(array, 0, n - 1, key);
    if (result == -1)
        std::cout << "number not present\n";
    else
        std::cout << result;

    return 0;
}