//#include<iostream>
//#include <cstdlib>
//#include <ctime>
//#include <windows.h> 
//#include <conio.h> 
//
//using namespace std;
//
//const int rows = 10;
//const int cols = 20;
//int mox = rows / 2;
//int moy = cols / 2;
//int score = 0;
//void intmap(char map[rows][cols]);
//void printMap(char map[][cols]);
//void item(char map[][cols]);
//void movement(char map[][cols], char dir);
//bool win(char map[][cols]);
//
//int main()
//{
//	char map[rows][cols];
//	intmap(map);
//	item(map);
//	printMap(map);
//	char input;
//	input = _getch();
//	while (true)
//	{
//
//		if (_kbhit())
//		{
//			input = _getch();
//		}
//		else
//		{
//			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//			SetConsoleTextAttribute(hConsole, /*(1 << 2)*/  16);
//			if (moy == 19 || moy == 0 || mox == 9 || mox == 0 || input == 'q')
//			{
//				cout << "Game Over!" << endl;
//				break;
//			}
//			movement(map, input);
//			Sleep(200);
//			system("cls");
//			printMap(map);
//			cout << "Your Score Is: " << score << endl;
//		}
//
//	}
//
//	system("pause");
//}
//
//void intmap(char map[][cols])
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (i == 0 || i == rows - 1)
//			{
//				map[i][j] = '-';
//			}
//			else if (j == 0 || j == cols - 1)
//			{
//				map[i][j] = '|';
//			}
//			else
//			{
//				map[i][j] = ' ';
//			}
//		}
//	}
//}
//
//void printMap(char map[][cols])
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << map[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void item(char map[][cols])
//{
//	SetConsoleOutputCP(CP_UTF8);
//	map[rows / 2][cols / 2] = '@';
//	int s1 = 1, e1 = 8;
//	int s2 = 4, e2 = 18;
//	srand(time(0));
//	for (int i = 0; i < 5; i++)
//	{
//
//		int ran = s1 + rand() % (e1 - s1 + 1);
//		int ran1 = s2 + rand() % (e2 - s2 + 1);
//		map[ran][ran1] = '+';
//	}
//}
//
//void movement(char map[][cols], char input)
//{
//	switch (input)
//	{
//	case 'w':
//		map[mox][moy] = ' ';
//		mox = mox - 1;
//		if (map[mox][moy] == '+')
//		{
//			score = score + 100;
//		}
//		map[mox][moy] = '@';
//
//		break;
//	case 'a':
//		map[mox][moy] = ' ';
//		moy = moy - 1;
//		if (map[mox][moy] == '+')
//		{
//			score = score + 100;
//		}
//		map[mox][moy] = '@';
//		break;
//	case 's':
//		map[mox][moy] = ' ';
//		mox = mox + 1;
//		if (map[mox][moy] == '+')
//		{
//			score = score + 100;
//		}
//		map[mox][moy] = '@';
//		break;
//	case 'd':
//		map[mox][moy] = ' ';
//		moy = moy + 1;
//		if (map[mox][moy] == '+')
//		{
//			score = score + 100;
//		}
//		map[mox][moy] = '@';
//		break;
//	default:
//		cout << "Invalid key. Use W, A, S, D to move or Q to quit." << endl;
//		break;
//	}
//}
//bool win(char map[][cols])
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (map[i][j] != '+')
//			{
//				return 1;
//			}
//			else return 0;
//		}
//	}
//}
