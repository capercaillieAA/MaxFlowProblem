#pragma once
#include <algorithm>
#include "ford_fulkerson.h"

class matrix_ff : public ford_fulkerson
{
public:
	matrix_ff(const matrix<int>& g, int v, int e, int source, int dest);
private:
	matrix<int> graph;

	int find_flow(int v, int flow);
};

