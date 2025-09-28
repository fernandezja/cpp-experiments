#include "externals/gmock/gmock.h"
#include "externals/gtest/gtest.h"

using namespace std; 

int main(int argc, char*argv[])
{
    double result = add_numbers(2, 3);
	printf("%lf", result);
	return 0;
}

double add_numbers(const double f1, const double f2)
{
    return f1 + f2;
}

TEST(example, add)
{
    double res;
    res = add_numbers(1.0, 2.0);
    ASSERT_NEAR(res, 3.0, 1.0e-11);
}