#include <iostream>
#define INFINITY 2100000000
#define NEG_INFINITY -2100000000
int main() {
    int n;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) std::cin >> array[i];
    int smallest1 = INFINITY, smallest2 = INFINITY, smallest3 = INFINITY;
    int largest1 = NEG_INFINITY, largest2 = NEG_INFINITY, largest3 = NEG_INFINITY;
    for (int i = 0; i < n; i++) {
        if (smallest1 > array[i]) {
            smallest3 = smallest2;
            smallest2 = smallest1;
            smallest1 = array[i];
        } else if (smallest2 > array[i]) {
            smallest3 = smallest2;
            smallest2 = array[i];
        } else if (smallest3 > array[i]) {
            smallest3 = array[i];
        }
        if (largest1 < array[i]) {
            largest3 = largest2;
            largest2 = largest1;
            largest1 = array[i];
        } else if (largest2 < array[i]) {
            largest3 = largest2;
            largest2 = array[i];
        } else if (largest3 < array[i])
            largest3 = array[i];
    }
    std::cout << smallest1 << " " << smallest2 << " " << smallest3 << "\n";
    std::cout << largest1 << " " << largest2 << " " << largest3 << "\n";
    return 0;
}