#include "AdvanceTest.h"

AdvanceTest::AdvanceTest()
	:advanceDays(5)
{
}

AdvanceTest::~AdvanceTest()
{
}

double AdvanceTest::getPrice()
{
	if (advanceDays < 5) return price * 0.6;
	else if (5 <= advanceDays && advanceDays < 10) return price * 0.7;
	else if (10 <= advanceDays && advanceDays < 20) return price * 0.8;
	else return price * 0.9;
}	

int AdvanceTest::getAdvanceDays()
{
	return advanceDays;
}
