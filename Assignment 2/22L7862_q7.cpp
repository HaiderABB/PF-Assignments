//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "  welcome to picture framing store " << endl;
//	cout << "-----------------------------------------------------" << endl;
//	float length, width, price, totalprice, newprice, area;
//	char yes, no, input1, input2, input3, r, f;
//	yes = '1';
//	no = '2';
//	r = '1';
//	f = '2';
//	
//
//	cout << "enter length of the picture : " << endl;
//	cin >> length;
//	cout << "enter width of the picture : " << endl;
//	cin >> width;
//	area = length * width;
//	cout << "-----------------------------------------------------" << endl;
//	
//	cout << "press 1 for regular frame and 2 for fancy frame : " << endl;
//	cin >> input1;
//
//	if (input1 == r)
//	{
//		price =(0.15)*(area);
//	}
//	else if (input1 == f)
//	{
//		price = (0.25) * area;
//	}
//	else
//		cout << "invalid input" << endl;
//
//	cout << "-----------------------------------------------------" << endl;
//	newprice = price + 0.07 + 0.02;
//
//	cout << "press 1 if you want to color the frame and 2 if you dont want to : " << endl;
//	cin >> input2;
//	if (input2 == yes)
//	{
//		newprice = newprice + 0.10;
//	}
//	else if(input2==no)
//	{
//		newprice = newprice;
//	}
//	else
//		cout << "invalid input" << endl;
//
//	cout << "-----------------------------------------------------" << endl;
//	cout << "press 1 if you want to put a crown on the frame and 2 if you dont want to : " << endl;
//	cin >> input3;
//	if (input3 == yes)
//	{
//		totalprice = newprice + 0.35;
//	}
//	else if (input3 == no)
//	{
//		totalprice = newprice;
//	}
//	else
//		cout << "invalid input" << endl;
//
//	cout << "the total cost is = $" << totalprice  << endl;
//
//
//}