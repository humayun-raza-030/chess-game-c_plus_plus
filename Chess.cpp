#include<iostream>
#include<fstream>
#include<string>
using namespace std;

char chessboard[8][8] =
{
	 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R',
	 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
	 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	 ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
	 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'
};
void printBoard(char chessbard[8][8])
{
	int count = 0;
	cout << "\t-";
	for (int row = 0; row < 8; row++)
	{
		cout << "--------";
	}
	cout << "\n";
	for (int col = 9; col >= 1; col--)
	{
		if (col > 1)
		{
			//cout << "\t|\t|\t|\t|\t|\t|\t|\t|\t|\n";
			cout << "   " << col - 1 << "  " << "\t|" << "   " << chessbard[count][0] << "  " << "\t|" << "   " << chessbard[count][1] << "  " << "\t|" << "   " << chessbard[count][2] << "  " << "\t|" << "   " << chessbard[count][3] << "  " << "\t|" << "   " << chessbard[count][4] << "  " << "\t|" << "   " << chessbard[count][5] << "  " << "\t|" << "   " << chessbard[count][6] << "  " << "\t|" << "   " << chessbard[count][7] << "  " << "\t|\n";// << "\t|" << "\t|" << "\t|" << "\t|" << "\t|" << "\t|" << "\t|" << "\t| \n";
			cout << "\t|\t|\t|\t|\t|\t|\t|\t|\t|\n";
			count++;
		}
		else
		{
			cout << "\t " << "   " << "a" << "  " << "\t " << "   " << "b" << "  " << "\t " << "   " << "c" << "  " << "\t  " << "  d" << "  " << "\t  " << "  e" << "\t  " << "  f" << "\t  " << "  g" << "\t  " << "  h" << "\t  \n";
			//cout << "\t|\t|\t|\t|\t|\t|\t|\t|\t|\n";
			return;
		}
		cout << "\t-";
		for (int row = 0; row < 8; row++)
		{
			cout << "--------";
		}
		cout << "\n";
	}
}
int task(int& digit, int& n1, int& n2, int& m1, int& m2, bool& istrue)
{

	char task[6], lett1, add1, lett2, add2;
	printBoard(chessboard);
	if (digit % 2 == 0)
	{
		cout << "\nPlayer 1\nEnter the task: ";
	}
	else
	{
		cout << "\nPlayer 2\nEnter the task: ";
	}
	cin.getline(task, 6);
	lett1 = task[0], add1 = task[1];;
	lett2 = task[3], add2 = task[4];
	system("cls");
	n1 = add1;
	n2 = add2;
	if (task[0] == 'e' && task[1] == 'n' && task[2] == 'd')
	{
		istrue = true;
		if (digit % 2 == 0)
		{
			cout << "\nPlayer 1 has resigned";
		}
		else
		{
			cout << "\nPlayer 2 has resigned";
		}
		return istrue;
	}
	if (lett1 == 'a')
	{
		m1 = 0;
	}
	else if (lett1 == 'b')
	{
		m1 = 1;
	}
	else if (lett1 == 'c')
	{
		m1 = 2;
	}
	else if (lett1 == 'd')
	{
		m1 = 3;
	}
	else if (lett1 == 'e')
	{
		m1 = 4;
	}
	else if (lett1 == 'f')
	{
		m1 = 5;
	}
	else if (lett1 == 'g')
	{
		m1 = 6;
	}
	else if (lett1 == 'h')
	{
		m1 = 7;
	}
	if (lett2 == 'a')
	{
		m2 = 0;
	}
	else if (lett2 == 'b')
	{
		m2 = 1;
	}
	else if (lett2 == 'c')
	{
		m2 = 2;
	}
	else if (lett2 == 'd')
	{
		m2 = 3;
	}
	else if (lett2 == 'e')
	{
		m2 = 4;
	}
	else if (lett2 == 'f')
	{
		m2 = 5;
	}
	else if (lett2 == 'g')
	{
		m2 = 6;
	}
	else if (lett2 == 'h')
	{
		m2 = 7;
	}
	if (n1 == 49)
	{
		n1 = 7;
	}
	else if (n1 == 50)
	{
		n1 = 6;
	}
	else if (n1 == 51)
	{
		n1 = 5;
	}
	else if (n1 == 52)
	{
		n1 = 4;
	}
	else if (n1 == 53)
	{
		n1 = 3;
	}
	else if (n1 == 54)
	{
		n1 = 2;
	}
	else if (n1 == 55)
	{
		n1 = 1;
	}
	else if (n1 == 56)
	{
		n1 = 0;
	}
	if (n2 == 49)
	{
		n2 = 7;
	}
	else if (n2 == 50)
	{
		n2 = 6;
	}
	else if (n2 == 51)
	{
		n2 = 5;
	}
	else if (n2 == 52)
	{
		n2 = 4;
	}
	else if (n2 == 53)
	{
		n2 = 3;
	}
	else if (n2 == 54)
	{
		n2 = 2;
	}
	else if (n2 == 55)
	{
		n2 = 1;
	}
	else if (n2 == 56)
	{
		n2 = 0;
	}
	return n1, n2, m1, m2;

}
bool player1(int& n1, int& m1, int& n2, int& m2)
{

	int diff, mdiff;
	char temp1;
	if (n2 >= n1)
	{
		diff = n2 - n1;
	}
	else
	{
		diff = n1 - n2;
	}
	if (m2 >= m1)
	{
		mdiff = m2 - m1;
	}
	else
	{
		mdiff = m1 - m2;
	}
	//int count1 = 0, count2 = 0, count3 = 0;

	if (chessboard[n1][m1] == 'p')
	{
		if (n1 == 6)
		{
			if (m1 == m2 && (diff <= 2 && diff >= 0))
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else if ((m2 == m1 + 1 && n2 == n1 - 1) || (m2 == m1 - 1 && n2 == n1 - 1))
			{
				if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B')
				{
					temp1 = chessboard[n1][m1];
					chessboard[n1][m1] = ' ';
					chessboard[n2][m2] = temp1;
					printBoard(chessboard);
					system("cls");
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (m1 == m2 && (diff <= 1 && diff >= 0) && chessboard[n2][m2] == ' ')
		{
			temp1 = chessboard[n1][m1];
			chessboard[n1][m1] = ' ';
			chessboard[n2][m2] = temp1;
			printBoard(chessboard);
			system("cls");
			if (n2 == 0)
			{
				cout << "\nTo What Chacter do you want to change the pawn with: -\n1)-Queen\t(Press q)\n2)-Bishop\t(Press b)\n3)-Knight\t(Press n)\n4)-Rookie\t(Press r))\n";
				cin >> chessboard[0][m2];
				while (chessboard[0][m2] != 'q' && chessboard[0][m2] != 'b' && chessboard[0][m2] != 'h' && chessboard[0][m2] != 'r')
				{
					cin >> chessboard[0][m2];
					//cout << "\nWrong Input\n";
					return true;
				}
			}
			else
				return true;

		}
		else if ((m2 == m1 + 1 && n2 == n1 - 1) || (m2 == m1 - 1 && n2 == n1 - 1))
		{
			if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				if (n2 == 0)
				{
					cout << "\nTo What Chacter do you want to change the pawn with: -\n1)-Queen\t(Press q)\n2)-Bishop\t(Press b)\n3)-Horse\t(Press h)\n4)-Rookie\t(Press r))\n";
					cin >> chessboard[0][m2];
					while (chessboard[0][m2] != 'q' && chessboard[0][m2] != 'b' && chessboard[0][m2] != 'h' && chessboard[0][m2] != 'r')
					{
						cin >> chessboard[0][m2];
						//cout << "\nWrong Input\n";
						return true;
					}
				}
				else
					return false;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'r')
	{
		if (m1 == m2 && diff >= 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B' || chessboard[n2][m2] == ' ')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (n1 == n2 && diff >= 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'b')
	{
		if (diff == mdiff && diff > 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == ' ' || chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				return true;
				system("cls");
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'q')
	{
		if (diff == mdiff && diff > 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == ' ' || chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (m1 == m2 && diff >= 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B' || chessboard[n2][m2] == ' ')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (n1 == n2 && diff >= 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'n')
	{
		if (n1 > n2)
		{
			if (n1 == n2 + 2)
			{
				if (m1 == m2 - 1 || m1 == m2 + 1)
				{
					if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else if (n1 == n2 + 1)
			{
				if (m1 == m2 - 2 || m1 == m2 + 2)
				{
					if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (n2 > n1)
		{
			if (n1 == n2 - 2)
			{
				if (m1 == m2 - 1 || m1 == m2 + 1)
				{
					if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else if (n1 == n2 - 1)
			{
				if (m1 == m2 - 2 || m1 == m2 + 2)
				{
					if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'K' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'k')
	{
		if (diff == 1)
		{
			if (m1 == m2 || mdiff == 1)
			{
				if (chessboard[n2][m2] == 'P' || chessboard[n2][m2] == 'R' || chessboard[n2][m2] == 'N' || chessboard[n2][m2] == 'Q' || chessboard[n2][m2] == 'B' || chessboard[n2][m2] == ' ')
				{
					temp1 = chessboard[n1][m1];
					chessboard[n1][m1] = ' ';
					chessboard[n2][m2] = temp1;
					printBoard(chessboard);
					system("cls");
					return true;
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else
	{
		system("cls");
		cout << "\nInvalid Move!!!\n";
		return false;
	}
}
bool player2(int& n1, int& m1, int& n2, int& m2)
{
	char temp1;
	int diff, mdiff;
	if (n2 >= n1)
	{
		diff = n2 - n1;
	}
	else
	{
		diff = n1 - n2;
	}
	if (m2 >= m1)
	{
		mdiff = m2 - m1;
	}
	else
	{
		mdiff = m1 - m2;
	}
	if (chessboard[n1][m1] == 'P')
	{
		if (n1 == 1)
		{
			if (m1 == m2 && (diff <= 2 && diff >= 0))
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else if ((m1 == m2 + 1 && n1 == n2 - 1) || (m1 == m2 - 1 && n1 == n2 - 1))
			{
				if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b')
				{
					temp1 = chessboard[n1][m1];
					chessboard[n1][m1] = ' ';
					chessboard[n2][m2] = temp1;
					printBoard(chessboard);
					system("cls");
				}

				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (m1 == m2 && (diff <= 1 && diff >= 0) && chessboard[n2][m2] == ' ')
		{
			temp1 = chessboard[n1][m1];
			chessboard[n1][m1] = ' ';
			chessboard[n2][m2] = temp1;
			printBoard(chessboard);
			system("cls");
			if (n2 == 7)
			{
				cout << "\nTo What Chacter do you want to change the pawn with: -\n1)-Queen\t(Press Q)\n2)-Bishop\t(Press B)\n3)-Knight\t(Press N)\n4)-Rookie\t(Press R))\n";
				cin >> chessboard[7][m2];
				while (chessboard[7][m2] != 'Q' && chessboard[7][m2] != 'B' && chessboard[7][m2] != 'N' && chessboard[7][m2] != 'R')
				{
					cin >> chessboard[7][m2];
					//cout << "\nWrong Input\n";
				}
				return true;
			}
			else
			{
				return true;
			}
		}
		else if ((m1 == m2 + 1 && n1 == n2 - 1) || (m1 == m2 - 1 && n1 == n2 - 1))
		{
			if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				if (n2 == 7)
				{
					cout << "\nTo What Chacter do you want to change the pawn with: -\n1)-Queen\t(Press Q)\n2)-Bishop\t(Press B)\n3)-Knight\t(Press N)\n4)-Rookie\t(Press R))\n";
					cin >> chessboard[7][m2];
					while (chessboard[7][m2] != 'Q' && chessboard[7][m2] != 'B' && chessboard[7][m2] != 'N' && chessboard[7][m2] != 'R')
					{
						cin >> chessboard[7][m2];
						//cout << "\nWrong Input\n";
					}
					return true;
				}
				else
				{
					return true;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'R')
	{
		if (m1 == m2 && diff >= 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (n1 == n2 && mdiff >= 0 && mdiff <= 7)
		{
			if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'B')
	{
		if (diff == mdiff && diff > 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == ' ' || chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'N')
	{
		if (n1 > n2)
		{
			if (n1 == n2 + 2)
			{
				if (m1 == m2 - 1 || m1 == m2 + 1)
				{
					if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else if (n1 == n2 + 1)
			{
				if (m1 == m2 - 2 || m1 == m2 + 2)
				{
					if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (n2 > n1)
		{
			if (diff == 2)
			{
				if (m2 == m1 - 1 || m2 == m1 + 1)
				{
					if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else if (diff == 1)
			{
				if (m2 == m1 - 2 || m2 == m1 + 2)
				{
					if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
					{
						temp1 = chessboard[n1][m1];
						chessboard[n1][m1] = ' ';
						chessboard[n2][m2] = temp1;
						printBoard(chessboard);
						system("cls");
						return true;
					}
					else
					{
						system("cls");
						cout << "\nInvalid Move!!!\n";
						return false;
					}
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n";
			return false;
		}
	}
	else if (chessboard[n1][m1] == 'Q')
	{
		if (m1 == m2 && diff >= 0 && diff <= 7)
		{
			if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else if (n1 == n2 && mdiff >= 0 && mdiff <= 7)
		{
			if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
			{
				temp1 = chessboard[n1][m1];
				chessboard[n1][m1] = ' ';
				chessboard[n2][m2] = temp1;
				printBoard(chessboard);
				system("cls");
				return true;
			}
			else if (diff == mdiff && diff > 0 && diff <= 7)
			{
				if (chessboard[n2][m2] == ' ' || chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'k' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b')
				{
					temp1 = chessboard[n1][m1];
					chessboard[n1][m1] = ' ';
					chessboard[n2][m2] = temp1;
					printBoard(chessboard);
					system("cls");
					return true;
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
	}
	else if (chessboard[n1][m1] == 'K')
	{
		if (diff == 1)
		{
			if (m1 == m2 || mdiff == 1)
			{
				if (chessboard[n2][m2] == 'p' || chessboard[n2][m2] == 'r' || chessboard[n2][m2] == 'n' || chessboard[n2][m2] == 'q' || chessboard[n2][m2] == 'b' || chessboard[n2][m2] == ' ')
				{
					temp1 = chessboard[n1][m1];
					chessboard[n1][m1] = ' ';
					chessboard[n2][m2] = temp1;
					printBoard(chessboard);
					system("cls");
					return true;
				}
				else
				{
					system("cls");
					cout << "\nInvalid Move!!!\n";
					return false;
				}
			}
			else
			{
				system("cls");
				cout << "\nInvalid Move!!!\n";
				return false;
			}
		}
		else
		{
			system("cls");
			cout << "\nInvalid Move!!!\n"; return false;
			return false;
		}
	}
	else
	{

		cout << "\nInvalid Move!!!\n";
		return false;
	}
}
/*bool check()
{
	int a = 0, b = 0, c=0, d=0, up = 0, down = 0, right = 0, left = 0;
	bool ver = false, ver1 = false;
	for (int i = 0; i < 8 && ver == false; i++)
	{
		for (int j = 0; j < 8 && ver == false; j++)
		{
			if (chessboard[i][j] == 'k')
			{
				a = i;
				b = j;
				cout << a << b;
				ver = true;
			}
		}
	}
	c = 7 - a;
	d = 7 - b;
	/*for (int i = 0; i < 8 && ver1 == false; i++)
	{
		for (int j = 0; j < 8 && ver1 == false; j++)
		{
			if (chessboard[i][j] == 'K')
			{
				c = i;
				d = j;
				ver = true;
			}
		}
	}
	if (ver == true)
	{
		for (int i = c; chessboard[a + c][b] == ' '; i--)
		{
			down++;
		}
		for (int i = a; chessboard[a - i][b] == ' '; i--)
		{
			up++;
		}
		for (int i = d; chessboard[a][b + i] == ' '; i--)
		{
			right++;
		}
		for (int i = b; chessboard[a][b - i] == ' '; i++)
		{
			left++;
		}
		cout << endl << up << down << right << left;
	}
	return 0;
}*/


int main()
{
instruction:
	string instr;
	cout << "\t\t\t\tWelcome to Chess Game!\nFor Classic game enter 'C_game'\nFor Load previous game enter 'L_game'\nTo Quit Game enter 'Q_game'\nTo resign between game enter 'end'\nTo move one peice to another enter first location and after one space enter second location\n";
	cin >> instr;
	if (instr[0] == 'C' && instr[1] == '_' && instr[2] == 'g' && instr[3] == 'a' && instr[4] == 'm' && instr[5] == 'e')
	{
	game:
		ofstream save;
		save.open("Data.txt");
		int n1, n2, m1, m2, digit = 0; bool istrue = false, verify = false, verify1 = false;
		task(digit, n1, n2, m1, m2, istrue);
		while (istrue == false)
		{
		again:
			//check();
			task(digit, n1, n2, m1, m2, istrue);
			if (digit % 2 == 0 && istrue == false)
			{
				system("cls");
				printBoard(chessboard);
				verify = player1(n1, m1, n2, m2);
				while (verify == false)
				{
					task(digit, n1, n2, m1, m2, istrue);
					system("cls");
					verify = player1(n1, m1, n2, m2);
				}
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						save << chessboard[i][j];
					}
				}
			}
			else if (digit % 2 != 0 && istrue == false)
			{
				system("cls");
				printBoard(chessboard);
				verify1 = player2(n1, m1, n2, m2);
				while (verify1 == false)
				{
					task(digit, n1, n2, m1, m2, istrue);
					system("cls");
					verify1 = player2(n1, m1, n2, m2);
				}
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						save << chessboard[i][j];
					}
				}
			}
			else
			{
				goto instruction;
			}
			//	cout << endl << n1 << "\t" << n2 << "\t" << m1 << m2 << "\t" << verify << "\t" << verify1;
			digit++;
		}
		save.close();
	}
	else if (instr[0] == 'L' && instr[1] == '_' && instr[2] == 'g' && instr[3] == 'a' && instr[4] == 'm' && instr[5] == 'e')
	{
		ifstream save("Data.txt");
		char cb[8][8];
		if (save.is_open())
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					while (save >> cb[i][j])
					{
						chessboard[i][j] = cb[i][j];
						cout << cb[i][j];
					}
				}
			}
			save.close();
		}
		goto game;
	}
	else if (instr[0] == 'Q' && instr[1] == '_' && instr[2] == 'g' && instr[3] == 'a' && instr[4] == 'm' && instr[5] == 'e')
	{
		cout << "\nYou have successfully Quit the game\n";
		system("pause");
		return 0;
	}
	else
	{
		cout << "\nInvalid entry!!\n";
		goto instruction;
	}
}