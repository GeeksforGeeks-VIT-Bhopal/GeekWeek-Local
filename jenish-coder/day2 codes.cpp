void generate(int i,int n,char a[],vector<string> &v){
    if(i==n){
    	string b;
    	for(int i=0;i<n;i++)
    	b+=a[i];
        v.push_back(b);
        return;
    }
    a[i]='0';
    generate(i+1,n,a,v);
    if(i==0||a[i-1]!='1')
    {
	a[i]='1';
	generate(i+1,n,a,v);
    }
}
vector<string> generateString(int n) {
    vector<string>v;
    char a[n];
    generate(0,n,a,v);
    return v;   
}


//**q2**//
#include <queue>

vector<int> printLeftRightMostNodes(BinaryTreeNode<int>* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    queue<BinaryTreeNode<int>*> pendingNodes;

    pendingNodes.push(root);

    while (!pendingNodes.empty()) {
        int currentLevelSize = pendingNodes.size();

        for (int i = 0; i < currentLevelSize; i++) {
            BinaryTreeNode<int>* currentNode = pendingNodes.front();
            pendingNodes.pop();

            // Current Node is leftmost or rightmost node.
            if (i == 0 || i == currentLevelSize - 1) {
                ans.push_back(currentNode->data);
            }

            if (currentNode->left != NULL) {
                pendingNodes.push(currentNode->left);
            }
            
            if (currentNode->right != NULL) {
                pendingNodes.push(currentNode->right);
            }
        }
    }

    return ans;
}


//**q3**//
const int mod = (int)1e9 + 7;
// Multiplication of big numbers under mod
int multiply(int a, int b, int mod) {
    int res = 0;  // Initialize result

    /* Update a if it is more than
     or equal to mod */

    a %= mod;

    while (b) {
        // If b is odd, add a with result
        if (b & 1) {
            res = (res + a) % mod;
        }

        /* Here we assume that doing 2*a
           doesn't cause overflow */
        a = (2 * a) % mod;

        b >>= 1;  // b = b / 2
    }

    return res;
}
int gcdExtended(int a, int b, int *x, int *y) {
    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1;  // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}
int modInverse(int b, int m) {
    int x, y;  // Used in extended GCD algorithm
    int g = gcdExtended(b, m, &x, &y);

    // Return -1 if b and m are not co-prime
    if (g != 1) {
        return -1;
    }
    // m is added to handle negative x
    return (x % m + m) % m;
}



int fact(int num) {
    int fact = 1;

    while (num > 1) {
        fact = multiply(fact, num, mod);
        num -= 1;
    }
    return fact;
}


int catalan(int n) {
    return multiply(multiply(fact(2 * n), modInverse(fact(n + 1), mod), mod), modInverse(fact(n), mod), mod);
}
vector<int> totalBST(vector<int> arr) {
    vector<int> ans;
    int n = arr.size();
    int i, k;
    for (k = 0; k < n; k++) {
        int s = 0;

        for (i = 0; i < n; i++) {
            if (arr[i] < arr[k])
                s += 1;
        }

     

        int catalan_leftBST = catalan(s);

     
        int catalan_rightBST = catalan(n - s - 1);

    
        int totalBST = multiply(catalan_rightBST, catalan_leftBST, mod);

       
        ans.push_back(totalBST);
    }
    return ans;
}
