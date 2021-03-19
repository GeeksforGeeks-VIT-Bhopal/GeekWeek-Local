Problem Statement for GoldMining


Problem Statement
    	
You just found a gold mine that contains goldInGround units of gold. Currently, you don't have any units of gold. You have miningTime minutes of time. Once that time elapses, you want to have as much gold as possible.

You can mine the gold yourself, at the rate of one unit of gold per minute. At the beginning of each minute, you can also hire as many additional workers as you wish. Each worker requires an immediate one-time payment of hiringCost gold. (You can only hire a worker if you have enough gold to pay them.) A hired worker mines gold at the same rate as you. All gold mined by the workers belongs to you.

Return the maximum amount of gold you can have after miningTime minutes.

 
Definition
    	
Class:	GoldMining
Method:	maxProfit
Parameters:	long, long, long
Returns:	long
Method signature:	long maxProfit(long goldInGround, long miningTime, long hiringCost)
(be sure your method is public)
    
 
Constraints
-	goldInGround will be between 1 and 10^18, inclusive.
-	miningTime will be between 1 and 10^6, inclusive.
-	hiringCost will be between 1 and 10^18, inclusive.
 
Examples
0)	
    	
470000
1000000
50
Returns: 470000
There are 470,000 units of gold in the ground and you have 1,000,000 minutes. In that time you can mine all the gold on your own, there is no need to waste some of it on hiring help.
1)	
    	
470000
100000
1234567890123456
Returns: 100000
There are 470,000 units of gold in the ground and you only have 100,000 minutes to mine it. Sadly, workers are prohibitively expensive and thus your best bet is still to work on your own the whole time.
2)	
    	
470000
100000
57000
Returns: 100000
This gets a bit more tricky: After 57,000 minutes you already have enough gold to hire an extra worker, but you should not do so. Regardless of when exactly you hire the worker, it will never pay off. You will earn more just by mining alone.
3)	
    	
470000
100000
42000
Returns: 116000
As the workers become cheaper, it becomes a good idea to hire one and end with more than 100,000 units of gold.
4)	
    	
567890
4
1
Returns: 8
One of multiple optimal strategies looks as follows:
First minute: Only you mine. You gain 1 gold.
Hire a worker, pay 1 gold. You now have 0 gold.
Second minute: You mine together with 1 worker. You gain 2 gold.
Hire two workers, pay 2 gold. You now have 0 gold again.
Third minute: You mine together with 3 workers. You gain 4 gold.
Hire one more worker, pay 1 gold. You now have 3 gold left.
Fourth minute: You mine together with 4 workers. You gain 5 gold, so you end with 3+5 = 8 gold.
5)	
    	
234567
47
10
Returns: 215
Here you will eventually hire a bunch of extra workers. Sometimes you will even hire two new workers at the same time.
6)	
    	
300
47
10
Returns: 190
The mining time and the cost to hire the worker are the same as in the previous example, but now the total amount of gold in the ground is quite small. Note that this influences hiring decisions: it does not pay off to hire as many workers as in the previous example.
7)	
    	
987654321098765432
100
3
Returns: 2731288513472
If the workers are really cheap, in mere 100 minutes we can mine an awful lot of gold.
