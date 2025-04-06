#include "logic.h"
#include <iostream>

using namespace std;

int main(void)
{
	float number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Your rounded number: " << flooring(number) << endl;

	return 0;
}