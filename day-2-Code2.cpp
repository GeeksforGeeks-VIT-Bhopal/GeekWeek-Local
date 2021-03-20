
#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int key; 
	struct Node *left, *right; 
}; 

struct Node* newNode(int item) 
{ 
	Node* temp = new Node; 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

void inorder(Node* root, vector<int>& vec) 
{ 
	if (root != NULL) { 
		inorder(root->left, vec); 
		vec.push_back(root->key); 
		inorder(root->right, vec); 
	} 
} 

struct Node* insert(Node* node, int key) 
{ 
	if (node == NULL) 
		return newNode(key); 

	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	return node; 
} 

bool checkForTriplet(Node* root, int sum) 
{ 
	vector<int> vec; 

	inorder(root, vec); 

	int l, r; 

	for (int i = 0; i < vec.size() - 2; i++) { 

		l = i + 1; 
		r = vec.size() - 1; 
		while (l < r) { 
			if (vec[i] + vec[l] + vec[r] == sum) { 

				return true; 
			} 
			else if (vec[i] + vec[l] + vec[r] < sum) 
				l++; 
			else  
				r--; 
		} 
	} 

	return false; 
} 

int main() 
{ 
	struct Node* root = NULL; 
	root = insert(root, 50); 
	insert(root, 30); 
	insert(root, 20); 
	insert(root, 40); 
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80); 

	int sum = 120; 

	if (checkForTriplet(root, sum)) 
		cout << "YES"; 
	else
		cout << "NO"; 

	return 0; 
} 
