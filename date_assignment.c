#include <stdio.h>
#include <string.h>

int getYear()
{
	int y;
	y = rand()% 121;
	y = y + 1900;
	return y;
}
int getDay(int m)
{
	int d;
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m ==8 || m == 10 || m == 12)
	{
		d = rand()% 31 + 1;
	}
	else if(m ==4 || m == 6 || m == 9 || m == 11)
	{
		d = rand()% 30 + 1;
	}
	else if(m == 2)
	{
		d = rand()% 28 + 1;
	}
	return d;
}
int getMonth()
{
	int month;
	month = rand()% 12 + 1;
	return month;
}
void getMonthName(char str[], int m)
{
	switch(m)
	{
		case 1: strcpy(str, "January"); break;
		case 2: strcpy(str, "February"); break;
		case 3: strcpy(str, "March"); break;
		case 4: strcpy(str, "April"); break;
		case 5: strcpy(str, "May"); break;
		case 6: strcpy(str, "June"); break;
		case 7: strcpy(str, "July"); break;
		case 8: strcpy(str, "August"); break;
		case 9: strcpy(str, "September"); break;
		case 10: strcpy(str, "october"); break;
		case 11: strcpy(str, "November"); break;
		case 12: strcpy(str, "December"); break;
	}
}

int main()
{
	int m;
	int d;
	int y;
	int try;
	char mon[20];

	srand(time(NULL));

	do
	{

	printf("Date %d\n", try);
	try++;

	m = getMonth();
	d = getDay( m );
	y = getYear();

	printf("==========\n");
	printf("%d/%d/%d\n", m,d,y);
	if(m == 12 && d == 25)
		printf("***Merry christmas***");

	getMonthName(mon, m );
	printf("%s %d %d\n", mon, d, y);
	printf("==========\n");
	printf("\n");
	} while( ! (m == 12 && d == 25));

	return 0;
}
