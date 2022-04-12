### April, 06

#### Count Sort

1. Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement it using a program to find which alphabet has maximum number of occurrences and print it. (Time Complexity = O(n))

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be two input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test case, output will be the array element which has maximum occurrences and its total number of occurrences.</br>
    If no duplicates are present (i.e. all the elements occur only once), output should be "No Duplicates Present".</br>

    **Sample I/O** (Problem - 1):
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 3          |             |
    | 10</br>a e d w a d q a f p | a - 3 |
    | 15</br>r k p g v y u m q a d j c z e | No Duplicates Present |
    | 20</br>g t l l t c w a w g l c w d s a a v c l | l - 4 |

#### Two Sum

2. Given an unsorted array of integers, design an algorithm and implement it using a program to find whether two elements exist such that their sum is equal to the given key element. (Time Complexity = O(n log (n))

    **Input Format:**</br>
    The first line contains number of test cases, T.</br>
    For each test case, there will be two input lines.</br>
    First line contains n (the size of array).</br>
    Second line contains space-separated integers describing array.</br>
    Third line contains key.</br>

    **Output Format:**</br>
    The output will have T number of lines.</br>
    For each test caase, output will be the elements arr[i] and arr[j] such that arr[i] + arr[j] = key if exist otherwise print "No Such Elements Exist".</br>

    **Sample I/O** (Problem - 2):
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 2          |             |
    | 10</br>64 28 97 40 12 72 84 24 38 10</br>50 | 10 40 |
    |15</br>56 10 72 91 29 3 41 45 61 20 11 39 9 12 94</br>302 | No Such Elements Exist |

#### Common Elements

3. You have been given two sorted integer arrays of size m and n. Design an algorithm and implement it using a program to find list of elements which are common to both. (Time Complexity = O(m + n))

    **Input Format:**</br>
    First line contains m (the size of first array).</br>
    Second line contains m space-separated integers describing first array.</br>
    Third line contains n (the size of second array).</br>
    Fourth line contains n space-separated integers describing second array.</br>

    **Output Format:**</br>
    Output will be the list of elements which are common to both.</br>

    **Sample I/O** (Problem - 3):
    | **Input:** | **Output:** |
    | :---       | :---        |
    | 7</br>34 76 10 39 85 10 55</br>12</br>30 55 34 72 10 34 10 89 11 30 69 51 | 10 10 34 55 |

**Note: Consider the following input format in the forom of adjacency matrix for graph based questions (directed/undirected/unweighted graph).**

**Input Format:** Consider example of below given graph in Figure (a).</br>
A boolean matrix AdjM of size V x V is defined to represent edges of the graph. Each edge of graph is represented by two vertices (start vertex u, end vertex v). That means, an edge from u to v is represented by making AdjM[u, v] and AdjM[v, u] = 1. If there is no edge between u and v then it is represented by making AdjM[u, v] = 0. Adjacency matrix representation of below given graph is shown in Figure(b). Hence edges are taken in the form of adjacency matrix from input. In case of weighted graph, an edge from u to v having weight w is represented by making AdjM[u, v] and AdjM[v, u] = w.</br>

Input format for this graph is shown in Figure (c).</br>
First input line will obtain number of vertices V present in graph.</br>
**After first line, V input lines are obtained. For each line i in V, it contains V space separated boolean integers representing whether an edge is present between i and all V.**</br>


![graph](/PCS-409/Week_5/pictures/picture.png "graph representation")

---