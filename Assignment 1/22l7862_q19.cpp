//
//
//
//
//
//
////THE FOLLOWING PROGRAM TAKES HEIGHT IN FEETS AND INCHES AS INPUT AND THEN COVERTS IT INTO CENTIMETERS
//
//
//
//
//
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int feet, inches, totalInches, feetTo_Inches; // The first two variales take input in feet and inches, Third one is used for calculating Total Inches and last one is used to convert feet into inches
//	float lengthInCenti;
//	const int INCHES = 12;             //There are 12 inches in a feet so we take it as a constant
//	const float inchesTo_Centi = 2.54; //There are 2.54 centimeters in 1 inch, we take it as a constant
//	
//	cout << "*****************************************************************************\n\t\t\t\tWelcome to Height Converter Calculator\n****************************************************************************" << endl;
//	
//	cout << "Enter your height in feet and inches : " << endl;
//	cin >> feet >> inches;
//
//	cout << "Your height is " << feet << "'" << inches << " feet" << endl;
//	cout << "----------------------------------------------------------------" << endl;
//	
//	feetTo_Inches = feet * INCHES;  //It first converts the feet into inches 
//	totalInches = feetTo_Inches + inches; //It adds and calculates total inches
//
//
//	cout << "Your height in Inches is = " << totalInches << endl; //displays height in inches
//	cout << "----------------------------------------------------------------" << endl;
//
//	lengthInCenti = (totalInches) * (inchesTo_Centi); // It is the formula that converts the Inches into centimeters
//
//	cout << "Your height in Centimeters is = " << lengthInCenti << endl; //displays height in centimeters
//
//
//
//	
//
//	
//    
//
//}