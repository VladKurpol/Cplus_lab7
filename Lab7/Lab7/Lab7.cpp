#include "pch.h"
#include <iostream>
#include <queue>        // подключаем заголовочный файл очереди
#include <string>       // заголовочный файл для работы со строками типа string
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Создание очереди." << "\n";

	queue<int>* queue1 = new queue<int>;
	queue<int>* queue2 = new queue<int>;

	std::cout << "Создание массива." << "\n";
	std::cout << "Введите в массив числа: " << "\n";

	int massive[10];
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << i << ") ";
		std::cin >> massive[i];
	}
	std::cout << "Проверка элементов на четность и нечетность." << "\n";

	for (size_t i = 0; i < 10; i++)
	{
		if (massive[i] % 2 == 0)
		{
			queue1->push(massive[i]);
			std::cout << "queue1 / " << massive[i] << "\n";
		}
		else if (massive[i] % 2 != 0)
		{
			queue2->push(massive[i]);
			std::cout << "queue2 / " << massive[i] << "\n";
		}
	}
	
	std::cout << "Указатели на первую очередь:" << "\n";
	int *f = &queue1->front();
	int *l = &queue1->back();

	std::cout << f << "\n" << l << "\n";

	std::cout << "Указатели на вторую очередь:" << "\n";
	int *f1 = &queue2->front();
	int *l1 = &queue2->back();

	std::cout << f1 << "\n" << l1 << "\n";

	return 0;
}
