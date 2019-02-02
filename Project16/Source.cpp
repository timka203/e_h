#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;
bool func1(char c)
{
	char a[9] = { ",./?:'! " };
	int f = 0;
	for (size_t i = 0; i < 9; i++)
	{
		if (c == a[i])
			f++;
	}
	if (f > 0)
		return true;
	else return false;
}
void task2()
{
	char c;
	cin >> c;
	cout << func1(c) << endl;
}
bool func(int a)
{
	if (a % 2 == 0)
		return true;
	else return false;

}

void task1() {
	int a = 1 + rand() % 100;
	printf("%d    %d\n", func(a),a);
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}