void maxPathHelper(BinaryTreeNode<int> *root, int currentLength, int expected, int &globalMax) 
{
    if (root == NULL) 
    {
        return;
    }
	if (root->data == expected) 
    {
        currentLength++;
    } 
    else 
    {
        currentLength = 1;
    }
    globalMax = max(globalMax, currentLength);
    maxPathHelper(root->left, currentLength, root->data + 1, globalMax);
    maxPathHelper(root->right, currentLength, root->data + 1, globalMax);
}
int maxPath(BinaryTreeNode<int> *root) 
{
    if (root == NULL) 
    {
        return 0;
    }
    int globalMax = 0;
    maxPathHelper(root, 0, root->data, globalMax);

  	 return globalMax;
}
