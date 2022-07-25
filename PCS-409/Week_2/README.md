### March, 9

#### Duplicate

1. Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))</br>

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be three input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>
    Third line contains the key element that needs to be searched in the array.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case T, output will be the key element  and its number of copies in the array if the key element is present otherwise print "**Key not present**".</br>

    **Sample I/O** (Problem - 1):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 2          |             |
    | 10</br>235 235 278 278 763 764 790 853 981 981</br>981 | 981 2 |
    | 15</br>1 2 2 3 3 5 5 5 25 75 75 75 97 97 97</br>75 | 75 3 |

#### Sum

2. Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].</br>

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be two input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case T, print the values of i, j and k, if found else print "**No sequence found**".</br>

    **Sample I/O** (Problem - 2):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 5</br>1 5 84 209 341 | No sequence found. |
    | 10</br>24 28 48 71 86 89 92 120 194 201 | 2, 7, 8 |
    | 15</br>64 69 82 95 99 107 113 141 171 350 369 400 511 590 666 | 1, 6, 9|

#### Difference

3. Given an array of non-negative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.</br>

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be three input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>
    Third line contains the key element.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case T, output will be the total count, i.e., number of times such pair exists.</br>

    **Sample I/O** (Problem - 3):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    |2           |             |
    | 5</br>1 51 84 21 31</br>20 | 2 |
    | 10</br>24 71 16 92 12 28 48 14 20 22</br>4 | 4 |

---