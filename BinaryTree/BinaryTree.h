#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode,*pBTNode;

pBTNode Create(BTDataType x);
int BinarySize(pBTNode root);
int BinaryLeafSize(pBTNode root);
int BinaryDepth(pBTNode root);
void PrevOrder(pBTNode root);
void InOrder(pBTNode root);
void PostOrder(pBTNode root);
int BinaryTreeLevalKSize(pBTNode root, int k);
void LevalOrder(pBTNode root);
bool BinaryTreeComplete(pBTNode root);
