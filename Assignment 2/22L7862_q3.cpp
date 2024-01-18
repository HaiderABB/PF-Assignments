//#include<iostream>
//using namespace std;
//int main()
//{
//	float price = 19;
//	float quantity, totalPrice, discount;
//	cout << "                      Welcome to NETSOL Technologies  " << endl;
//	cout << "             Our general retail price of the product is = $" << price << endl;
//	cout << "--------------------------------------------------" << endl;
//	cout << "We are offering the following discount rates " << endl;
//	cout << "   Quantity                     Discount                     " << endl;
//	cout << "     10-19                       20 %" << endl;
//	cout << "     20-49                       30 %  " << endl;
//	cout << "     50-99                       40 %" << endl;
//	cout << "     100 or more                 50 %  " << endl;
//	cout << "--------------------------------------------------" << endl;
//	cout << "Enter the quantity you want to buy " << endl;
//	cin >> quantity;
//	if (quantity > 0)
//	{
//
//		if (quantity < 10)    //Conditions for discounts
//		{
//			cout << "The total price = " << quantity * price;
//		}
//		else if (quantity >= 10 && quantity <= 19)
//		{
//			totalPrice = quantity * price;
//			discount = (20 * totalPrice) / 100;
//			totalPrice = totalPrice - discount;
//		}
//		else if (quantity >= 20 && quantity <= 49)
//		{
//			totalPrice = quantity * price;
//			discount = (30 * totalPrice) / 100;
//			totalPrice = totalPrice - discount;
//		}
//		else if (quantity >= 50 && quantity <= 99)
//		{
//			totalPrice = quantity * price;
//			discount = (40 * totalPrice) / 100;
//			totalPrice = totalPrice - discount;
//		}
//		else if (quantity > 100)
//		{
//			totalPrice = quantity * price;
//			discount = (50 * totalPrice) / 100;
//			totalPrice = totalPrice - discount;
//		}
//
//
//		cout<< "The total price after discount is = $" << totalPrice << endl;
//
//	}
//
//
//	
//
//
//	else
//		cout << "Invalid Input" << endl;
//
//}