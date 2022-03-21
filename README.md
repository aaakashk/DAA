# Design and Analysis of Algorithms

### PCS - 409

1. [March, 2](#march-2)
2. [March, 9](#march-9)

#### March, 2

1. Given an array of non-negative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input).

    **Sample I/O** (Problem - 1):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3</br>8</br>34 35 65 31 25 89 64 30</br>89</br>5</br>977 354 244 546 355</br>244</br>6</br>23 64 13 67 43 56</br>63 | Present 6</br>Present 3</br>Not Present 6 |

2. Given an already sorted array of positve integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find the total number of comparisons for each input case. (Time Complexity = O(nlog(n)), where n is the size of input).

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
    | 3</br>5</br>12 23 36 39 41</br>41</br>8</br>21 39 40 45 51 54 68 72</br>69</br>10</br>101 246 438 561 796 896 899 4644 7999 8545</br>7999 | Present 3</br>Not Present 4</br>Present 3 |

---

#### March, 9

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
    |2</br>10</br>235 235 278 278 763 764 790 853 981 981</br>981</br>15</br>1 2 2 3 3 5 5 5 25 75 75 75 97 97 97</br>75|981 2</br>75 3|

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
    |3</br>5</br>1 5 84 209 341</br>10</br>24 28 48 71 86 89 92 120 194 201</br>15</br>64 69 82 95 99 107 113 141 171 350 369 400 511 590 666| No sequence found.</br>2, 7, 8</br>1, 6, 9|

3. Given an array of non-negative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.</br>

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be three input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>
    Third line contains the key element.

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case T, output will be the total count, i.e., number of times such pair exists.</br>

    **Sample I/O** (Problem - 3):</br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    |2</br>5</br>1 51 84 21 31</br>20</br>10</br>24 71 16 92 12 28 48 14 20 22</br>4 | 2</br>4 |

    ---
    