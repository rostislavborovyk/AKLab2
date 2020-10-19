#include <iostream>
#include <cstdlib>
#include "calculator.h"
using namespace std;

int main()
{
	Calculator calc;
	int res = calc.Add(6.0, 8.0);
    cout << res << endl;
    return 0;
}