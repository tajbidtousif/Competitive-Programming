#include<bits/stdc++.h>
using namespace std;

struct Node()
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root;

void insert(int value)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> node = value;
    newNode -> right = NULL; newNode -> left = NULL;
    
}

int main()
{
    root = null;
    insert(53);
    insert(40);
    insert(39);
    insert(50);

}