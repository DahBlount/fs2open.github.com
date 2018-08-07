
#include "threads.h"

SCP_vector<int> bounds(int threads, int elem) {
	SCP_vector<int> bnd;
	int delta = elem / threads;
	int remainder = elem % threads;
	int N1 = 0, N2 = 0;
	bnd.push_back(N1);
	for (int i = 0; i < threads; ++i) {
		N2 = N1 + delta;
		if (i == threads - 1)
			N2 += remainder;
		bnd.push_back(N2);
		N1 = N2;
	}
	return bnd;
}
