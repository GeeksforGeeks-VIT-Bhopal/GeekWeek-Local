 Problem Statement for ASCIISum


Problem Statement
    	
Consider the following function:

def f(n): return sum( ord(x) for x in str(n) )
(The function writes n as a string and then adds up the ASCII values of its digits.)

If we start from some positive integer n and repeatedly apply this function f, we will get an infinite sequence of positive integers. It's fairly obvious that for any starting number n this sequence must eventually become periodic. Perhaps more surprisingly, each of these sequences eventually becomes constant. Let final(n) denote that constant for the sequence starting with n.

Given the long N, sum final(i) over all i such that 1 <= i <= N, and return the result modulo 10^9 + 7.

 
Definition
    	
Class:	ASCIISum
Method:	total
Parameters:	long
Returns:	int
Method signature:	int total(long N)
(be sure your method is public)
    
 
Notes
-	The ASCII values of the characters '0', '1', ..., '8', '9' are 48, 49, ..., 56, 57. (I.e., the character representing the digit x has ASCII value 48+x.)
 
Constraints
-	N will be between 1 and 10^18 - 1, inclusive.
 
Examples
0)	
    	
3
Returns: 465
We have:
f(1) = 49, f(49) = 109, f(109) = 154, and f(154) = 154
f(2) = 50, f(50) = 101, f(101) = 146, f(146) = 155, and f(155) = 155
f(3) = 51, f(51) = 102, f(102) = 147, f(147) = 156, and f(156) = 156
Hence, the sum final(1) + final(2) + final(3) equals 154 + 155 + 156.
1)	
    	
6
Returns: 930
We now also have final(4) = 157, final(5) = 158, and final(6) = 150.
2)	
    	
10
Returns: 1543
The next few values are final(7) = 151, final(8) = 152, final(9) = 153, and final(10) = 157.
3)	
    	
999999999999
Returns: 454936082
Don't forget to do calculations modulo 10^9 + 7, and watch out for integer