#include<stdio.h>
void print(double*, int);
void sort(double*, int);
double swap(double*, double*);
int main()
{
	int count, i;
	double num[99];
	printf("Enter count: ");
	scanf_s("%d", &count);
	for (i = 0;i < count;i++)
	{
		printf("Enter number[%d]:", i);
		scanf_s("%lf", &num[i]);
	}
	sort(num, count);
	print(num, count);
	if (count % 2 == 1) printf("MED = %lf", num[(count - 1) / 2]);
	else printf("MED : %.3lf", (num[(count - 1) / 2] + num[(count - 1) / 2 + 1]) / 2);
	return 0;
}
void print(double* x, int y) {
	printf("ordered by bubblesort :");
	for (int i = 0;i <= y - 1;i++)
	{
		printf("%.3lf\t", x[i]);
	}
	printf("\n");
}
double swap(double* x, double* y) {
	double temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return *x, * y;
}
//swap value with bubblesort yeaaa
void sort(double* x, int y) {
	for (int i = y - 1;i > 0;i--) {
		for (int j = 0;j < i;j++) {
			if (x[j] > x[j + 1]) swap(&x[j], &x[j + 1]);
		}
	}
}