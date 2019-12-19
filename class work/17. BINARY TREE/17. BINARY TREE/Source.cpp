#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
	int minValue();
	Node* remove(int value, Node *parent);
};

Node *CreateNewNode(int data) {
	Node *newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node *Insert(Node *root, int data) {
	if (root == NULL) {
		root = CreateNewNode(data);
	}
	else if (data <= root->data) {
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->right, data);
	}

	return root;
}

bool Search(Node* root, int data) {
	if (root == NULL) {
		return false;
	}
	else if (root->data == data) {
		return true;
	}
	else if (data <= root->data) {
		return Search(root->left, data);
	}
	else {
		return Search(root->right, data);
	}
}


Node* Node::remove(int value, Node *parent) {

	if (value < this->data) {
		if (left != NULL)
			return left->remove(value, this);
		else
			return NULL;
	}
	else if (value > this->data) {
		if (right != NULL)
			return right->remove(value, this);
		else
			return NULL;
	}
	else {
		if (left != NULL && right != NULL) {
		this->data = right->minValue();
			return right->remove(this->data, this);
		}
		else if (parent->left == this) {
			parent->left = (left != NULL) ? left : right;
			return this;
		}
		else if (parent->right == this) {
			parent->right = (left != NULL) ? left : right;
			return this;
		}
	}
}

int Node::minValue() {

	if (left == NULL)
		return data;
	else
		return left->minValue();

}

int main() {
	int number;
	int number2;

	Node *root = NULL;
	root = Insert(root, 50);
	root = Insert(root, 20);
	root = Insert(root, 23);
	root = Insert(root, 60);
	for (;;) {
		cout << "Enter number for search: " << endl;
		cin >> number;
		if (Search(root, number) == true) {
			cout << "Number: " << number << " Found" << endl;
		}
		else {
			cout << number << " Not found" << endl;
		}
		cout << "delete: " << endl;
		cin >> number2;
		root->remove(number2, root);
	}

	system("pause");
	return 0;
}