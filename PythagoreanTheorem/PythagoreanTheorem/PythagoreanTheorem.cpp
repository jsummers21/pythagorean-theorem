// PythagoreanTheorem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float Length1, Length2, Length3;
		cout << "Imput both Side A and B seperated by a space:" << endl;
		cin >> Length1 >> Length2;
		Length3 = sqrt((Length1*Length1) + (Length2*Length2));
		cout << fixed;
		cout << setprecision(2);
		cout << "Side C is: " << Length3 << endl;
		
		
    return 0;
}

