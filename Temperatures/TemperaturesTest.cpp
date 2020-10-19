#include "pch.h"
#include "TemperatureController.h"
#include "catch.hpp"

TEST_CASE_METHOD(TemperatureController, "Get temperature closest to zero", "[multi-file:temperaturesTest]")
{
	REQUIRE(getClosestToZeroAction("") == 0);
	REQUIRE(getClosestToZeroAction("7") == 7);
	REQUIRE(getClosestToZeroAction("7 5 9 1 4") == 1);
	REQUIRE(getClosestToZeroAction("-273") == -273);
	REQUIRE(getClosestToZeroAction("5526") == 5526);
	REQUIRE(getClosestToZeroAction("-15 -7 -9 -14 -12") == -7);
	REQUIRE(getClosestToZeroAction("15 -7 9 14 7 12") == 7);
	REQUIRE(getClosestToZeroAction("15 7 9 14 -7 12") == 7);
}