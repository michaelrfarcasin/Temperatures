#include "pch.h"
#include "GetNumberClosestToZero.h"
#include <vector>

using namespace std;

int GetNumberClosestToZero::get(vector<int> ints)
{
	if (ints.size() == 0) {
		return 0;
	}
	int closest = ints.front();
	for (int i : ints) {
		closest = closestToZeroBiasedPositive(closest, i);
	}
	return closest;
}

int GetNumberClosestToZero::closestToZeroBiasedPositive(int a, int b)
{
	if ((abs(a) < abs(b)) || (abs(a) == abs(b) && a > 0)) {
		return a;
	}

	return b;
}