//  Problem Statement for IncreasingJumps

// Problem Statement

// The x axis goes from the left to the right. N frogs, numbered from 1 to N, are sitting on some specific positions on the x axis. Currently, frog number i sits on the integer coordinate frogs[i-1]. At any moment (including the beginning), multiple frogs may be located at the same position without interfering with each other in any way.

// You don't like your frogs scattered, so you would like to move them to some N consecutive integer positions. Formally, in the final configuration the frogs must occupy the positions {x, x+1, ..., x+N-1} for some integer x. The order of frogs on those positions does not matter.

// You have to move the frogs in a sequence of steps. The steps are numbered starting from 1. In each step you must select exactly one frog and tell it to jump either to the left or to the right. In step x, the length of the frog's jump will be exactly x.

// Find and return any valid solution that involves at most 1000 jumps. The returned solution should be a int[] that describes the jump. For each jump, in order, the return value should contain either +f or -f, where f is the number of the frog that jumps and + means jumping to the right (coordinate of the frog increases).

// Definition

Class:	IncreasingJumps
Method:	jump
Parameters:	int[]
Returns:	int[]
Method signature:	int[] jump(int[] frogs)
(be sure your method is public)
    
 
Notes
-	You may assume that a solution always exists.
-	You do not have to minimize the number of jumps. Any solution with at most 1000 jumps will be accepted.
 
Constraints
-	frogs will contain between 1 and 10 elements, inclusive.
-	Each element of frogs will be between 0 and 50, inclusive.
 
Examples
0)	
    	
{5, 6, 1, 9, 8}
Returns: {3, 3, 3 }
The example return value tells frog number 3 (the one that starts at coordinate 1) to make three jumps to the right. The coordinate of this frog will change by +1, then by +2, and then by +3. After the third jump the frogs occupy five consecutive positions and we are done.
1)	
    	
{0, 0, 1, 0}
Returns: {-2, 4 }
The example return value tells frog 2 to jump left (from coordinate 0 to coordinate -1) and then frog 4 to jump right (from coordinate 0 to coordinate 2). Now the frogs sit on the consecutive positions -1, 0, 1, 2.
2)	
    	
{0, 35}
Returns: {1, 1, 1, 1, 1, 1, -2, -2 }
Frog 1 will end on position 21, frog 2 will end on position 20.
3)	
    	
{4, 7, 3, 9, 5, 6, 10, 8}
Returns: {3, 3, -3 }
These frogs already sit on consecutive integers, so we don't have to do anything: {} would be a correct return value.

Just to illustrate that we do not have to minimize the number of jumps, our example output shows a solution in which one frog makes three jumps. These are pointless: the frog ends exactly where it started.