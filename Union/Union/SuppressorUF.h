#pragma once
#include "UnionBase.h"

class SuppressorUF : public UnionBase
{
private:
	int root(int i);
	
public:
	SuppressorUF(int n);
	~SuppressorUF();

	void remove(int i);
	int suppress(int i);
};

