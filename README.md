# Git-Projects
#include<stdio.h>
int main()
{
	int c, p, m = 21;
	while (1)
	{
		printf("Number of Match Sticks left = %d\n", m);
		printf("Pick 1 or 2 or 3 or 4 Matches\n");
		scanf_s("%d", &p);
		if (p > 4 || p < 1)
			continue;
		m = m - p;
		printf("Number of matches left = %d\n", m);
		c = 5 - p; /*Trick*/
		printf("Out of which Computer picked up %d\n", c);
		m = m - c;
		if (m == 1)
		{
			printf("Number of Matches left = %d\n", m);
			printf("\n------------------\n");
			printf("You lost the Game\n");
			printf("------------------\n");
			break;
		}
	}
	return 0;
}
