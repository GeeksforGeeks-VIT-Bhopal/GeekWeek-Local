#was asked to write function definition

def getElementsInSortedOrder(matrix):
    lst = []
    for i in matrix:
    	lst = lst + i
    lst.sort()
    return lst

#https://www.codingninjas.com/codestudio/problems/print-matrix-elements-in-sorted-order_981282