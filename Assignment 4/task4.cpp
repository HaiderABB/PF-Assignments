//#include<iostream>
//using namespace std;
//void new_array(int arrayA[],int arrayB[],int sizea,int sizeb)
//{
//	int arrayC[13], size, store;
//	size = sizeof(arrayC) / sizeof(int);
//	for (int i = 0,j=0; i < 6; ++i)
//	{
//		int num;
//		if (arrayA[i] % 2 == 0)
//		{
//			num = arrayA[i];
//			arrayC[j] = num;
//			++j;
//			store = j;
//		}
//	}
//	for (int k = 0, l =store ; k < 7; ++k)
//	{
//		int num1;
//		if (arrayB[k] % 2 == 0)
//		{
//			num1 = arrayB[k];
//			arrayC[l] = num1;
//			++l;
//			store = l;
//		}
//	}
//	for (int b = 7-1, n = store; b >= 0; --b)
//	{
//		int num2;
//		if (arrayB[b] % 2 != 0)
//		{
//			num2 = arrayB[b];
//			arrayC[n] = num2;
//			++n;
//			store = n;
//		}
//	}
//	for (int a = 6 - 1, m = store; a >= 0; --a)
//	{
//		int num3;
//		if (arrayA[a] % 2 != 0)
//		{
//			num3 = arrayA[a];
//			arrayC[m] = num3;
//			++m;
//		}
//	}
//	//--------------------------------------------------------
//	for (int o = 0; o < 13; ++o)
//	{
//		cout << arrayC[o] << "   ";
//	}
//}
//int main()
//{
//	int arrayA[6],  arrayB[7];
//	int sizea = sizeof(arrayA) / sizeof(int);
//	int sizeb = sizeof(arrayB) / sizeof(int);
//	cout << "---------------------------" << endl;
//	cout << "enter the elements of array a of size 6: (must be positive) " << endl;
//
//	for (int i = 0; i < 6; ++i)
//	{
//		int num = -9;
//		while (num < 0)
//		{
//			cin >> num;
//			if (num < 0)
//				cout << "Enter a positive number try again :" << endl;
//		}
//		arrayA[i] = num;
//	} 
//	cout << "---------------------------" << endl;
//	cout << "enter the elements of array b of size 7: (must be positive) " << endl;
//	for (int j = 0; j < 7; ++j)
//	{
//		int num1 = -9;
//		while (num1 < 0)
//		{
//			cin >> num1;
//			if (num1 < 0)
//				cout << "Enter a positive number try again" << endl;
//		}
//		arrayB[j] = num1;
//	}
//	new_array(arrayA, arrayB, sizea, sizeb);
//}