Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored.



### [Linear Search](https://www.geeksforgeeks.org/linear-search/)
A linear search sequentially checks each element of the list until it finds an element that matches the target value. 
If the algorithm reaches the end of the list, the search terminates unsuccessfully.

![image](https://user-images.githubusercontent.com/108831247/230428757-73951f0a-9c03-486b-a398-b5f88432e573.png)

Step 1: First, read the search element (Target element) in the array.

Step 2: Set an integer i = 0 and repeat steps 3 to 4 till i reaches the end of the array.

Step 3: Match the key with arr[i].

Step 4: If the key matches, return the index. Otherwise, increment i by 1.

### [Sentinel Linear Search](https://www.geeksforgeeks.org/sentinel-linear-search/)

In the context of searching for an element in an array, Sentinel Linear Search is a variant of Linear Search algorithm that uses a sentinel value to optimize the search process.


### [Binary Search](https://www.geeksforgeeks.org/binary-search/)
Binary search, is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.

![image](https://user-images.githubusercontent.com/108831247/230430071-0b6f8137-f888-45b6-b7c5-655c1fa77ff2.png)


### [Meta Binary Search | One-Sided Binary Search](https://www.geeksforgeeks.org/meta-binary-search-one-sided-binary-search/)
The advantage of Meta Binary Search over binary search is that it can perform fewer comparisons in some cases, particularly when the target element is close to the beginning of the list. The disadvantage is that the algorithm may perform more comparisons than binary search in other cases, particularly when the target element is close to the end of the list. Therefore, Meta Binary Search is most effective when the list is ordered in a way that is consistent with the distribution of the target elements.

### [Ternary Search](https://www.geeksforgeeks.org/ternary-search/)
A ternary search algorithm is a technique in computer science for finding the minimum or maximum of a unimodal function. A ternary search determines either that the minimum or maximum cannot be in the first third of the domain or that it cannot be in the last third of the domain, then repeats on the remaining two thirds. A ternary search is an example of a divide and conquer algorithm (see search algorithm).
![image](https://user-images.githubusercontent.com/108831247/230431078-01842d13-417a-4597-8241-d5741f93d6cd.png)

### [Jump Search](https://www.geeksforgeeks.org/jump-search/)
Like Binary Search, Jump Search is a searching algorithm for sorted arrays. The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.
![image](https://user-images.githubusercontent.com/108831247/230431600-c4365368-98fc-4221-aed9-37a7ef799cf8.png)

### [Interpolation Search](https://www.geeksforgeeks.org/interpolation-search/)
Interpolation search is an algorithm for searching for a key in an array that has been ordered by numerical values assigned to the keys (key values).
![image](https://user-images.githubusercontent.com/108831247/230431876-c8d0e764-7b8c-4a82-9fb3-aabeaf0809cc.png)

### [Exponential Search](https://www.geeksforgeeks.org/exponential-search/)
Exponential search allows for searching through a sorted, unbounded list for a pecified input value (the search "key"). The algorithm consists of two stages. The first stage determines a range in which the search key would reside if it were in the list. In the second stage, a binary search is performed on this range. In the first stage, assuming that the list is sorted in ascending order, the algorithm looks for the first exponent, j, where the value 2^j is greater than the search key. This value, 2^j becomes the upper bound for the binary search with the previous power of 2, 2^j - 1, being the lower bound for the binary search.
![image](https://user-images.githubusercontent.com/108831247/230432343-01aa67a5-b241-44a4-b0bc-97ed813d029c.png)

### [Fibonacci Search](https://www.geeksforgeeks.org/fibonacci-search/)
the Fibonacci search technique is a method of searching a sorted array using a divide and conquer algorithm that narrows down possible locations with the aid of Fibonacci numbers.
![image](https://user-images.githubusercontent.com/108831247/230432755-5004aebd-620a-4c18-9b7e-78130f01f956.png)


## Properties

| **Algorithm** | **Best Case Complexity** | **Worst Case Complexity** | **Average Case Complexity** | **Need Sorted** | 
| ------------- | -------------- | --------------- | --------------- | --------------- |
| Linear Search | O(1) | O(N) | O(N) | No |
| Sentinel Linear Search | O(1) | O(N) | O(N) | No |
| Binary Search | O(1) | O(log2n) | O(log2n) | Yes |
| Meta Binary Search |  O(1) | O(log2n) | O(log2n) | Yes |
| Ternary Search | O(1) |  O(log3n) | O(log3n) | Yes |
| Jump Search | O(1) | O(√n) | O(√n) | Yes |
| Interpolation Search | O(1) | O(log2(log2n)) | O(n) | Yes |
| Exponential Search | O(1) | O(log2n) | O(log2n) | Yes |
| Fibonacci Search | O(1) | O(log2n) | O(log2n) | Yes | 



## References
https://www.geeksforgeeks.org/searching-algorithms/
https://en.wikipedia.org/wiki/Linear_search#:~:text=In%20computer%20science%2C%20a%20linear,whole%20list%20has%20been%20searched.
https://en.wikipedia.org/wiki/Binary_search_algorithm
https://en.wikipedia.org/wiki/Ternary_search
https://en.wikipedia.org/wiki/Exponential_search
https://en.wikipedia.org/wiki/Fibonacci_search_technique


