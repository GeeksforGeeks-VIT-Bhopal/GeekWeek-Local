#include <climits>
#include <vector>
bool getPath(BinaryTreeNode<int>* root, BinaryTreeNode<int>* target_leaf, vector<int> &path){
	if(root == NULL)
	{
		return false;
	}
	if(root == target_leaf || getPath(root->left, target_leaf, path) 
		|| getPath(root->right, target_leaf, path))
	{

		path.push_back(root->data);
		return true;
	}

	return false;
}

void getTargetLeaf(BinaryTreeNode<int>* root, int& maxSum, int currSum, BinaryTreeNode<int>* &target_leaf, vector<int> &path ){
	if(root == NULL)
	{
		return;
	}
	currSum = currSum + root->data;

	if( root->left == NULL && root->right == NULL )
	{
		if(currSum > maxSum)
		{
			maxSum = currSum;
			target_leaf = root;
		}
	}

	getTargetLeaf(root->left, maxSum, currSum, target_leaf, path);
	getTargetLeaf(root->right, maxSum, currSum, target_leaf, path);
}

void maxSumPathHelper(BinaryTreeNode<int>* root, vector<int> &path)
{
	if(root == NULL)
	{
		return;
	}
	BinaryTreeNode<int>* target_leaf;
	int maxSum = INT_MIN;

	getTargetLeaf(root, maxSum, 0, target_leaf, path);
	getPath(root, target_leaf, path);

}

void maxSumPath(BinaryTreeNode<int>* root, vector<int> &path)
{
	maxSumPathHelper(root, path);
	
	return;
}
