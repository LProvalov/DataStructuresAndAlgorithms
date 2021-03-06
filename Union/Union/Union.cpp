// Union.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "QuickFindUF.h"
#include "SuppressorUF.h"
using namespace std;

int main()
{
	/*
	QuickFindUF uf(10);
	uf.printStatus();
	cout << endl;

	uf.pairUnion(0, 1);
	uf.pairUnion(1, 2);
	uf.pairUnion(5, 6);
	uf.pairUnion(5, 8);
	uf.pairUnion(2, 3);
	uf.printStatus();
	cout << endl;

	uf.pairUnion(9, 7);
	uf.pairUnion(7, 8);
	uf.pairUnion(4, 3);
	uf.printStatus();
	cout << endl;

	//uf.pairUnion(9, 0);
	cout << endl;

	cout << "Find: " << uf.find(0) << endl; 
	cout << uf.connected(1, 3);
	cout << endl;
	*/
	SuppressorUF suf(10);
	suf.remove(2);
	suf.remove(3);
	suf.remove(4);
	suf.remove(5);
	suf.printStatus();

	suf.remove(9);
	suf.remove(6);
	suf.remove(7);
	suf.remove(8);
	suf.printStatus();
	cout << "Suppress(1): " << suf.suppress(1) << endl;
	cout << "Suppress(8): " << suf.suppress(8) << endl;
	cout << "Suppress(2): " << suf.suppress(2) << endl;

	system("pause");
    return 0;
}

