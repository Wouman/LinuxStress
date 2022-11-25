#include <omp.h>
#include <stdlib.h>
#include <iostream>

#define VERSION "1.0-beta"

using namespace std;

int threads_num;

int main() {
	cout << "=======| Starting LINUX STRESS " << VERSION " |======="<< endl;
	cout << endl;

	cout << "Enter number of threads (Warning! Overdoing it can cause freezes): ";
	cin  >> threads_num;

	omp_set_num_threads(threads_num);
	
	#pragma omp parallel 
	{

		int s;
		for (int i = 0; i < 5000; i++)
		{
			for (int q = 0; q < 1000000000; q++)
			{
				int a = q;
				int b = i;
				int c = q * i + q * i;
				s = c * q * i - q * a + b;
			}
		}
	}
}
