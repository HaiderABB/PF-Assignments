//#include<iostream>
//using namespace std;
//void sort(int array[])
//{
//	int maxIndex = 0, minIndex = 0, min, max, temp3, temp4;
//	for (int j = 1; j < 7; ++j)
//	{
//		if (array[j] > array[maxIndex])
//		{
//			maxIndex = j;
//			max = array[maxIndex];
//		}
//		else if (array[j] < array[minIndex])
//		{
//			minIndex = j;
//			min = array[minIndex];
//		}
//	}
//	for (int k = 1; k < 7; ++k)
//	{
//		if (k == 1)
//		{
//			int temp1, temp2;
//			temp1 = array[k];
//			temp2 = array[k + 1];
//		}
//		array[k] = max;
//		array[k+1]=min;
//		if (k % 2 != 0)
//		{
//			for (int s = k + 2, n = s + 2; n < 7-1; n = n + 2)
//			{
//				if (array[s] < array[n])
//				{
//					temp3 = array[n];
//					array[n] = array[s];
//					array[s] = temp3;
//				}
//			}
//		}
//		else
//		{
//			for (int m = k + 2, b = m + 2; b < 7 ; b = b + 2)
//			{
//				if (array[m] > array[b])
//				{
//					temp4 = array[b];
//					array[b] = array[m];
//					array[m] = temp4;
//				}
//			}
//		}
//	}
//	cout << "----------------------" << endl;
//	for (int y = 0; y < 7; ++y)
//		cout << array[y] << "  ";
//}
//int main()  
//{ 
//	int array[7], num;
//	cout << "Enter the values of an array for size 7" << endl;
//	for (int i = 0; i < 7; ++i)
//	{
//		cin >> num;
//		array[i] = num;
//	}
//	cout << "------------------------" << endl;
//	sort(array);
//}