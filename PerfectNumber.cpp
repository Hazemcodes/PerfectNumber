//Hazem Ahmed 
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int y = 0;
	for (int x = 1; x <= 1000; x++)
	{
		y = x;
		int num = 0;
		for (int i = 1; i < y; i++)
		{
			if (y % i == 0)
			{
				num = num + i;
				if (num == y)
				{
					cout << "The Factors are";
					for (int z = 1; z < num; z++)
					{
						if (num%z == 0)
							cout << "  " << z;
					}
					cout << "  The Perfect Number is :" << num << endl;
				}
			}
		}
	}
}