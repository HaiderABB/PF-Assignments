//#include<iostream>
//using namespace std;
//int main()
//{
//	int correct_answer[20] = { 66,68,65,65,67,65,66,65,67,68,66,67,68,65,68,67,67,66,68,65 };
//	int user_answer[20], count = 0, n = 0;
//	char answer;
//	int answer_copy;
//	int incorrect_answer[20];
//	for (int i = 0; i < 20; ++i)
//	{
//		cout << "Enter the correct option for question " << i + 1 << endl;
//		cin >> answer;
//		while (answer < 'A' || answer>'D')
//		{
//
//			cout << "Enter the correct option " << endl;
//			cin >> answer;
//		}
//		answer_copy = int(answer);
//		user_answer[i] = answer_copy;
//	}
//	cout << "---------------------------------" << endl;
//	for (int j = 0; j < 20; ++j)
//	{
//		if (user_answer[j] == correct_answer[j])
//		{
//			++count;
//		}
//	}
//	if (count >= 15)
//		cout << "You have passed the exam" << endl;
//	else
//		cout << "You have failed" << endl;
//	cout << "The correct answers are: " << count << endl;
//	cout << "The total incorrect answers are :" << 20 - count << endl;
//	cout << "--------------------------------------------------" << endl;
//	cout << "The question numbers of incorrect answers are : " << endl;
//	for (int k= 0; k < 20; ++k)
//	{
//		if (user_answer[k] != correct_answer[k])
//		{
//			incorrect_answer[n] = k + 1;
//			++n;
//		}
//	}
//	for (int w = 0; w < n; ++w)
//		cout << incorrect_answer[w] << "\t";
//}