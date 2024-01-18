//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "              WELCOME TO ROCK,PAPER,SCISSORS  " << endl;
//
//	char rock, paper, scissors, input1,input2;
//	rock = '2';
//	paper = '1';
//	scissors = '3';
//	cout << "----------------------------------------------" << endl;
//	cout << " 2 is for rock, 1 is for paper, 3 is for scissors " << endl;
//	cout << "Enter first players option : " << endl;
//	cin >> input1;
//
//	if ((int)input1 >= 49 && (int)input1 <= 51)
//	{
//		cout << "Enter second players option : " << endl;
//		cin >> input2;
//		if ((int)input2 >= 49 && (int)input2 <= 51)
//		{
//
//			if (input1 == input2)
//			{
//
//				cout << "Its a Draw" << endl;
//			}
//			else if (input1 == paper && input2 == rock)
//			{
//				cout << "Player 1 wins " << endl;
//			}
//			else if (input1 == paper && input2 == scissors)
//			{
//
//				cout << "Player 2 wins " << endl;
//			}
//			else if (input1 == rock && input2 == paper)
//			{
//
//				cout << "Player 2 wins " << endl;
//			}
//			else if (input1 == scissors && input2 == paper)
//			{
//
//				cout << "Player 1 wins " << endl;
//			}
//			else if (input1 == rock && input2 == scissors)
//			{
//
//
//				cout << "Player 1 wins " << endl;
//			}
//			else if (input1 == scissors && input2 == rock)
//			{
//
//				cout << "Player 2 wins " << endl;
//			}
//			else if (input1 == scissors && input2 == paper)
//			{
//
//				cout << "Player 1 wins " << endl;
//			}
//			else if (input1 == paper && input2 == scissors)
//			{
//
//				cout << "Player 2 wins " << endl;
//			}
//		}
//		else
//			cout << "Invalid Input" << endl;
//	}
//	    else
//	   cout << "Invalid Input" << endl;
//	
//
//}