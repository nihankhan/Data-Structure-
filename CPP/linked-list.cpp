/*
 *******************************************
 *      * AUTHOR : Nihan_Khan *            *
 *      * NICK : NullByte     *            *
 *      * CREATED:   27.03.2022 10:29:39   *
 *******************************************
*/
#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node                                                               
{
	int data;
	node *next;
};

Node *createNode(int item, Node *next)
{
	Node *newNode = (Node *)malloc(sizeof(Node));

	if (newNode == NULL)
	{
		cout << "Couldn't create a new node!";

		exit(1);
	}

	newNode-> data = item;
	newNode -> next = next;

	return newNode;
}

Node *prepend(Node *root, int item)
{
	Node *newNode = createNode(item, root);

	return newNode;
}

int main(int argc, char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    Node *n1, *n2, *n3, *n4, *n5, *root;

    n1 = createNode(10, NULL);

    root = n1;

    cout << "root = " << root << endl;

    cout << "root = " << n1 -> data << endl;

    root = prepend(root, 20);

    n2 = root;                                                                  

    cout << "First data = " << n2-> data << endl;

    n3 = n2 -> next;

    cout << "Second data = " << n3 -> data << endl;

    n4 = prepend(root, 30);

    cout << "Third data = " << n4 -> data << endl;

    n5 = n4 -> next;

    cout << "Next = " << n5 -> data << endl;

    return 0;
}

