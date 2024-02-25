#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int zadacha;
	std::cout << " какое задание вы хотите проверить? 1, 2, 3, 4 ";
	std::cin >> zadacha;
	//Переменные для задания1
	int number;
	int sum1;
	int sum2;
	//Переменные для задания2
	int number2;
	int number2_1;
	int number2_2;
	int number2_3;
	int number2_4;
	//Переменные для задания3
	int number3_1;
	int number3_2;
	int number3_3;
	int number3_4;
	int number3_5;
	int number3_6;
	int number3_7;



	//Переменные для задания4(не сделала)


	if (zadacha == 1)
	{
		std::cout << "Введите целое шестизначное число";
		std::cin >> number;
		if (number < 1000000 || number > 999999) {
			std::cout << "Введите шестизначное число";
		}
		else {
			sum1 = (number / 100000 % 10) + (number / 10000 % 10) + (number / 1000 % 10);
			sum2 = (number / 100 % 10) + (number / 10 % 10) + (number % 10);

			if (sum1 == sum2)
			{
				std::cout << "число счастливoe";
			}
			else {
				std::cout << "число не счастливoe";
			}
		}
	}
	else if (zadacha == 2)
	{
		std::cout << "Введите целое четырёхзначное число";
		std::cin >> number2;
		if (number2 > 999 && number2 << 9999)
		{
			number2_1 = number2 / 1000 % 10;
			number2_2 = number2 / 100 % 10;
			number2_3 = number2 / 10 % 10;
			number2_4 = number2 % 10;
			std::cout << "Новое число: " << number2_2 << number2_1 << number2_4 << number2_3;
		}
		else
		{
			std::cout << "Число длжно быть четырёхзначным";
		}


	}
	else if (zadacha == 3)
	{
		std::cout << "Введите 1 число";
		std::cin >> number3_1;
		std::cout << "Введите 2 число";
		std::cin >> number3_2;
		std::cout << "Введите 3 число";
		std::cin >> number3_3;
		std::cout << "Введите 4 число";
		std::cin >> number3_4;
		std::cout << "Введите 5 число";
		std::cin >> number3_5;
		std::cout << "Введите 6 число";
		std::cin >> number3_6;
		std::cout << "Введите 7 число";
		std::cin >> number3_7;

		if (number3_1 > number3_2 && number3_1 > number3_3 && number3_1 > number3_4 && number3_1 > number3_5 && number3_1 > number3_6 && number3_1 > number3_7)
		{
			std::cout << number3_1;
		}
		else if (number3_2 > number3_1 && number3_2 > number3_3 && number3_2 > number3_4 && number3_1 > number3_5 && number3_1 > number3_6 && number3_1 > number3_7)
		{
			std::cout << number3_2;
		}
		else if (number3_3 > number3_1 && number3_3 > number3_2 && number3_3 > number3_4 && number3_3 > number3_5 && number3_3 > number3_6 && number3_3 > number3_7)
		{
			std::cout << number3_3;
		}
		else if (number3_4 > number3_1 && number3_4 > number3_2 && number3_4 > number3_3 && number3_4 > number3_5 && number3_4 > number3_6 && number3_4 > number3_7)
		{
			std::cout << number3_4;
		}
		else if (number3_5 > number3_1 && number3_5 > number3_2 && number3_5 > number3_4 && number3_5 > number3_3 && number3_5 > number3_6 && number3_5 > number3_7)
		{
			std::cout << number3_5;
		}
		else if (number3_6 > number3_2 && number3_6 > number3_3 && number3_6 > number3_4 && number3_6 > number3_5 && number3_6 > number3_1 && number3_6 > number3_7)
		{
			std::cout << number3_6;
		}
		else
		{
			std::cout << number3_7;
		}
	}
	else //Задание 4 не сделала
	{

	}






	return 0;
}