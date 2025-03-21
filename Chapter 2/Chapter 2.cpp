#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "------------------------------------------------------- Chapter 2 -----------------------------------------------------" << endl;
	cout << "----------------------------------------------------------- 2.1 -------------------------------------------------------" << endl;
	cout << "Enter a degree in Celsius: ";
	double celsius;
	cin >> celsius;
	double fahrenheit = (9.0 / 5) * celsius + 32;
	cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
	cout << "----------------------------------------------------------- 2.2 -------------------------------------------------------" << endl;
	cout << "Enter the radius and length of a cylinder: ";
	double radius, length;
	cin >> radius >> length;
	double area = radius * radius * 3.14159;
	double volume = area * length;
	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;
	cout << "----------------------------------------------------------- 2.3 -------------------------------------------------------" << endl;
	cout << "Enter a value for feet: ";
	double feet;
	cin >> feet;
	double meters = feet * 0.305;
	cout << feet << " feet is " << meters << " meters." << endl;
	cout << "----------------------------------------------------------- 2.4 -------------------------------------------------------" << endl;
	double pounds;
	cout << "Enter a number in pounds: ";
	cin >> pounds;
	double kilograms = pounds * 0.454;
	cout << pounds << " pounds is " << kilograms << " kilograms." << endl;
	cout << "----------------------------------------------------------- 2.5 -------------------------------------------------------" << endl;
	cout << "Enter the subtotal and a gratuity rate: ";
	double subtotal, gratuityRate;
	cin >> subtotal >> gratuityRate;
	double gratuity = subtotal * gratuityRate / 100;
	double total = subtotal + gratuity;
	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;
	cout << "----------------------------------------------------------- 2.6 -------------------------------------------------------" << endl;
	cout << "Enter a number between 0 and 1000: ";
	int number;
	cin >> number;
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	cout << "The sum of the digits is " << sum << endl;
	cout << "----------------------------------------------------------- 2.7 -------------------------------------------------------" << endl;
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	int days = minutes / 1440;
	int years = days / 365;
	days %= 365;
	cout << minutes << " minutes is approximately " << years << " years and " << days << " days." << endl;
	cout << "----------------------------------------------------------- 2.8 -------------------------------------------------------" << endl;
	cout << "Enter the time zone offset to GMT: ";
	int offset;
	cin >> offset;
	long totalmilliseconds = time(0);
	totalmilliseconds += offset * 60 * 60;
	long totalSeconds = totalmilliseconds / 1000;
	long currentSecond = totalSeconds % 60;
	long totalMinutes = totalSeconds / 60;
	long currentMinute = totalMinutes % 60;
	long totalHours = totalMinutes / 60;
	long currentHour = totalHours % 24;
	cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currentSecond << endl;
	cout << "----------------------------------------------------------- 2.9 -------------------------------------------------------" << endl;
	cout << "Enter v0, v1, and t: ";
	double v0, v1, t;
	cin >> v0 >> v1 >> t;
	double acceleration = (v1 - v0) / t;
	cout << "The average acceleration is " << acceleration << endl;
	cout << "----------------------------------------------------------- 2.10 ------------------------------------------------------" << endl;
	cout << "Enter the amount of water in kilograms: ";
	double kilograms;
	cin >> kilograms;
	cout << "Enter the initial temperature: ";
	double initialTemperature;
	cin >> initialTemperature;
	cout << "Enter the final temperature: ";
	double finalTemperature;
	cin >> finalTemperature;
	double energy = kilograms * (finalTemperature - initialTemperature) * 4184;
	cout << "The energy needed is " << energy << endl;
	cout << "----------------------------------------------------------- 2.11 ------------------------------------------------------" << endl;
	cout << "Enter the number of years: ";
	int years;
	cin >> years;
	long long population = 312032486;
	long long secondsYear = 365 * 24 * 60 * 60;
	for (int i = 1; i <= years; i++) {
		population += secondsYear / 7 - secondsYear / 13 + secondsYear / 45;
	}
	cout << "The population in " << years << " years is " << population << endl;
	cout << "----------------------------------------------------------- 2.12 ------------------------------------------------------" << endl;
	cout << "Enter the speed and acceleration: ";
	double speed, acceleration;
	cin >> speed >> acceleration;
	double lengtht = (speed * speed) / (2 * acceleration);
	cout << "The minimum runway length for this airplane is " << lengtht << endl;
	cout << "----------------------------------------------------------- 2.13 ------------------------------------------------------" << endl;
	cout << "Enter the monthly saving amount: ";
	double savingAmount;
	cin >> savingAmount;
	double monthlyInterestRate = 0.05 / 12;
	double accountValue = 0;
	for (int i = 0; i < 6; i++) {
		accountValue = (savingAmount + accountValue) * (1 + monthlyInterestRate);
	}
	cout << "After the sixth month, the account value is " << accountValue << endl;
	cout << "----------------------------------------------------------- 2.14 ------------------------------------------------------" << endl;
	cout << "Enter the weight in pounds and height in inches: ";
	double weight, height;
	cin >> weight >> height;
	double kilograms2 = weight * 0.45359237;	
	double meters2 = height * 0.0254;
	double bmi = kilograms2 / pow(meters2, 2);
	cout << "BMI is " << bmi << endl;
	cout << "----------------------------------------------------------- 2.15 ------------------------------------------------------" << endl;
	cout << "Enter x1, y1, x2, y2, x3, y3: ";
	double x1, y1, x2, y2;
	cout << "Enter x1";
	cin >> x1;
	cout << "Enter x2";
	cin >> x1;
	cout << "Enter y1";
	cin >> y1;
	cout << "Enter y2";
	cin >> y2;
	double distance1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "the distance between the two points is " << distance1 << endl;
	cout << "----------------------------------------------------------- 2.16 ------------------------------------------------------" << endl;
	cout << "Enter the side: ";
	double side;
	cin >> side;
	double area2 = (3 * sqrt(3)) / 2 * pow(side, 2);
	cout << "The area of the hexagon is " << area2 << endl;
	cout << "----------------------------------------------------------- 2.17 ------------------------------------------------------" << endl;
	double ta, v;
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> ta;
	cout << "Enter the wind speed in miles per hour: ";
	cin >> v;
	double twc = 35.74 + 0.6215 * ta - 35.75 * pow(v, 0.16) + 0.4275 * ta * pow(v, 0.16);
	cout << "The wind-chill temperature is: " << twc << "�F" << endl;
	cout << "----------------------------------------------------------- 2.18 ------------------------------------------------------" << endl;
	cout << "x	 y     x^y" << endl;
	cout << "2.5 1.2   3.00281 " << endl;
	cout << "5.0 2.4   47.5914 " << endl;
	cout << "1.2 3.6   1.92776 " << endl;
	cout << "2.4 5.0   79.6262 " << endl;
	cout << "3.6 2.5   24.4899 " << endl;
	cout << "----------------------------------------------------------- 2.19 ------------------------------------------------------" << endl;
	cout << "Enter three points for a triangle: ";
	double z1, z2, z3, z4, z5, z6;
	cin >> z1 >> z2 >> z3 >> z4 >> z5 >> z6;
	double side1 = sqrt(pow(z3 - z1, 2) + pow(z4 - z2, 2));
	double side2 = sqrt(pow(z5 - z3, 2) + pow(z6 - z4, 2));
	double side3 = sqrt(pow(z1 - z5, 2) + pow(z2 - z6, 2));
	double s = (side1 + side2 + side3) / 2;
	double area3 = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	cout << "The area of the triangle is " << area3 << endl;
	cout << "----------------------------------------------------------- 2.20 ------------------------------------------------------" << endl;
	double x1, y1, x2, y2;
	cout << "Enter the coordinates of the first point (x1, y1): ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second point (x2, y2): ";
	cin >> x2 >> y2;
	double slope = (y2 - y1) / (x2 - x1);
	cout << "The slope of the line is: " << slope << endl;
	cout << "----------------------------------------------------------- 2.21 ------------------------------------------------------" << endl;
	cout << "Enter driving distance: ";
	double distance;
	cin >> distance;
	cout << "Enter miles per gallon: ";
	double milesPerGallon;
	cin >> milesPerGallon;
	cout << "Enter price per gallon: ";
	double pricePerGallon;
	cin >> pricePerGallon;
	double cost = (distance / milesPerGallon) * pricePerGallon;
	cout << "The cost of driving is: " << cost << endl;
	cout << "----------------------------------------------------------- 2.22 ------------------------------------------------------" << endl;
	cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
	double balance, annualInterestRate;
	cin >> balance >> annualInterestRate;
	double interest = balance * (annualInterestRate / 1200);
	cout << "The interest is " << interest << endl;
	cout << "----------------------------------------------------------- 2.23 ------------------------------------------------------" << endl;
	cout << "Enter investment amount: ";
	double investmentAmount;
	cin >> investmentAmount;
	cout << "Enter annual interest rate in percentage: ";
	double annualInterestRate2;
	cin >> annualInterestRate2;
	cout << "Enter number of years: ";
	int years2;
	cin >> years2;
	double futureInvestmentValue = investmentAmount * pow(1 + annualInterestRate2 / 1200, years2 * 12);
	cout << "Accumulated value is $" << futureInvestmentValue << endl;
	cout << "----------------------------------------------------------- 2.24 ------------------------------------------------------" << endl;

}


