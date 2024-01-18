//#include<iostream>
//using namespace std;
//int main()
//{
//	char currency{}, PKR, USD, EURO;
//	PKR = '1';
//	USD = '2';
//	EURO = '3';
//
//
//	char InputCode, Handhi, Karahi, Haleem, Tikka, Creamy;
//	Handhi = '1';
//	Karahi = '2';
//	Tikka = '3';
//	Haleem = '4';
//	Creamy = '5';
//	float quantity;
//	float priceOfHandhi, priceOfKarahi, priceOfTikka, priceOfHaleem, priceOfCreamy, mealPrice, totalPrice, salesTax;
//	priceOfHandhi = 1800;
//	priceOfKarahi = 2000;
//	priceOfTikka = 2200;
//	priceOfHaleem = 500;
//	priceOfCreamy = 2500;
//
//
//
//	cout << "             Welcome to Bundhu Khan" << endl;
//	cout << "-------------------------------------------------------------------" << endl;
//	cout << "Code          " << "Dish                " << "Price per kg in Rs." << endl;
//	cout << "1            " << "Chicken Handhi         " << priceOfHandhi << endl;
//	cout << "2            " << "Chicken Karahi         " << priceOfKarahi << endl;
//	cout << "3            " << "Chicken Tikka          " << priceOfTikka << endl;
//	cout << "4            " << "Chicken Haleem         " << priceOfHaleem << endl;
//	cout << "5            " << "Creamy Chicken         " << priceOfCreamy << endl;
//	cout << "-------------------------------------------------------------------" << endl;
//	cout << "Enter the code for the dish you want : " << endl;
//	cin >> InputCode;
//	if (InputCode == Handhi || InputCode == Haleem || InputCode == Tikka || InputCode == Creamy || InputCode == Karahi)
//	{
//
//		if (InputCode == Handhi)
//		{
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the quantity in kgs : " << endl;
//			cin >> quantity;
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the currency 1 for PKR 2 for USD 3 for EURO : " << endl;
//			cin >> currency;
//			cout << "-------------------------------------------------------------------" << endl;
//			mealPrice = priceOfHandhi * quantity;
//			totalPrice = mealPrice;
//
//			if (mealPrice < 1000)
//			{
//
//				salesTax = 0;
//				totalPrice = salesTax + totalPrice;
//			}
//			else if (mealPrice > 1000 && mealPrice <= 3000)
//			{
//				salesTax = (2 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//			else if (mealPrice > 3000)
//			{
//				salesTax = (5 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//		}
//
//		else if (InputCode == Karahi)
//		{
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the quantity in kgs : " << endl;
//			cin >> quantity;
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the currency 1 for PKR 2 for USD 3 for EURO : " << endl;
//			cin >> currency;
//			cout << "-------------------------------------------------------------------" << endl;
//			mealPrice = priceOfKarahi * quantity;
//			totalPrice = mealPrice;
//			if (mealPrice < 1000)
//			{
//
//				salesTax = 0;
//				totalPrice = salesTax + totalPrice;
//			}
//			else if (totalPrice > 1000 && totalPrice <= 3000)
//			{
//				salesTax = (2 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//			else if (totalPrice > 3000)
//			{
//				salesTax = (5 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//		}
//
//
//		else if (InputCode == Haleem)
//		{
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the quantity in kgs : " << endl;
//			cin >> quantity;
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the currency 1 for PKR 2 for USD 3 for EURO : " << endl;
//			cin >> currency;
//			cout << "-------------------------------------------------------------------" << endl;
//			mealPrice = priceOfHaleem * quantity;
//			totalPrice = mealPrice;
//			if (mealPrice < 1000)
//			{
//
//				salesTax = 0;
//				totalPrice = salesTax + totalPrice;
//			}
//			else if (totalPrice > 1000 && totalPrice <= 3000)
//			{
//				salesTax = (2 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//			else if (totalPrice > 3000)
//			{
//				salesTax = (5 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//		}
//
//
//		else if (InputCode == Tikka)
//		{
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the quantity in kgs : " << endl;
//			cin >> quantity;
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the currency 1 for PKR 2 for USD 3 for EURO : " << endl;
//			cin >> currency;
//			cout << "-------------------------------------------------------------------" << endl;
//			mealPrice = priceOfTikka * quantity;
//			totalPrice = mealPrice;
//			if (mealPrice < 1000)
//			{
//
//				salesTax = 0;
//				totalPrice = salesTax + totalPrice;
//			}
//			else if (totalPrice > 1000 && totalPrice <= 3000)
//			{
//				salesTax = (2 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//			else if (totalPrice > 3000)
//			{
//				salesTax = (5 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//		}
//		if (InputCode == Creamy)
//		{
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the quantity in kgs : " << endl;
//			cin >> quantity;
//			cout << "-------------------------------------------------------------------" << endl;
//			cout << "Enter the currency 1 for PKR 2 for USD 3 for EURO : " << endl;
//			cin >> currency;
//			cout << "-------------------------------------------------------------------" << endl;
//			mealPrice = priceOfCreamy * quantity;
//			totalPrice = mealPrice;
//			if (mealPrice < 1000)
//			{
//
//				salesTax = 0;
//				totalPrice = salesTax + totalPrice;
//			}
//			else if (totalPrice > 1000 && totalPrice <= 3000)
//			{
//				salesTax = (2 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//			else if (totalPrice > 3000)
//			{
//				salesTax = (5 * totalPrice) / 100;
//				totalPrice = totalPrice + salesTax;
//			}
//		}
//
//	}
//	else 
//	cout << "Invalid Input" << endl;
//	cout << "-------------------------------------------------" << endl;
//	if (currency == PKR)
//	{
//		cout << "The price of your meal is = Rs" << mealPrice << endl;
//		cout << "The sales tax on your meal is = Rs" << salesTax << endl;
//		cout << "The total price of your order is = Rs" << totalPrice << endl;
//	}
//	else if (currency == USD)
//	{
//		cout << "The price of your meal is = $" << mealPrice / 237.71 << endl;
//		cout << "The sales tax on your meal is =$ " << salesTax / 237.71 << endl;
//		cout << "The total price of your order is = $" << totalPrice / 237.71 << endl;
//
//	}
//
//
//	else if (currency == EURO)
//	{
//		cout << "The price of your meal is = " << mealPrice / 237.56 << endl;
//		cout << "The sales tax on your meal is = Euro" << salesTax / 237.56 << endl;
//		cout << "The total price of your order is = Euro" << totalPrice / 237.56 << endl;
//
//	}
//
//	else
//		cout << "Invalid Input" << endl;
//}