# Design and Analysis of Algorithms


<details>
    <summary>PCS-409</summary>

    <ul>WEEK - 1</ul>
    
</details>

---


#### WEEK - 1 (March, 2)

1. Given an array of non-negative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input).

2. Given an already sorted array of positve integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find the total number of comparisons for each input case. (Time Complexity = O(nlog(n)), where n is the size of input).

3. Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],... ..., arr[2<sup>k</sup>] and so on. Once the interval (arr[2<sup>k</sup>] < key < arr[2<sup>k+1</sup>]) is found, perform a linear search operation from the index 2<sup>k</sup> to find the element key. (Time Complexity < O(n), where n is the number of elements need to be scanned for searching).

