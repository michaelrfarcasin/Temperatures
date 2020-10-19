#include "pch.h"
#include "TemperatureController.h"
#include <sstream>

using namespace std;

int TemperatureController::getClosestToZeroAction(string inputs)
{
	vector<int> temperatures = convertStringToIntVector(inputs);
	return this->getNumberClosestToZero.get(temperatures);
}

vector<int> TemperatureController::convertStringToIntVector(string inputs)
{
	istringstream stream(inputs);
	vector<int> ints;
	int temp;
	while (stream >> temp) {
		ints.push_back(temp);
	}

	return ints;
}