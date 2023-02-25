#include <iostream>
#include<ctime>
#include<cstdlib>


int sum(int num1, int num2 = 3, int num3 = 23, int num4 = 11, int num5 = 32) {
	int sum = num1 + num2 + num3 + num4 + num5;
	return sum;
}

inline double mean(int num1, int num2, int num3) {
	double mean =(double)(num1 + num2 + num3) / 3;
	return mean;
}

int max(int num1, int num2, int num3) {
	std::cout << " INT\n ";
	int max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}

double max(double num1, double num2, double num3) {
	std::cout << " DOUBLE\n ";
	double max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}

short max(short num1, short num2, short num3) {
	std::cout << " short\n ";
	short max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}

template <typename T>
T el_arr(T arr1[], const int length) {
	int n;
	for (int i = 0; i < length; i++) {
		int counter = 0;
		n = arr1[i];
		for (int j = 1; j <= n; j++) 
			if (n % j == 0) 
				counter++;		
		if (counter == 2)
			return n;
	}
	
}

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << " Задача 1 \n";
	int a;
	std::cout << " Введите число - ";
	std::cin >> a;
	std::cout << " Сумма всех чисел равна - " << sum(a) << "\n\n";

	std::cout << " Задача 2 \n";
	int q,w,e;
	std::cout << " Введите три числa - ";
	std::cin >> q >> w >> e;
	std::cout << " Среднееарифметическое всех чисел равна - " << mean(q,w,e) << "\n\n";

	std::cout << " Задача 3 \n";
	std::cout << max(320, 330,430) << '\n';
	std::cout << max(5.8, 5.2, 8.2) << '\n';
	std::cout << max((short) - 370,(short) - 15,(short) - 3) << '\n';
	std::cout << '\n';

	std::cout << " Задача 4 \n Исходный массив \n";
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 50;
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
	std::cout << " Первое простое число в массиве, это : " << el_arr(arr, size) << '\n';















	return 0;

}