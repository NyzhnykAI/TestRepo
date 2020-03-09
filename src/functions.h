#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <vector>

class AddTest{
public:
    double varD{.0};
    std::string varS;
    std::vector<int> varAr;

    double add(double d1, double d2);
    double add(double d);
    std::vector<int> getVarAr(std::vector<int> add);
    std::string getVarS(std::string add);
};

#endif // FUNCTIONS_H
