#include <bits/stdc++.h> 
using namespace std; 
double cubicRoot(double n) 
{
	double start = 0, end = n; 
	double e = 0.00000001; 
	while (true) 
	{ 
		double mid = (start + end)/2; 
		double error = abs(n-mid*mid*mid); 
		if (error <= e) 
			return mid; 
		if ((mid*mid*mid) > n) 
			end = mid; 
		else
			start = mid; 
	} 
} 
int main() 
{ 
	double n = 3; 
	printf("Cubic root of %lf is %lf\n", 
		n, cubicRoot(n)); 
	return 0; 
} 