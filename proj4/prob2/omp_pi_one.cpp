#include <stdio.h>
#include <time.h>

long num_steps = 1000000000; 
double step;

int main ()
{ 
	long i; double x, pi, sum = 0.0;
	
	clock_t tStart = clock();
	step = 1.0/(double) num_steps;
	for (i=0;i< num_steps; i++){
		x = (i+0.5)*step;
		sum = sum + 4.0/(1.0+x*x);
	}
	pi = step * sum;
	clock_t tEnd = clock();
	printf("Execution Time : %dms\n", (int)(tEnd-tStart));

	printf("pi=%.10lf\n",pi);
	return 0;
}