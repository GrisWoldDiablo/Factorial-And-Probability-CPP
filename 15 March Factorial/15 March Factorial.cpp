// 15 March Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//#include <math.h>

using namespace std;
long long Factorial(long long);
long long NCR(long long, long long);
float Exp(float, int);

float Prob(int, int, float);

void main()
{
    //cout << "Hello World!\n"; 
	//cout << Factorial(10) << endl;
	//cout << Factorial(20) << endl;
	//cout << Factorial(4) << endl;
	//cout << NCR(20, 0) << endl;
	//cout << NCR(20, 2) << endl;
	cout << NCR(20, 0) << endl;
	cout << Exp(0.1f, 0) << endl;
	cout << Exp(0.9f, 20 - 0) << endl;
	cout << Prob(20, 0, 0.1f) << endl;
	cout << Prob(20, 1, 0.1f) << endl;
	cout << Prob(20, 2, 0.1f) << endl;
	cout << Prob(20, 3, 0.1f) << endl;
	cout << Prob(20, 2, 0.1f) + Prob(20, 3, 0.1f) + Prob(20, 4, 0.1f) << endl;
	cout << numeric_limits<long long>::max() << endl;
	cout << numeric_limits<double>::min() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

long long Factorial(long long x)
{
	if (x == 2)
	{
		return 2;
	}
	else if (x < 2)
	{
		return 1;
	}
	return x * Factorial(x-1);
}

long long NCR(long long n, long long r) {
	return (Factorial(n) / (Factorial(r)*Factorial(n - r)));
}

float Exp(float x, int e)
{
	if (e == 0)
	{
		return 1;
	}
	float result = 1;
	
	for (size_t i = 0; i < e; i++) {
		result *= x;
	}
	return result;
}

float Prob(int n, int k, float p)
{
	long long ncr = NCR(n, k);
	float exp = Exp(p, k);
	float exp2 = Exp(1.0f - p, n - k);
	return (ncr * exp * exp2);
}
