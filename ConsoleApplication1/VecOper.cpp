#include "VecOper.h"

int VecOper::minInArr(const vector<int>& vector)
{
	return *min_element(vector.begin(), vector.end());
}

int VecOper::maxInArr(const vector<int>& vector)
{
	return *max_element(vector.begin(), vector.end());
}

void VecOper::sortDescending(vector<int>& vector)
{
	sort(vector.begin(), vector.end());
	reverse(vector.begin(), vector.end());

}

void VecOper::sortAscending(vector<int>& vector)
{
	sort(vector.begin(), vector.end());

}

void VecOper::addToEvery(vector<int>& vector, int val)
{
	for_each(vector.begin(), vector.end(), [val](int& n) { n += val; });
}

void VecOper::takeFromEvery(vector<int>& vector, int val)
{
	for_each(vector.begin(), vector.end(), [val](int& n) { n -= val; });
}

void VecOper::deleteIfIn(vector<int>& vector, int val)
{
	vector.erase(remove(vector.begin(), vector.end(), val), vector.end());
}

void VecOper::showArr(vector<int>& vector)
{
	for (auto el : vector)
	{
		cout << el << " ";
	}
	cout << endl;

}