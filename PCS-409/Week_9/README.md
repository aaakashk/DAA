### [May, 25](../Week_9/)

#### [Floyd-Warshall Algorithm](floydwarshall.cpp)

1. Given a graph, implement Floyd-Warshall All Pair Shortest Path Algorithm.

    **Input Format:**<br>
    The first line of input takes number of vertices in the graph.<br>
    Input will be the graph in the form of adjacency matrix or adjacency list. If a direct edge is not present between any pair of vertex(u, v), then this entry is shown as AdjM[u, v] = INF.<br>

    **Output Format:**<br>
    Output will be shortest distance matrix in the form of V x V matrix, where each entry (u, v) represents shortest distance between vertex u and vertex v.<br>

    **Sample I/O Problem I:**<br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 5<br>0 10 5 5 INF<br>INF 0 5 5 5<br>INF INF 0 INF 10<br>INF INF INF 0 20<br>INF INF INF 5 0 | Shortest Distance Matrix:<br>0 10 15 5 15<br>INF 0 5 5 5<br>INF INF 0 15 10<br>INF INF INF 0 20<br>INF INF INF 5 0 |

#### [Fractional Knapsack](fractional_knapsack.cpp)

2. Given a knapsack of maximum capacity w. N items are provided, each having its own value and weight. You have to design an algorithm and implement it using a program to find the list of the selected items such that the final selected content has weight w and has maximum value. You can take fractions of items, i.e., the items can be broken into smaller pieces so that you have to carry only a fraction x<sub>i</sub> of item i, where 0 &#8804; x<sub>i</sub> &#8804; 1.

    **Input Format:**<br>
    First input line will take number of items N which are provided.<br>
    Second input line will contain N space-separated array containing weights of all N items.<br>
    Third input line will contain N space-separated array containing values of all N items.<br>
    Last line of the input will take the maximum capacity w of knapsack.<br>

    **Output Format:**<br>
    First output line will give maximum value that can be achieved.<br>
    Next line of output will give list of items selected along with their fraction of amount which has been taken.<br>

    **Sample I/O Problem II:**<br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 6<br>6 10 3 5 1 3<br>6 2 1 8 3 5<br>16 | Maximum value: 22.33<br>Item - weight<br>5 - 1<br>6 - 3<br>4 - 5<br>1 - 6<br>3 - 1 |

#### [Merge Files with Minimum Computatio Cost](min_comp.cpp)

3. Given an array of elements. Assume arr[i] represents the size of file i. Write an algorithm and a program to merge all these files into single file with minimum computation. For given two files A and B with sizes m and n, computation cost of merging them is O(m + n). (Hint: greedy approach)

    **Input Format:**<br>
    First line will take the size n of the array.<br>
    Second line will take array s as input.<br>

    **Output Format:**<br>
    Output will be the minimum computation cost required to merge all the elements of the array.<br>

    **Sample I/O Problem III:**<br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 10<br>10 5 100 50 20 15 5 20 100 10 | 960 |

---