#include"BinaryTree.h"


int main()
{
	pBTNode A = Create('A');
	pBTNode B = Create('B');
	pBTNode C = Create('C');
	pBTNode D = Create('D');
	pBTNode E = Create('E');
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	printf("%d\n", BinarySize(A));
	printf("%d\n", BinaryLeafSize(A));
	printf("%d\n", BinaryDepth(A));
	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
}