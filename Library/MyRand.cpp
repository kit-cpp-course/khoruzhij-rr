#include "MyRand.h"


namespace {
	std::random_device rd;
	std::mt19937 mt(rd());
}


	int MyRand::randomInt(int exclusiveMax)
	{
		std::uniform_int_distribution<> dist(0, exclusiveMax - 1);
		return dist(mt);
	}

	int MyRand::randomInt(int min, int max) // inclusive min/max
	{
		std::uniform_int_distribution<> dist(0, max - min);
		return dist(mt) + min;
	}

	bool MyRand::randomBool()
	{
		double probability = 0.5;
		std::bernoulli_distribution dist(probability);
		return dist(mt);

	}
