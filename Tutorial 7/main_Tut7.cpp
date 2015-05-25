#include<iostream>
using namespace std;


template <typename T>
T sort(T myArray[], int nElem);

int main()
{

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