#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class VecOper
{
public:
	int minInArr(const vector<int>&);
	int maxInArr(const vector<int>&);
	void sortDescending(vector<int>&);
	void sortAscending(vector<int>&);
	void addToEvery(vector<int>&, int);
	void takeFromEvery(vector<int>&, int);
	void deleteIfIn(vector<int>&, int);
	void showArr(vector<int>&);
};