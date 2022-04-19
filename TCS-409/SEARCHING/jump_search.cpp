#include <cmath>
#include <iostream>

int linear_search(int array[], int startIndex, int size, int key) {
    for (int i = startIndex; i < size; i++) {
        if (array[i] == key) return i;
    }
    return -1;
}

int jump_search(int array[], int size, int key) {
    int step = std::sqrt(size);
    int i = 0;
    while (i < size && array[i] < key) {
        i += step;
    }
    return linear_search(array, i - step, size, key);
}

int main() {
    int n;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) std::cin >> array[i];
    int key;
    std::cin >> key;
    int index = jump_search(array, n, key);
    std::cout << index << "\n";

    return 0;
}