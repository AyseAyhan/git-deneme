#include<iostream>
using namespace std;
#define MAX 1000
int main()
{

	int a[MAX], i, size;
	cout << "\nEnter number of elements: ";
	cin >> size;
	for (i = 0; i < size; i++)
	{
		a[i] = rand() % 9+1;
		cout << "\na["<<i<<"]= " << a[i];
	}
	cout << endl;
	system("pause");

}