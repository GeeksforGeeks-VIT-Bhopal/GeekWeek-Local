/*

    Time Complexity: O(N)
    Space Complexity: O(N),

    Where N is the size of the given stack MY_STACK. 
       
*/

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    // Base Case
    if (myStack.empty()) {
        myStack.push(x);
        return myStack;
    }

    // Recursive calls 
    int num = myStack.top();
    myStack.pop();
    pushAtBottom(myStack, x);
    myStack.push(num);

    return myStack;
}
