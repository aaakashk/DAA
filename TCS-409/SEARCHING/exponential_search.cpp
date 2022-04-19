#include <iostream>

int min(int a, int b) { return a > b ? b : a; }

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

int exponential_search(int array[], int size, int key) {
    if (array[0] == key) return 0;
    int i = 1;
    while (i < size && array[i] < key) {
        i *= 2;
    }
    return binary_search(array, i / 2, min(i, size - 1), key);
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int no_of_elements;
        std::cin >> no_of_elements;
        int array[no_of_elements];
        for (int j = 0; j < no_of_elements; j++) std::cin >> array[j];
        int key;
        std::cin >> key;
        int index = exponential_search(array, no_of_elements, key);
        if (index == -1)
            std::cout << "Not Present";
        else
            std::cout << index;
        std::cout << "\n";
    }
    return 0;
}