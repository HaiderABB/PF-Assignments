//#include<iostream>
//#include<cstdlib>
//#include<time.h>
//#include<conio.h>
//using namespace std;
//int main()
//{
//	int sum1 = 0, sum2 = 0, random1, random2, count = 1, hold, hold1, count1 = 1, count2 = 0, count3 = 0;
//	srand(time(0));
//	cout << "Press any key" << endl;
//	do
//	{
//		cout << "Time for match "<<count1 << endl;
//		_getch();
//		cout << "Press any key" << endl;
//		random1 = (rand() % 6) + 1;
//		hold = random1;
//		sum1 = sum1 + hold;
//		cout << "Player 1 turn is : " << hold << endl;
//		if (sum1 <= 20)
//		{
//			cout << "Player 1 total is = " << sum1 << endl;
//		}
//		else
//		{
//			cout <<" move cannot be made :" << endl;
//			sum1 = sum1 - hold;
//		}
//		cout << "-----------------------------------------------" << endl;
//		random2 = (rand() % 6) + 1;
//		hold1 = random2;
//		sum2 = sum2 + hold1;
//		cout << "Player 2 turn is : " << hold1 << endl;
//		if (sum2 <= 20)
//		{
//			cout << "Player 2 total is = " << sum2 << endl;
//		}
//		else
//		{
//			cout << " move cannot be made : " << endl;
//			sum2 = sum2 - hold1;
//		}
//		cout << "-----------------------------------------------" << endl;
//		if (sum1 == 20)
//		{
//			++count2;
//			++count1;
//			cout << "Player 1 wins" << endl;
//			cout << "-----------------------------------------------" << endl;
//			sum1 = 0;
//			sum2 = 0;
//		}
//		else if (sum2 == 20)
//		{
//			++count3;
//			++count1;
//			cout << "Player 2 wins" << endl;
//			cout << "-----------------------------------------------" << endl;
//			sum2 = 0;
//			sum1 = 0;
//		}
//		if (count2 == 3&&count3<3)
//		{
//			count1 = 6;
//		}
//		else if (count3 == 3 && count2 < 3)
//		{
//			count1 = 6;
//		}
//	} while (count1!=6);
//}