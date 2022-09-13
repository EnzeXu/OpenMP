#include<omp.h>
#include<iostream>
using namespace std;
int main()
{
	omp_set_num_threads(2);
#pragma omp parallel
	{
		
		cout << "Hello, world!" << endl;
	}
    return 0;
}