### [May, 11](/PCS-409/Week_7/)

**Note:** Input, output format along with sample i/o for problem 1 and 2 is same and is provided at the end of problem 2.

#### [Dijkstra's Algorithm](/PCS-409/Week_7/Dijkstras.cpp)

1. After end term examination, Akshay wants to party with his friends. All his friends are living as paying guest and it has been decided to first gather at Akshay's house and then move towards party location. The problem is that no one knows the exact address of his house in the city. Akshay as a computer science wizard knows how to apply his theory subjects in his real life and came up with an amazing idea to help his friends. He draws a graph by looking at the location of his house and his friends' locations (as a node in the graph) on a map. He wishes to find out the shortest distance and path covering that distance from each of his friends' locations to his house and then WhatsApp them this path so that they can reach his house in minimum time. Akshay has developed the program that implements Dijkstra's algorithm but not sure about correctness of results. Can you also implement the same algorithm and verify the correctness of Akshay's results? (Hint: Print shortest path and distance from friends' locations to Akshay's house)

#### [Bellman-Ford's Algorithm](/PCS-409/Week_7/bellmanFord.cpp)

2. Design an algorithm and implement it using a program to solve previous question's problem using Bellman-Ford's shortest path algorithm.

    **Input Format:**<br>
    Input will be the graph in the form of adjacency matrix or adjacency list.<br>
    Source vertex number is also provided as an input.<br>

    **Output Format:**<br>
    Output will contain V lines.<br>
    Each line will represent the whole path from destination vertex number to source vertex number along with minimum path weight.<br>

    **Sample I/O Probblem 1 and 2:**<br>
    | **Input:** | **Output:** |
    |:---        | :---        | 
    | 5<br>0 4 1 0 0<br>0 0 0 0 4<br>0 2 0 4 0<br>0 0 0 0 4<br>0 0 0 0 0<br>1 | 1 : 0<br>2 3 1 : 3<br>3 1 : 1<br>4 3 1 : 3<br>5 2 3 1 : 7 |

#### [Shortest Path with k Edges](/PCS-409/Week_7/shortest_k.cpp)

3. Given a directed graph with two vertices (source and destination). Design an algorithm and implement it using a program to find the weight of the shortest path from source and destination with exactly k edges on the path.

    **Input Format:**<br>
    First input line will obtain number of vertices V present in the graph.<br>
    Graph in the form of adjacency matrix or adjacency list is taken as an input in next V lines.<br>
    Next input line will obtain source and destination vertex number.<br>
    Last input line obtain value k.<br>

    **Output Format:**<br>
    Output will be the weight of shortest path from source to destination having exactly k edges. If not path is available then print "**no path of length k is available**".<br>

    **Sample I/O Problem 3:**<br>
    | **Input:** | **Output:** |
    | :---     | :---          |
    | 4<br>0 10 3 2<br>0 0 0 7<br>0 0 0 6<br>0 0 0 0<br>1 4<br>2 | Weight of shortest path from (1, 4) with 2 edges: 9 |

---