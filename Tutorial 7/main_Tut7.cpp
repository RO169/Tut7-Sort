#include<iostream>
#include<string>
using namespace std;


template <typename T>
T sort(T myArray[], int nElem);

int main()
{
	string strArray[] = { "a", "z", "d", "f", "R" };
	float fltArray[] = { 5.37, 7.65, 1.78, 6.23, 5.56 };
	int inArray[] = { 6, 5, 2, 8, 1 };

	int elems = 5;
	string sortStrArray[] = sort(strArray[5], elems);
	float sortFltArray[] = sort(fltArray[5], elems);
	int sortinArray[] = sort(inArray[5], elems);

	cout << "The string array is:\n" << print(strArray[5], 5) << endl;
	cout << "The sorted string array is:\n" << print(sortStrArray[5], 5) << endl;
	cout << "\n\nThe float array is:\n" << print(fltArray[5], 5) << endl;
	cout << "The sorted float array is:\n" << print(sortFltArray[5], 5) << endl;
	cout << "\n\nThe int array is:\n" << print(inArray[5], 5) << endl;
	cout << "The sorted int array is:\n" << print(sortinArray[5], 5) << "\n\n\n";


	system("Pause");
	return 0;
}

template <typename T>
T sort(T myArray[], int nElem)
{
		for (int i = 0; i < nElem, i++)
	{
		for (int j = i; j < nElem; j++)
		{
			if (myArray[j] < myArray[i])
				myArray[i] = myArray[j];
		}
	}
   		return myArray[];
}

template <typename T2>
void print(T2 anyArray[], int nElms)
{
	for (int i = 0; i < nElms; i++)
	{
		cout << anyArray[i] << "\t";
	}
}