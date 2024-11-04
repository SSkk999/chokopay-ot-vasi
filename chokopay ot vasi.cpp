

#include <iostream>
#include <string>
using namespace std;
//struct MyStruct
//{
//    double number;
//    double number1;
//    string i;
//};
//
//void plus1(MyStruct sd) {
//    cout << sd.number << "+" << sd.number1 << sd.i << "=" << (sd.number + sd.number1) << sd.i << endl;
//}
//void minus2(MyStruct sd) {
//    cout << sd.number << "-" << sd.number1 << sd.i << "=" << (sd.number - sd.number1) << sd.i << endl;
//}
//void dil(MyStruct sd) {
//    cout << sd.number << "*" << sd.number1 << sd.i << "=" << (sd.number * sd.number1) << sd.i << endl;
//}
//void mnosh(MyStruct sd) {
//    cout << sd.number << "/" << sd.number1 << sd.i << "=" << (sd.number / sd.number1) << sd.i << endl;
//}
//
//
//
//int main()
//{
//    MyStruct d;
//    d.number = 122;
//    d.number1 = 23;
//    d.i = "i";
//    plus1(d);
//    minus2(d);
//    dil(d);
//    mnosh(d);
//}








////////////////////////////222222222222222
enum EntityType {avto,mexanick};
struct car
{
	double enginevolume;
	double tightnessengine;
	double wheeldiameter;
	string color;
	EntityType type;

};
void input(car& sd) {
	int choice = 0;
	cout << "enter  enginevolume:" ;
	cin >> sd.enginevolume;
	cout << "enter tightnessengine:";
	cin >> sd.tightnessengine;
	cout << "enter wheeldiameter:";
	cin >> sd.wheeldiameter;
	cin.ignore();

	cout << "enter color:";
	getline(cin, sd.color);
	cout << "enter corobka 1-avto 2-mexanick:";
	cin >> choice;
	if (choice == avto)
	{
		sd.type = avto;
		
	}
	if (choice == mexanick)
	{
		sd.type = mexanick;
	}



}
void output(car sd) {
	cout <<"enginevolume:" << sd.enginevolume << endl;
	cout <<"tightnessengine:" << sd.tightnessengine << endl;
	cout <<"wheeldiameter:" << sd.wheeldiameter << endl;
	cout << "color:" << sd.color << endl;
	if (sd.type == avto)
	{
		cout <<"corobka:" << "auto" << endl;
	}
	else {
		cout << "corobka:" << "mexanick" << endl;
	}



}

void seeck(car sd) {
	for ( int i = 0;  i < 5;  i++)
	{
		int choice;
		cout << "what are you looking for? 1-enginevolume\n 2- tightnessengine\n 3- wheeldiameter\n 4-color\n 5-type ";
		cin >> choice;
		switch (choice)
		{
		case 1: {
			cout <<"enginevolume:" << sd.enginevolume << endl;
			break;
		}
		case 2: {
			cout << "tightnessengine:" << sd.tightnessengine << endl;
			break;
		}
		case 3: {
			cout << "wheeldiameter:" << sd.wheeldiameter << endl;
			break;
		}
		case 4: {
			cout << "color:" << sd.color << endl;
			break;
		}
		case 5: {
			if (sd.type == avto)
			{
				cout << "corobka:" << "auto" << endl;
			}
			else {
				cout << "corobka:" << "mexanick" << endl;
			}
			break;
		}
		default:
			break;
		}
	}


}






int main()

{
	car mod;
	while (true) {
		int choose = 0;
		cout << "1-input \n2-output \n3-seck ";
		cin >> choose;
	

		switch (choose)
		{
		case 1: {
			input(mod);
			break;
		}
		case 2: {
			output(mod);
			break;
		}
		case 3: {
			seeck(mod);
			break;
		}
		default:
			break;
		}

	}
}

