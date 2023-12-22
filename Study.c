#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int study(void);
int rest(void);

int main(void)
{
	int choice = 1;
	while(choice != 0)
	{
		printf("Enter 1 to study and 2 to rest 3 to exit : ");
		scanf("%i", &choice);
		system("cls");
		if (choice == 1)
		{
			study();
		}
		else if(choice == 2)
		{
			rest();
		}
		else if(choice == 3)
		{
			return 0;
		}
		else
		{
			printf("Invalid input\n");
		}
	}
	
}

int study(void)
{
	int study_time = 0;
	printf("How long do you want to study : ");
	scanf("%i", &study_time);
	time_t start, end;
    start = time(NULL);
    end = time(NULL);
    printf("Study Now...\n");
    while ((int)difftime(end, start) != (int) study_time)
    {
        end = time(NULL);
        // printf("Time taken to print sum is %1.f seconds\n", difftime(end, start));
    }
    system("cls");
    printf("Take a break now\n");
    printf("Press Entrer to exit....\n");
    getch();
	return 0;
}

int rest(void)
{
	int break_time = 0;
	printf("How long do you want to rest : ");
	scanf("%i", &break_time);
	time_t start, end;
    start = time(NULL);
    end = time(NULL);
    printf("Rest Now...\n");
    while ((int)difftime(end, start) != (int) break_time)
    {
        end = time(NULL);
        // printf("Time taken to print sum is %1.f seconds\n", difftime(end, start));
    }
    system("cls");
    printf("Study now\n");
    printf("Press Entrer to exit....\n");
    getch();
	return 0;
}