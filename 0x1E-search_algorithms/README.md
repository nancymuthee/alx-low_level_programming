<center> <h1>Search Algorithms</h1> </center>

In computer science, a search algorithm is an algorithm (if more than one, algorithms[1]) designed to solve a search problem.

---

<br>
<center> <h2>General Requirements</h2> </center>

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project, is mandatory
5. All your Bash script files must be executable
6. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
7. The first line of all your Bash scripts should be exactly #!/usr/bin/env bash
8. Don’t forget to push your header file

9. You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.


<br>
<center> <h2>TASKS</h2> </center>
0. Write a function that searches for a value in an array of integers using the Linear search algorithm

Prototype : int linear_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the first index where value is located
If value is not present in array or if array is NULL, your function must return -1

1. Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

Prototype : int binary_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the index where value is located
You can assume that array will be sorted in ascending order
You can assume that value won’t appear more than once in array
If value is not present in array or if array is NULL, your function must return -1

2. What is the time complexity (worst case) of a linear search in an array of size n

3. What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n

4. What is the time complexity (worst case) of a binary search in an array of size n

5. What is the space complexity (worst case) of a binary search in an array of size n

6. What is the space complexity of this function / algorithm?



<br>

@nancymuthee

