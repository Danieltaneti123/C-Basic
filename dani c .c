#include<stdio.h>
void main()
{
	//initialation
	int phy,che,mat,eng,tot;
	phy = 60;
	che = 75;
	mat = 65;
	eng = 70;
	
	//calcuation
	tot = phy+che+mat+eng;
	//output
	printf("marks in physics: %d\n",phy);
	printf("marks in chemistry: %d\n", che);
	printf("marks in maths: %d\n",mat);
	printf("marks in english: %d\n", eng);
	printf("total marks: %d\n", tot);
	
}
