#pragma once
class QuickFindUF
{
private:
	int maxTree;
	int size;
	int* id;
	int* sz;
	int root(int i);

public:
	QuickFindUF(int N);
	~QuickFindUF();
	bool connected(int p, int q);
	void pairUnion(int p, int q);
	void printStatus();
	bool isFull();
	int find(int i);
};

