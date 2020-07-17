#include <iostream>
#include <list>
#include <string>
#include "HashTable.h"

using namespace std;

int main()
{
	int choice = 0;
	int value = 0;
	HashTable<int> tables(20);
	cout << "Count: " << tables.Hashing("24");
	do
		{
			cout << "\n**************\n";
			cout << "\n1. Insert";
			cout << "\n2. Delete";
			cout << "\n3. Display";
			cout << "\n4. Display";
			cout << "\n5. Exit";
			cout << "\n\nPlease enter the # listed above: ";
			cin >> choice;
			switch (choice)
			{
				//Find
				case 1:
					tables.Insert("Emergency", 911);
					cout << "Phone Number: " <<tables.Retrieve("Emergency");
					break;
			}
		} while (choice != 99);
		system("pause");
		return 0;
}