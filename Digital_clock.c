#include<stdio.h>
#include<windows.h>
int main()
{
	int h, m, s;
	int d = 1000;//Add a delay of 1000 milliseconds and will be adding in the sleeep function
	printf("Set Time : \n");
	scanf_s("%d%d%d",&h,&m,&s);
	if (h >= 12 || m > 60 || s > 60)
	{
		printf("ERROR!!!!!!!");
		exit(0);
	}

	while (1)
	{
		s++;
		if (s > 59)
		{
			m++;
		}
		if (m > 59)
		{
			h++;
		}
		printf("\nCLOCK :");
		printf("\n %02d : %02d : %02d", h, m, s);//Lines write down the output in 00:00:00 format
		Sleep(d);//Makes the while loop more real
		system("cls");//Clears the screen
	}

	return 0;
}