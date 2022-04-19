#include <iostream>
#include <string>
using namespace std;

void merge(string array[], const int low, const int mid, const int high) {
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    string leftArray[n1];
    string rightArray[n2];

    for (i = 0; i < n1; i++)
        leftArray[i] = array[low + i];

    for (j = 0; j < n2; j++)
        rightArray[j] = array[mid + 1 + j];

    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k++] = leftArray[i++];
        } else
            array[k++] = rightArray[j++];
        // comparisons++;
    }

    while (i < n1) {
        array[k++] = leftArray[i++];
    }

    while (j < n2) {
        array[k++] = rightArray[j++];
    }
}

void merge_sort(string array[], const int low, const int high) {
    if (low >= high) return;

    int mid = low + (high - low) / 2;
    merge_sort(array, low, mid);
    merge_sort(array, mid + 1, high);
    merge(array, low, mid, high);
}

int main() {
    string s[200], x[200], ct, dt;
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }

    merge_sort(s, 0, n - 1);
    cout << "Sorted Name in Dictionary Order" << endl;
    for (i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
    return 0;
}
