/*
В контейнере типа vector хранится набор целых чисел.
Создайте функторы для решения следующих задач:
■ Поиск минимального значения;
■ Поиск максимального значения; 
■ Поиск максимального значения;
■ Сортировка данных по убыванию;
■ Сортировка данных по убыванию;
■ Сортировка данных по возрастанию;
■ Сортировка данных по возрастанию;
■ Увеличение значений в контейнере на заданную константу;
■ Уменьшение значений в контейнере на заданную константу;
■ Уменьшение значений в контейнере на заданную константу;
■ Удаление элементов из контейнера которые равны искомому
значению
Не забывайте использовать алгоритмы там, где это
необходимо.
*/
#include <iostream>
#include <vector>
#include "VecOper.h"
using namespace std;

int main()
{
	vector<int> myVector = { 9, 5, 1, 3, 7, 4, 6, 8, 2 };
	VecOper operation;
	
	cout << " Min in arr: " << operation.minInArr(myVector) << endl;
	cout << " Max in arr: " << operation.maxInArr(myVector) << endl;
	operation.sortDescending(myVector);
	operation.showArr(myVector);
	operation.sortAscending(myVector);
	operation.showArr(myVector);
	operation.addToEvery(myVector, 1);
	operation.showArr(myVector);
	operation.takeFromEvery(myVector, 2);
	operation.showArr(myVector);
	operation.deleteIfIn(myVector, 28); 
	operation.showArr(myVector);
	operation.deleteIfIn(myVector, 9); 
	operation.deleteIfIn(myVector, 4); 
	operation.showArr(myVector);
	return 0;
}