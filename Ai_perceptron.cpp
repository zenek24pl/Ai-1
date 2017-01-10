// Ai_perceptron.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int x_0 = 1;
	int w_1 = 2, w_0 = -4, w2 = 2;
	int tab_x_1[] = { 2,2,0,-2,-2,0,4 };
	int tab_x_2[] = { 1,2,6,10,0,0,-20 };
	int s = 0;
	int tab_d[] = { 1,1,1,-1,-1,-1,-1 };
	int wyn[7] = { 0 };
	int pyklo = 0;
	do {
		for (int i = 0; i < 7; i++) {
			s = tab_x_1[i] * w_1 + x_0*w_0 + tab_x_2[i] * w2;
			if (s > 0) {
				wyn[i] = 1;
			}
			if (s < 0) {
				wyn[i] = -1;
			}
			if (wyn[i] != tab_d[i]) {
				w_0 = w_0 + tab_d[i] * x_0;
				w_1 = w_1 + tab_d[i] * tab_x_1[i];
				w2 = w2 + tab_d[i] * tab_x_2[i];
				pyklo = 0;

			}
			else
			{
				pyklo++;
			}
		}
	} while (pyklo < 7);
		for (int i = 0; i < 7; i++) {
			cout << wyn[i] << endl;
		}

		system("Pause");
		return 0;
	}


