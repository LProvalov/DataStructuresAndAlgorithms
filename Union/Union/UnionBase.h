#pragma once
class UnionBase
{
protected:
	int size;
	int* sz;
	int* id;

public:
	UnionBase();
	~UnionBase();

	void printStatus();
};

