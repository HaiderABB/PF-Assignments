//#include<iostream>
//using namespace std;
//int main()
//{
//	long limit, withDraw, minWith;
//	minWith = 500;
//	int note = 500;
//	int note1 = 1000;
//	int i;
//	int note2 = 5000;
//
//
//	int counter;
//	int counter1; int counter2;
//	int counter3;
//
//	cout << "                    WELCOME TO ATM" << endl;
//	cout << "-------------------------------------------------------" << endl;
//	cout << "Enter your daily limit : " << endl;
//	cin >> limit;
//	cout << "Enter your withdraw amount : " << endl;
//	cin >> withDraw;
//	if (withDraw < limit && withDraw % 500 == 0&&withDraw>500)  //checks whether the number entered is a multiple of 500
//	{
//		if (withDraw == 1000)
//		{
//			cout << "2 notes of 500" << endl;
//		}
//		else if (withDraw == 1500)
//		{
//			counter = withDraw - note;
//			counter1 = counter / note1;
//			cout << counter1 << " note of " << note1 << " and " << 1 << " note of " << note << endl;
//		}
//		else if (withDraw >= 2000)
//		{
//			if (withDraw < 6000)
//			{
//            	if (withDraw % 8 != 0)
//				{
//					counter = withDraw - note;
//					i = 1;
//					counter1 = counter / 1000;
//					cout << counter1 << " notes of " << note1 << " and " << i << " notes of " << note << endl;
//
//				}
//				else if (withDraw % 2 == 0)
//				{			counter = withDraw - note - note;
//				        	i = 2;
//					        counter1 = counter / note1;
//					        cout << counter1 << " notes of " << note1 << " and " << i << " notes of " << note << endl;
//				}
//			}
//			else if (withDraw >= 6000)
//			{
//				if (withDraw % 8 != 0)
//				{
//					counter = withDraw - note;
//					i = 1;
//					counter1 = counter / note2;
//					counter2 = counter1 * 5000;
//					counter2 = withDraw - counter2;
//					counter3 = counter2 / note1;
//					cout << counter1 << " notes of " << note2 << " , " << counter3 << " notes of " << note1 << " and " << i << " notes of " << note << endl;
//				}
//				else if (withDraw % 2 == 0)
//				{
//					counter = withDraw - note - note;
//					i = 2;
//					counter1 = counter / note2;
//					counter2 = counter1 * 5000;
//					counter2 = counter - counter2;
//					counter3 = counter2 / note1;
//					cout << counter1 << " notes of " << note2 << " , " << counter3 << " notes of " << note1 << " and " << i << " notes of " << note << endl;
//				}
//			}
//		}
//	}
//	else if (withDraw <= 500)
//	{
//		cout << "Withdraw is less than minimum" << endl;
//	}
//	
//}
//
//	  