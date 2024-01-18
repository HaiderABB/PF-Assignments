//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	int count = 0;
//	int num;
//	const int max=9, min=0;
//	int lottery_array[5];
//	int user_array[5];
//	int size = sizeof(user_array) / sizeof(int);
//	cout << "WELCOME TO THE LOTTERY " << endl;
//	cout << "------------------------------------" << endl;
//	cout << "Initialize an array of size 5" << endl;
//	for (int i = 0; i < size; ++i)
//	{
//		cin >> user_array[i];
//	}
//	cout << "------------------------------------" << endl;
//	srand(time(0));
//	for (int j = 0; j < size; ++j)
//	{
//		num = (rand() % (max - min + 1)) + min;
//		lottery_array[j] = num;
//	}
//	for (int k = 0; k < size; ++k)
//	{
//		cout << lottery_array[k] << "   ";
//	}
//	cout << endl;
//	cout << "------------------------------------" << endl;
//	for (int m = 0; m < size; ++m)
//	{
//		if (lottery_array[m] == user_array[m])
//		{
//			cout << "The numbers at index " << m << " match " << endl;
//			++count;
//		}
//	}
//	if (count == 5)
//		cout << "Congrats you won the lottery " << endl;
//	else 
//		cout << "Better luck next time" << endl;
//}