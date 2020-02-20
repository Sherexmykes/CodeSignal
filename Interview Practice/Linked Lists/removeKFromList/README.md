Given a singly linked list of integers l and an integer k, remove all elements from list l that have a value equal to k.<br />
Note: Sovle this task in O(n) time and O(1) space.

ex1:

	l = [3, 1, 2, 3, 4, 5] and k = 3,
	removeKFromList(l, k) = [1, 2, 4, 5];
	
ex2:

	l = [1, 2, 3, 4, 5, 6, 7] and k = 10,
	removeKFromList(l, k) = [1, 2, 3, 4, 5, 6, 7];

Constraints:

	0 <= l.length <= 10^5
	-1000 <= k, l[i] <= 1000

Execution time limit:

	c: 0.5 seconds
	c++: 0.5 seconds
	java: 3 seconds
	javascript: 4 seconds
	python: 4 seconds
