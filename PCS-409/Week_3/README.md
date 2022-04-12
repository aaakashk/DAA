### March, 23

#### Insertion Sort

1. Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts (shifts - total number of times the array elements are shifted from their place), required for sorting the array.</br>

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be two input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case T, there will be three output lines.</br>
    First line will give the sorted array.</br>
    Second line will give total number of comparisons.</br>
    Third line will give total number of shift operations required.</br>

    **Sample I/O** (Problem - 1):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 8</br>-23 65 -31 76 46 89 45 32 | -31 -23 32 45 46 65 76 89</br>comparisons = 20</br>shifts = 13 |
    | 10</br>54 65 34 76 78 97 46 32 51 21 | 21 32 34 46 51 54 65 76 78 97</br>comparisons = 37</br>shifts = 28 |
    | 15</br>63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325 | -12 22 31 42 46 54 63 65 86 223 324 325 553 645 652</br>comparisons = 68</br>shifts = 54 |

#### Selection Sort

2. Given an unsorted array of integers, design an algorithm and implement a program to sort this array using selection sort. Your program should also find number of comparisions and number of swaps required.

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be two input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case T, there will be three output lines.</br>
    First line will give the sorted array.</br>
    Second line will give total number of comparisons.</br>
    Third line will give total number of swaps required.</br>

    **Sample I/O** (Problem - 1):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 8</br>-23 65 -31 76 46 89 45 32 | -31 -23 32 45 46 65 76 89</br>comparisons = 28</br>swaps = 7 |
    | 10</br>54 65 34 76 78 97 46 32 51 21 | 21 32 34 46 51 54 65 76 78 97</br>comparisons = 45</br>swaps = 9 |
    | 15</br>63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325 | -12 22 31 42 46 54 63 65 86 223 324 325 553 645 652</br>comparisons = 105</br>swaps = 14 |

#### Sort and Find Duplicate

3. Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log(n)))

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be two input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case T, output will be 'YES' if duplicates are present otherwise 'NO'.

    **Sample I/O** (Problem - 3):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 5</br>28 52 83 14 75 | NO |
    | 10</br>75 65 1 65 2 6 86 2 75 8 | YES |
    | 15</br>75 35 86 57 98 23 73 1 64 8 11 90 61 19 20 | NO |

---