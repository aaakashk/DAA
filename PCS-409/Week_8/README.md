### [May, 18](../Week_8/)

**Note:** Input, output format along with sample i/o for problem 1 and 2 is same and is provided at the end of problem 2.

#### [Prim's Algorithm](prims.cpp)

1. Assume that a project of road construction to connect some cities is given to your friend. Map of these cities and roads which will connect them (after construction) is provided to him in the form of a graph. Certain amount of Rupees is associated with construction of each road. Your friend  has to calculate the minimum budget required for this project. The budget should be designed in such a way that the cost of connecting the cities should be minimum and number of roads required to connect all the cities should be minimum (if there are N cities then only N - 1 roads need to be constructed). He asks you for help. Now, you have to help your friend by designing an algorithm which will find minimum cost required to connect these cities. (use Prim's algorithm)

#### [Kruskal's Algorithm](kruskals.cpp)

2. Implement the previous problem using Kruskal's algorithm.

    **Input Format:**<br>
    The first line of input takes number of vertices in the graph.<br>
    Input will be the graph in the form of adjacency matrix or adjacency list.<br>

    **Output Format:**<br>
    Output will be minimum spanning weight.<br>

    **Sample I/O Problem 1 and 2:**<br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    |7<br>0 0 7 5 0 0 0<br>0 0 8 5 0 0 0<br>7 8 0 9 7 0 0<br>5 0 9 0 15 6 0<br>0 5 7 15 0 8 9<br>0 0 0 6 8 0 11<br>0 0 0 0 9 11 0 | Minimum Spanning Weight : 39 |

#### [Maximum Spanning Tree](max_spanning.cpp)

3. Assume that same road construction project is given to another person. The amount he will earn from this project is directly proportional to the budget of the project. This person is greedy, so he decided to maximize the budget by constructing those roads who have highest construction cost. Design an algorithm and implement it using a program to find the maximum budget required for the project.

    **Input Format:**<br>
    The first line of input takes number of vertices in the graph.<br>
    Input will be the graph in the form of adjacency matrix or adjacency list.<br>

    **Output Format:**<br>
    Output will be maximum spanning weight.<br>
    | **Input:** | **Output:** |
    | :---       | :---        |
    |7<br>0 0 7 5 0 0 0<br>0 0 8 5 0 0 0<br>7 8 0 9 7 0 0<br>5 0 9 0 15 6 0<br>0 5 7 15 0 8 9<br>0 0 0 6 8 0 11<br>0 0 0 0 9 11 0 | Maximum Spanning Weight : 59 |
    
---