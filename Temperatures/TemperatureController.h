#pragma once
#include <string>
#include <vector>
#include "GetNumberClosestToZero.h"

class TemperatureController {
public:
	int getClosestToZeroAction(std::string inputs);
protected:
	GetNumberClosestToZero getNumberClosestToZero;
	std::vector<int> convertStringToIntVector(std::string inputs);
};