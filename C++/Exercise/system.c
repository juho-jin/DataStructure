#include<stdio.h>
#include<math.h>

int polar(int n, int m);
int cartesian(int x, int y);

int main(void)
{
	int num;
	int x, y;
	int n, m;

	printf("Choose between the two.\n");
	printf("0.Polar Coodinate System.\n");
	printf("1.Cartesian Coodinate System.\n");
	scanf("%d", &num);
	if (num == 0)
	{
		printf("Please add the size and angle.\n");
		scanf("%d %d", &n, &m);
		polar(n,m);
		printf("\n");
	}
	if (num == 1)
	{
		printf("Please insert the X and Y axes.\n");
		scanf("%d %d", &x, &y);
		cartesian(x,y);
		printf("\n");
	}

	

}

int polar(int n, int m)
{
	float x, y;

	x = n * cos(m);
	y = n * sin(m);
	printf("x = %.5f, y = %.5f", x, y);
}

int cartesian(int x, int y)
{
	float n, m;

	n = sqrt((x*x)+(y*y));
	m = asin(y/n);
	printf("n = %.5f, m = %.5f", n, m);
}