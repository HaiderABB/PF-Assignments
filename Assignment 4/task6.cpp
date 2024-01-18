//#include<iostream>
//using namespace std;
//bool addElementA(int setA[], int capacityA, int& no_elementsA, int element)
//{
//	setA[no_elementsA] = element;
//	++no_elementsA;
//	return true;
//}
//bool addElementB(int setB[], int capacityB, int& no_elementsB, int element)
//{
//	setB[no_elementsB] = element;
//	++no_elementsB;
//	return true;
//}
//void displaySet(int set[], int no_elements)
//{
//	for (int i = 0; i < no_elements; ++i)
//		cout << set[i] << "\t";
//}
//bool remove_element(int set[], int& no_elements, int capacity, int element)
//{
//	int c = 0;
//	for (int i = 0; i < no_elements; ++i)
//	{
//		if (set[i] == element)
//		{
//			set[i] = 0;
//			++c;
//			break;
//		}
//	}
//	if (c == 0)
//		return false;
//	else
//		return true;
//}
//void searchElement(int set[], int no_elements, int element)
//{
//	int c = 0;
//	for (int i = 0; i < no_elements; ++i)
//	{
//		if (set[i] == element)
//		{
//			cout << "Value found " << endl;
//			++c;
//			break;
//		}
//	}
//	if (c == 0)
//		cout << "Value not found  " << endl;
//}
//int searchElementPosition(int set[], int no_elements, int element)
//{
//	int c = 0;
//	for (int i = 0; i < no_elements; ++i)
//	{
//		if (set[i] == element)
//		{
//			cout << "Value found at index " << i << endl;
//			++c;
//			break;
//		}
//	}
//	if (c == 0)
//		cout << "Value not found at any index " << endl;
//	return 0;
//}
//bool isEmpty(int no_elements)
//{
//	if (no_elements == 0)
//	{
//		cout << "The set is empty " << endl;
//		return true;
//	}
//	else
//	{
//		cout << "The set is not empty " << endl;
//		return false;
//	}
//}
//void isFull(int no_elements, int capacity)
//{
//	if (no_elements == capacity)
//		cout << "The set is full " << endl;
//	else
//		cout << "The set is not full " << endl;
//}
//int main()
//{
//	const int capacityA = 8;
//	const int capacityB = 6;
//	const int capacityC = 10;
//	int setA[8], sizeA, no_elementsA = 0;
//	sizeA = sizeof(setA) / sizeof(int);
//	int setB[7], sizeB, no_elementsB = 0;
//	sizeB = sizeof(setB) / sizeof(int);
//	int setC[capacityC], sizeC, no_elementsC = 0;
//	sizeC = sizeof(setC) / sizeof(int);
//	int element, choice;
//	int peepoo = 0;
//	while (peepoo == 0)
//	{
//		cout << "-------------------------------------------" << endl;
//		cout << "Keys " << "                        " << "Functions" << endl;
//		cout << "1" << "  " << "Add element in set A " << endl;
//		cout << "2" << "  " << "Add element in set B " << endl;
//		cout << "3" << "  " << "Remove element from set A " << endl;
//		cout << "4" << "  " << "Remove element from set B " << endl;
//		cout << "5" << "  " << "Search in set A " << endl;
//		cout << "6" << "  " << "Search in set B " << endl;
//		cout << "7" << "  " << "Search by index set A " << endl;
//		cout << "8" << "  " << "Search by index set B " << endl;
//		cout << "9" << "  " << "Check for empty set " << endl;
//		cout << "10" << "  " << "Check for Full set " << endl;
//		cout << "11" << "  " << "Display set A " << endl;
//		cout << "12" << "  " << "Display set B " << endl;
//		cout << "-------------------------------------------" << endl;
//		cout << "Enter a choice " << endl;
//		cin >> choice;
//		while (choice < 1 || choice>14)
//		{
//			cout << "Enter again " << endl;
//			cin >> choice;
//		}
//		if (choice == 1)
//		{
//			cout << "Enter element that you want to store " << endl;
//			cin >> element;
//			addElementA(setA, capacityA, no_elementsA, element);
//		}
//		else if (choice == 2)
//		{
//			cout << "Enter element that you want to store " << endl;
//			cin >> element;
//			addElementB(setB, capacityB, no_elementsB, element);
//		}
//		else if (choice == 3)
//		{
//			cout << "Enter the element to be removed from set A" << endl;
//			cin >> element;
//			cout << endl;
//			remove_element(setA, no_elementsA, capacityA, element);
//			cout << endl;
//		}
//		else if (choice == 4)
//		{
//			cout << "Enter the element to be removed from set B" << endl;
//			cin >> element;
//			cout << endl;
//			remove_element(setB, no_elementsB, capacityB, element);
//			cout << endl;
//		}
//		else if (choice == 5)
//		{
//			cout << "Enter the element to be searched in set A " << endl;
//			cin >> element;
//			searchElement(setA, no_elementsA, element);
//			cout << endl;
//			cout << "----------------------------" << endl;
//		}
//		else if (choice == 6)
//		{
//			cout << "Enter the element to be searched in set B " << endl;
//			cin >> element;
//			searchElement(setB, no_elementsB, element);
//			cout << endl;
//			cout << "----------------------------" << endl;
//		}
//		else if (choice == 7)
//		{
//			cout << "Enter the element to be searched in set A " << endl;
//			cin >> element;
//			searchElementPosition(setA, no_elementsA, element);
//			cout << endl;
//			cout << "----------------------------" << endl;
//		}
//		else if (choice == 8)
//		{
//			cout << "Enter the element to be searched in set B " << endl;
//			cin >> element;
//			searchElementPosition(setB, no_elementsB, element);
//			cout << endl;
//			cout << "----------------------------" << endl;
//		}
//		else if (choice == 9)
//		{
//			cout << "CHECKING FOR EMPTY SET " << endl;
//			cout << "Enter A if you want to check for set A and B if you want to check for set B " << endl;
//			char choice;
//			cin >> choice;
//			while (choice < 'A' || choice>'B')
//			{
//				cout << "Enter again " << endl;
//				cin >> choice;
//			}
//			if (choice == 'A')
//				isEmpty(no_elementsA);
//			else
//				isEmpty(no_elementsB);
//			cout << endl;
//			cout << "----------------------------" << endl;
//		}
//		else if (choice == 10)
//		{
//			cout << "CHECKING FOR FULL SET " << endl;
//			cout << "Enter A if you want to check for set A and B if you want to check for set B " << endl;
//			char choice;
//			cin >> choice;
//			while (choice < 'A' || choice>'B')
//			{
//				cout << "Enter again " << endl;
//				cin >> choice;
//			}
//			if (choice == 'A')
//				isFull(no_elementsA, capacityA);
//			else
//				isFull(no_elementsB, capacityB);
//			cout << endl;
//		}
//		else if (choice == 11)
//		{
//			displaySet(setA, no_elementsA);
//			cout << endl;
//		}
//		else if (choice == 12)
//		{
//			displaySet(setB, no_elementsB);
//			cout << endl;
//		}
//		cout << "Enter 0 for another operation or 1 to terminate " << endl;
//		cin >> peepoo;
//	}
//}