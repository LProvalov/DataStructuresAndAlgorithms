#include "stdafx.h"
#include "SuppressorUF.h"

int SuppressorUF::root(int i)
{
	while (id[i] != i) {
		id[i] = id[id[i]];
		i = id[i];
	}
	return i;
}

void SuppressorUF::remove(int i)
{
	if (id[i] != i) return;
	id[i] = root(i + 1);
}

int SuppressorUF::suppress(int i)
{ 
	int next = root(i);
	if (next >= size) return -1;
	return next;
}

SuppressorUF::SuppressorUF(int n)
{
	size = n;
	id = new int[n + 1];
	sz = new int[n + 1];
	for (int i = 0; i < n + 1; i++) {
		id[i] = i;
		sz[i] = 1;
	}
}

SuppressorUF::~SuppressorUF()
{
	if (id) delete id;
	if (sz) delete sz;
}
