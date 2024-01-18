//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "welcome to the menu " << endl << "\n\n";
//	cout << "digit                            function" << endl;
//	cout << " 1                               factorial" << endl;
//	cout << " 2                               permutation" << endl;
//	cout << " 3                               combination" << endl;
//	cout << " 4                               combination through different formula" << endl;
//	cout << " 5                               exit" << endl;
//	cout << "----------------------------------------------------" << endl;
//	int select;
//	long long int count, objects, objectforperm, diff, objectforcomb;
//	long long int fact = 1, fact1 = 1, fact3 = 1, fact4 = 1;
//	long long int perm, comb;
//	cout << "enter a digit for selection : " << endl;
//	cin >> select;
//	if (select > 0 && select <= 5)
//	{
//		if (select == 1)
//		{
//			int num;
//
//			cout << "enter a number to calculate factorial of: " << endl;
//			cin >> num;
//			if (num == 0)
//			{
//				cout << "the factorial of " << num << " = 1" << endl;
//			}
//			else if (num > 0)
//			{
//				for (count = num; count > 0; --count)
//				{
//					fact = fact * count;
//				}
//				cout << "the factorial of " << num << " = " << fact;
//			}
//		}
//		else if (select == 2)
//		{
//			cout << "enter total objects" << endl;
//			cin >> objects;
//			cout << "Enter objects for permutation :" << endl;
//			cin >> objectforperm;
//			diff = objects - objectforperm;
//			if (diff == 0)
//			{
//				fact1 = 1;
//				for (count = objects; count >0; --count)
//				{
//					fact = fact * count;
//				}
//				perm = fact / fact1;
//				cout << "the permutation is = " << perm << endl;
//			}
//			else if (diff > 0)
//			{
//				for (count = diff; count > 0; --count)
//				{
//					fact1 = fact1 * count;
//				}
//				for (count = objects; count > 0; --count)
//				{
//					fact = fact * count;
//				}
//				perm = fact / fact1;
//				cout << "the permutation is = " << perm << endl;
//			}
//			else if (diff < 0)
//			{
//				cout << "invalid input" << endl;
//			}
//			
//		}
//		else if (select == 3)
//		{
//			cout << "enter total objects :" << endl; 
//			cin >> objects;
//			cout<<" enter objects for combination:" << endl;
//			cin >> objectforcomb;
//			diff = objects - objectforcomb;
//			if (diff == 0)
//			{
//				fact1 = 1;
//				for (count = objects; count > 0; --count)
//				{
//					fact = fact * count;
//				}
//				for (count = objectforcomb; count > 0; --count)
//				{
//					fact3 = fact3 * count;
//				}
//				comb = fact / (fact1*fact3);
//				cout << "the combination is = " << comb << endl;
//			}
//			else if (diff > 0)
//			{
//				for (count = diff; count > 0; --count)
//				{
//					fact1 = fact1 * count;
//				}
//				for (count = objects; count > 0; --count)
//				{
//					fact = fact * count;
//				}
//				for (count = objectforcomb; count > 0; --count)
//				{
//					fact3 = fact3 * count;
//				}
//				comb = fact / (fact1 * fact3);
//				cout << "the combinations are = " << comb << endl;
//			}
//			else
//				cout << "invalid input" << endl;
//			
//		}
//		else if (select == 4)
//		{
//			cout << "enter total objects and objects for permutation:" << endl;
//			cin >> objects >> objectforperm;
//			cout << "enter total objects for combination : " << endl;
//			cin >> objectforcomb;
//			if (objectforcomb < objects)
//			{
//				diff = objects - objectforperm;
//				if (diff == 0)
//				{
//					fact1 = 1;
//					for (count = objects; count > 0; --count)
//					{
//						fact = fact * count;
//					}
//					perm = fact / fact1;
//					for (count = objectforcomb; count > 0; --count)
//					{
//						fact3 = fact3 * count;
//					}
//					comb = perm / fact3;
//					cout << "the number of combinations are = " << comb << endl;
//				}
//				else if (diff > 0)
//				{
//					for (count = diff; count > 0; --count)
//					{
//						fact1 = fact1 * count;
//					}
//					for (count = objects; count > 0; --count)
//					{
//						fact = fact * count;
//					}
//					perm = fact / fact1;
//					for (count = objectforcomb; count > 0; --count)
//					{
//						fact3 = fact3 * count;
//					}
//					comb = perm / fact3;
//					cout << "the number of combinations are = " << comb << endl;
//				}
//				else
//					cout << "invalid input" << endl;
//			}
//			else
//				cout << "invalid input" << endl;	
//		}
//		else if (select == 5)
//		{
//		cout << "bye-bye" << endl;
//		}
//	}
//	else
//		cout << "invalid input" << endl;
//}