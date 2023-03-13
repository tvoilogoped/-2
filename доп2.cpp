#include<iostream>
#include<cstdlib>
#include<time.h>
int main()
{
    srand(time(NULL(0)));
	const short t=5, k=5;
	short min1, min2, max1, max2;
	int mass[t][k],min,max;
	for (int i = 0; i < t; i++)
	{
		for (int p = 0; p < k; p++)
		{
			mass[i][p] = 0 + rand() % 1001;
			std::cout << mass[i][p]<<' ';
		}
		std::cout << std::endl;
	}
	min = mass[0][0];
	max = mass[0][0];
	for (int i = 0; i < t; i++)
	{
		for (int p = 0; p < k; p++)
		{
			if (mass[i][p] > max) { max = mass[i][p]; max1 = i; max2 = p; }
			if (mass[i][p] < min) { min = mass[i][p]; min1 = i; min2 = p; }
		
		}
	
	}
	std::cout << "max = " << max << std::endl;
	std::cout << "index i = " << max1 << std::endl << "index p = " << max2 << std::endl;
	std::cout << "min = " << min  << std::endl;
	std::cout << "index i = " << min1 << std::endl << "index p = " << min2 << std::endl;
}