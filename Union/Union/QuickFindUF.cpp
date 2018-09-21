#include "stdafx.h"
#include "QuickFindUF.h"
using namespace std;

int QuickFindUF::root(int i)
{
	while (i != id[i]) {
		id[i] = id[id[i]];
		i = id[i];
	}
	return i;
}

QuickFindUF::QuickFindUF(int N)
{
	size = N;
	maxTree = 1;
	id = new int[N];
	sz = new int[N];
	for (int i = 0; i < N; i++) {
		id[i] = i;
		sz[i] = 1;
	}
}

QuickFindUF::~QuickFindUF()
{
	if (id) delete id;
	if (sz) delete sz;
}

bool QuickFindUF::connected(int p, int q)
{
	return root(p) == root(q);
}

void QuickFindUF::pairUnion(int p, int q)
{
	int i = root(p);
	int j = root(q);
	if (i == j) return;
	if (sz[i] < sz[j]) {
		id[i] = j;
		sz[j] += sz[i];
		if (maxTree < sz[j]) maxTree = sz[j];
	}
	else {
		id[j] = i;
		sz[i] += sz[j];
		if (maxTree < sz[i]) maxTree = sz[i];
	}
}

void QuickFindUF::printStatus()
{
	cout << "Id[]: ";
	for (int i = 0; i < size; i++) {
		cout << id[i] << " ";
	}
	cout << endl;

	cout << "Sz[]: ";
	for (int i = 0; i < size; i++) {
		cout << sz[i] << " ";
	}
	cout << endl;

	cout << "maxTree: " << maxTree;
}

bool QuickFindUF::isFull()
{
	return size == maxTree;
}

int QuickFindUF::find(int p)
{
	int v = root(p);
	for (int i = size - 1; i > p; i--) {
		if (id[i] == v || root(i) == v) return i;
	}
	return p;
}
