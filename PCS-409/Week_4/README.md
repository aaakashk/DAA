### [March, 30](/PCS-409/Week_4/)

#### [Merge Sort](/PCS-409/Week_4/merge_sort.cpp)

1. Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array of elements by dividing the array into two subarrays and combining these subarrays after sorting each one of them. Your program should also find number of comparisons and inversions during sorting the array.

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
    Third line will give total number of inversions required.</br>

    **Sample I/O** (Problem - 1):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 8</br>23 65 21 76 46 89 45 32 | 21 23 32 45 46 65 76 89</br>comparisons = 16</br>inversions =  |
    | 10</br>54 65 34 76 78 97 46 32 51 21 | 21 32 34 46 51 54 65 76 78 97</br>comparisons = 22</br>inversions = |
    | 15</br>63 42 223 645 652 31 324 22 553 12 54 65 86 46 325 | 12 22 31 42 46 54 63 65 86 223 324 325 553 645 652</br>comparisons = 43</br>inversions = |

#### [Quick Sort](/PCS-409/Week_4/quick_sort.cpp)

2. Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array of elements by partitioning the array into two subarrays based on a pivot element such that one of the sub array holds values smaller than the pivot element while another subarray holds values greater than the pivot element. Pivot element should be selected randomly from the array. Your program should also find number of comparisons and swaps required for sorting the array.

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

    **Sample I/O** (Problem - 2):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 8</br>23 65 21 76 46 89 45 32 | 21 23 32 45 46 65 76 89</br>comparisons = 16</br>swaps = 10 |
    | 10</br>54 65 34 76 78 97 46 32 51 21 | 21 32 34 46 51 54 65 76 78 97</br>comparisons = 22</br>swaps = 21 |
    | 15</br>63 42 223 645 652 31 324 22 553 12 54 65 86 46 325 | 12 22 31 42 46 54 63 65 86 223 324 325 553 645 652</br>comparisons = 43</br>swaps = 39 |

#### [Kth Smallest or Largest](/PCS-409/Week_4/Kth.cpp)

3. Given an unsorted array of integers, design an algorithm and implement it using a program to find Kth smallest or largest element in the array. (Time Complexity = O(n))

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be three input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>
    Third line contains K.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case, output will be the Kth smallest or largest array element.</br>
    If no Kth element is present, output should be "not present".</br>

    **Sample I/O** (Problem - 3):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 2          |             |
    | 10</br>123 656 54 765 344 514 765 34 765 234</br>3 | 123 |
    | 15</br>43 64 13 78 864 346 786 456 21 19 8 434 76 270 601</br>8 | 78 |

---