#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int board(int a[3][3], int player)
{
	int position;
	char player1[20] = "Player 1:";
	char player2[20] = "Player 2:";

	printf("Player 1:o      Player 2:x\n\n\n");
	printf("_%c_|_%c_|_%c_\n", a[0][0], a[0][1], a[0][2]);
	printf("_%c_|_%c_|_%c_\n", a[1][0], a[1][1], a[1][2]);
	printf(" %c | %c | %c\n", a[2][0], a[2][1], a[2][2]);
	if (player == 1)
	{
		printf("Enter the value of position for %s", player1);
	}
	else
	{
		printf("Enter the value of position for %s", player2);
	}
	scanf("%d", &position);
	return position;
}

void main()
{
	int a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}, k = 1, position;
	int player, i;
	for (i = 0; i <= 9; i++)
	{
		/* For player 2 */
		if (((a[0][0] == a[1][1]) && (a[1][1] == a[2][2])) && a[0][0] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // first diagonal condition
		}
		else if (((a[0][0] == a[0][1]) && (a[0][1] == a[0][2])) && a[0][0] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // first row condition
		}
		else if (((a[0][0] == a[1][0]) && (a[1][0] == a[2][0])) && a[0][0] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // 1st column condition
		}
		else if (((a[0][2] == a[1][1]) && (a[1][1] == a[2][0])) && a[0][2] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // 2nd diagonal condition
		}
		else if (((a[1][0] == a[1][1]) && (a[1][1] == a[1][2])) && a[1][1] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // 2nd row condition
		}
		else if (((a[2][0] == a[2][1]) && (a[2][1] == a[2][2])) && a[2][0] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // 3rd row condition
		}
		else if (((a[0][1] == a[1][1]) && (a[1][1] == a[2][1])) && a[0][1] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // 2nd column condition
		}
		else if (((a[0][2] == a[1][2]) && (a[1][2] == a[2][2])) && a[0][2] == 'x')
		{
			printf("Game Over Player 2 Won");
			break; // 3rd column conditon
		}

		/*  For Player 1 */
		if (((a[0][0] == a[1][1]) && (a[1][1] == a[2][2])) && a[0][0] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // first diagonal condition
		}
		else if (((a[0][0] == a[0][1]) && (a[0][1] == a[0][2])) && a[0][0] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // first row condition
		}
		else if (((a[0][0] == a[1][0]) && (a[1][0] == a[2][0])) && a[0][0] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // 1st column condition
		}
		else if (((a[0][2] == a[1][1]) && (a[1][1] == a[2][0])) && a[0][2] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // 2nd diagonal condition
		}
		else if (((a[1][0] == a[1][1]) && (a[1][1] == a[1][2])) && a[1][1] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // 2nd row condition
		}
		else if (((a[2][0] == a[2][1]) && (a[2][1] == a[2][2])) && a[2][0] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // 3rd row condition
		}
		else if (((a[0][1] == a[1][1]) && (a[1][1] == a[2][1])) && a[0][1] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // 2nd column condition
		}
		else if (((a[0][2] == a[1][2]) && (a[1][2] == a[2][2])) && a[0][2] == 'o')
		{
			printf("Game Over Player 1 Won");
			break; // 3rd column conditon
		}

		if (i % 2 == 0)
		{
			player = 1;
		}
		else
		{
			player = 2;
		}
		position = board(a, player);
		system("cls");
		if (player == 1)
		{
			if (position == 1)
			{
				a[0][0] = 'o';
			}
			else if (position == 2)
			{
				a[0][1] = 'o';
			}
			else if (position == 3)
			{
				a[0][2] = 'o';
			}
			else if (position == 4)
			{
				a[1][0] = 'o';
			}
			else if (position == 5)
			{
				a[1][1] = 'o';
			}
			else if (position == 6)
			{
				a[1][2] = 'o';
			}
			else if (position == 7)
			{
				a[2][0] = 'o';
			}
			else if (position == 8)
			{
				a[2][1] = 'o';
			}
			else if (position == 9)
			{
				a[2][2] = 'o';
			}
		}
		if (player == 2)
		{
			if (position == 1)
			{
				a[0][0] = 'x';
			}
			else if (position == 2)
			{
				a[0][1] = 'x';
			}
			else if (position == 3)
			{
				a[0][2] = 'x';
			}
			else if (position == 4)
			{
				a[1][0] = 'x';
			}
			else if (position == 5)
			{
				a[1][1] = 'x';
			}
			else if (position == 6)
			{
				a[1][2] = 'x';
			}
			else if (position == 7)
			{
				a[2][0] = 'x';
			}
			else if (position == 8)
			{
				a[2][1] = 'x';
			}
			else if (position == 9)
			{
				a[2][2] = 'x';
			}
		}
	}
	getch();
}