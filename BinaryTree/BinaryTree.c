#include"BinaryTree.h"
#include"Queue.h"
pBTNode Create(BTDataType x)
{
	pBTNode new = (pBTNode)malloc(sizeof(BTNode));
	if (new == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	new->_left = new->_right = NULL;
	new->_data = x;
	return new;
}
int BinarySize(pBTNode root)
{
	if (root == NULL)
		return 0;
	return 1+BinarySize(root->_left) + BinarySize(root->_right);
}
int BinaryLeafSize(pBTNode root)
{
	if (root == NULL)
		return 0;
	else if (root->_left == NULL && root->_right == NULL)
		return 1;
	else
		return BinaryLeafSize(root->_left) + BinaryLeafSize(root->_right);
}
int BinaryDepth(pBTNode root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + (BinaryDepth(root->_left) > BinaryDepth(root->_right) ?
		BinaryDepth(root->_left) : BinaryDepth(root->_right));
}
void PrevOrder(pBTNode root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->_data);
	PrevOrder(root->_left);
	PrevOrder(root->_right);
}
void InOrder(pBTNode root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->_left);
	printf("%c ", root->_data);
	InOrder(root->_right);
}

void PostOrder(pBTNode root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->_left);
	PostOrder(root->_right);
	printf("%c ", root->_data);
}

int BinaryTreeLevalKSize(pBTNode root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;

	return BinaryTreeLevalKSize(root->_left, k - 1) + BinaryTreeLevalKSize(root->_right, k - 1);
}

void LevalOrder(pBTNode root)
{
	Queue q1;
	QueueInit(&q1);
	if (root == NULL)
		return;
	QueuePush(&q1, root);
	while (!QueueEmpty(&q1))
	{
		pBTNode front = QueueFront(&q1);
		printf("%c ", front->_data);
		QueuePop(&q1);
		if (front->_left)
			QueuePush(&q1, front->_left);
		if (front->_right)
			QueuePush(&q1, front->_right);
	}
	QueueDestory(&q1);
}
bool BinaryTreeComplete(pBTNode root)
{
	Queue q1;
	QueueInit(&q1);
	if (root == NULL)
		return true;
	QueuePush(&q1, root);
	while (!QueueEmpty(&q1))
	{
		pBTNode front = QueueFront(&q1);
		
		QueuePop(&q1);
		if (front == NULL)
		{
			break;
		}
		QueuePush(&q1,front->_left);
		QueuePush(&q1,front->_right);
	}
	while (!QueueEmpty(&q1))
	{
		pBTNode front = QueueFront(&q1);
		if (front)
		{
			QueueDestory(&q1);
			return false;
		}
		QueuePop(&q1);
	}
	QueueDestory(&q1);
	return true;
}