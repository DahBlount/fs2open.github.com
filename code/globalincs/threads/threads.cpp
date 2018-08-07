
#include "threads.h"

int Num_threads = 1;

SCP_vector<int> bounds(int elem) {
	SCP_vector<int> bnd;
	int delta = elem / Num_threads;
	int remainder = elem % Num_threads;
	int N1 = 0, N2 = 0;
	bnd.push_back(N1);
	for (int i = 0; i < Num_threads; ++i) {
		N2 = N1 + delta;
		if (i == Num_threads - 1)
			N2 += remainder;
		bnd.push_back(N2);
		N1 = N2;
	}
	return bnd;
}
