#include <iostream>

int majority_element_candidate(const int* array, const int& n) {
    int majority_index = 0, count = 1;
    for (int i = 1; i < n; i++) {
        if (array[i] == array[majority_index])
            count++;
        else
            count--;
        if (count == 0) {
            majority_index = i;
            count = 1;
        }
    }
    return array[majority_index];
}

bool is_majority(const int* array, const int& n, const int& candidate) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (array[i] == candidate) count++;
    return count > n / 2;
}
/* Moore's Voting Algorithm gives the majority element in O(n) time.
 *this algorithm works without sorting the array.*/
int main() {
    int n;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) std::cin >> array[i];
    int candidate = majority_element_candidate(array, n);
    is_majority(array, n, candidate) ? std::cout << "yes\n" : std::cout << "no\n";
    return 0;
}