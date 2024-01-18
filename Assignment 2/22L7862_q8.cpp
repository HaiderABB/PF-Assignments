//#include<iostream>
//using namespace std;
//int main()
//{
//	char m, f, input;
//	float weight, wristmeasurement, a1, a2, bodyfat, b, bodyfatper, a3, a4, a5, waistmea, hipmea, forearm;
//	m = 'm';
//	f = 'f';
//	cout << "               welcome to body fat calculator  " << endl;
//	cout << "---------------------------------------------------------" << endl;
//
//	cout << "enter m for male and f for female : " << endl;
//	cin >> input;
//
//	if (input == m || input == f)
//	{
//		if (input == m)
//		{
//			cout << "enter body weight :" << endl;
//			cin >> weight;
//			cout << "enter waist measurement : " << endl;
//			cin >> waistmea;
//			a1 = (weight * 1.082) + 94.42;
//			a2 = waistmea * 4.15;
//			b = a1 - a2;
//			bodyfat = weight - b;
//			bodyfatper = (bodyfat * 100) / weight;
//
//			cout << "the body fat percentage = " << bodyfatper << endl;
//		}
//		else if (input == f)
//		{
//			cout << "enter body weight :" << endl;
//			cin >> weight;
//			cout << "enter wrist measurement : " << endl;
//			cin >> wristmeasurement;
//			cout << "enter waist measurement : " << endl;
//			cin >> waistmea;
//			cout << "enter forearm measurement : " << endl;
//			cin >> forearm;
//			cout << "enter hip measurement : " << endl;
//			cin >> hipmea;
//			a1 = (weight * 0.732) + 8.987;
//			a2 = wristmeasurement / 3.140;
//			a3 = (waistmea * 0.157);
//			a4 = hipmea * 0.249;
//			a5 = forearm * 0.434;
//			b = a1 + a2 + a5 - a3 - a4;
//			bodyfat = weight - b;
//			bodyfatper = (bodyfat * 100) / weight;
//
//			cout << "your body fat percentage is = " << bodyfatper << endl;
//		}
//
//
//	}
//	else
//		cout << "invalid input " << endl;
//
//
//}