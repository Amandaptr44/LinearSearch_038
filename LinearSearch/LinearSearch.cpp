#include <iostream>
using namespace std;


int arr[20]; //Array to be searched
int n; //Number of element in the array
int i; //Index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//Accept array elements
	cout << "\n-------------------\n";
	cout << "Enter array elements \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}



void LinearSearch()
{
	char ch;
	int comparison; //Number of comparisons

	do                                                           //Langkah 3
	{
		//Accept the number to be searched
		cout << "/nEnter the element you want to search: ";      //Langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)                                  //Langkah 2 dan 4
		{
			comparison++;
			if (arr[i] == item)                                   //Langkah 5 a found
			{
				cout << "\n" << item << "found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)                                               //Langkah 5 b not found
			cout << "\n" << item << "not found un the array\n";
		cout << "n\Number of the comparison: " << comparison << endl;

		cout << "n\Continue search (y/n) : ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	LinearSearch();
}