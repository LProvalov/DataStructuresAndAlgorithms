#include "stdafx.h"
#include "UnionBase.h"

using namespace std;


void UnionBase::printStatus()
{
	cout << "      ";
	for (int i = 0; i < size; i++) cout << i << " ";

	cout << endl << "Id[]: ";
	for (int i = 0; i < size; i++) {
		cout << id[i] << " ";
	};
	cout << endl;

	cout << "Sz[]: ";
	for (int i = 0; i < size; i++) {
		cout << sz[i] << " ";
	};
	cout << endl;

	cout << "------------------------------" << endl;
}

UnionBase::UnionBase()
{
	size = 0;
	id = 0;
	sz = 0;
}


UnionBase::~UnionBase()
{
}
