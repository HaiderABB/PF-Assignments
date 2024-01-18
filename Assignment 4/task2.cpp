//#include<iostream>
//using namespace std;
//int main()
//{
//	long long int emp_id[7] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
//	int hours[7];
//	double pay_rate[7];
//	double wages[7];
//	double wage;
//	for (int i = 0; i < 7; ++i)
//	{
//		int hours1 = -1;
//		double payRate = 5.05;
//		while (hours1 <= 0)
//		{
//			cout << "Enter hours worked by the employee at index " << i << " or whose ID is " << emp_id[i] << endl;
//			cin >> hours1;
//		}
//		hours[i] = hours1;
//		while (payRate < 6.00)
//		{
//			cout << "Enter appropriate pay rate :" << endl;
//			cin >> payRate;
//		}
//		pay_rate[i] = payRate;
//		cout << "-----------------------------" << endl;
//		wage = (payRate * hours1);
//		wages[i] = wage;
//	}
//	cout << "----------------------------------" << endl;
//	for (int l = 0; l < 7; ++l)
//	{
//		cout << "Employee ID" << "                   " << "Wages" << endl;
//		cout << emp_id[l] << "                             " << wages[l];
//		cout << endl;
//	}
//}