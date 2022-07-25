### March, 2

#### Linear Search

1. Given an array of non-negative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input).

    **Sample I/O** (Problem - 1):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 8</br>34 35 65 31 25 89 64 30</br>89 | Present 6 |
    | 5</br>977 354 244 546 355</br>244 | Present 3 |
    | 6</br>23 64 13 67 43 56</br>63 | Not Present 6 |

#### Binary Search

2. Given an already sorted array of positve integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find the total number of comparisons for each input case. (Time Complexity = O(log(n)), where n is the size of input).

#### Jump Search

3. Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],... ..., arr[2<sup>k</sup>] and so on. Once the interval (arr[2<sup>k</sup>] < key < arr[2<sup>k+1</sup>]) is found, perform a linear search operation from the index 2<sup>k</sup> to find the element key. (Time Complexity < O(n), where n is the number of elements need to be scanned for searching).

    **Input Format:**

    The first line contains number of test cases, T.</br>
    For each test case, there will be three input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains n space-separated integers describing array.</br>
    Third line contains the key element that need to be searched in the array.

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case, output will be "**Present**" if the key element is found in the array, otherwise "**Not Present**".</br>
    Also, for each test case, output the number of comparisons required to search the key.</br>

    **Sample I/O** (Problem - 2, 3):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             | 
    | 5</br>12 23 36 39 41</br>41 | Present 3 |
    | 8</br>21 39 40 45 51 54 68 72</br>69 | Not Present 4 |
    | 10</br>101 246 438 561 796 896 899 4644 7999 8545</br>7999 | Present 3 |

---
