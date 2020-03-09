#include "functions.h"
#include <algorithm>

double AddTest::add(double d1, double d2)
{
    return d1 + d2;
}

double AddTest::add(double d)
{
    return  varD + d;
}

std::vector<int> AddTest::getVarAr(std::vector<int> add)
{
    add.insert(add.end(), varAr.rbegin(), varAr.rend());
    std::sort(add.rbegin(),add.rend());
    return add;
}

std::string AddTest::getVarS(std::string add)
{
    return varS + add;
}
