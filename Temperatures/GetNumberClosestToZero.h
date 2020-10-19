#pragma once
#include <vector>

class GetNumberClosestToZero
{
public:
	int get(std::vector<int> ints);
protected:
	int closestToZeroBiasedPositive(int a, int b);
};