//#include<iostream>
//using namespace std;
//int main()
//{
//	char choice = 'Y';
//	int choice1, nthTerm, num1, num2 , sum = 0, start, end, nthTerm1;
//	cout << "Welcome to the menu" << endl << "\n\n";
//	cout << "Press 1                 For nth term of the series" << endl;
//	cout << "Press 2                 For first n numbers of the series" << endl;
//	cout << "Press 3                 For fabionacci numbers between m and n" << endl;
//	cout << "-------------------------------------------------" << endl;
//	while (choice == 'Y')
//	{
//		cout << "Enter your choice : " << endl;
//		cin >> choice1;
//		num1 = -1;
//		num2 = 1;
//		if (choice1 == 1)
//		{
//			cout << "Enter nth term : " << endl;
//			cin >> nthTerm;
//			for (int count = nthTerm; count >= 0; --count)
//			{
//				sum = num1 + num2;
//				num1 = num2;
//				num2 = sum;
//			}
//			cout << "The nth term is = " << sum << endl;
//		}
//		else if (choice1 == 2)
//		{
//			cout << "Enter how many terms do you want: " << endl;
//			cin >> nthTerm1;
//			for (int count1 = nthTerm1; count1 > 0; --count1)
//			{
//				sum = num1 + num2;
//				num1 = num2;
//				num2 = sum;
//				cout << sum << ", ";
//			}
//		}
//		else if (choice1 == 3)
//		{
//			cout << "Enter a starting limit:" << endl;
//			cin >> start;
//			cout << "Enter an ending limit: " << endl;
//			cin >> end;
//			sum = num1 + num2;
//			num1 = num2;
//			num2 = sum;
//			while (sum <= end)
//			{
//				sum = num1 + num2;
//				num1 = num2;
//				num2 = sum;
//				if (sum >= start && sum <= end)
//				{
//					cout << sum << ", ";
//				}
//			}
//			cout << endl;
//		}
//		cout << "Enter Y if you want to repeat it or not:" << endl;
//		cin >> choice;
//	}
//	cout << "BYE-BYE" << endl;
//}