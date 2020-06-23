int first_day_correct[] = {
53700,170100,794,62600,97700,24300,17700,94,3100,34100,2500,593000,803,18300,118400,378000,337100,3700,163000,636400,667800,137700,6100,7170,8125,7191000,8489000
};
int second_day_correct[] = {
65800,172500,897,64600,101700,25700,21200,127,3400,36800,2700,660700,1000,21100,125700,418000,366700,4200,166800,667800,69970,141400,6600,7647,8627,7243000,8665000
};
int third_day_correct[] = {
83800,177600,1100,66200,105800,27000,24700,163,3800,39800,3000,720100,1200,24500,128200,467700,396200,4800,170100,699700,732200,143300,7170,8125,9009,7374000,8792000
};
int user_first_day_correct;
int user_second_day_correct;
int user_third_day_correct;
double w1;
double w11;
double w2;
double w3;
double w21;
double w31;
double w4;
double w5;
double w6;
double w7;
double w8;
double w81;
double w9;
double w91;
double w911;
int correct_init;
int correct_init1;
int correct_init2;
int correct_init3;
int correct_init4;
int q;
int st;
int Nnasel;
unsigned long long N2;
unsigned long long N1;
int d;
int b;
unsigned long long infect_day;
double stats;
int user_correct_death;
int death;
int D1;
double death_stats;
#include <iostream>
#include "windows.h"
#include <conio.h>
using namespace std;
int main() {
	cout << ("The program may not be accurate") << endl;
	Sleep(500);
	cout << ("The program have accuraty 85 - 99%") << endl;
	Sleep(500);
	cout << ("Instagram @viiiiiiiitya") << endl;
	Sleep(500);
	cout << ("Please stay home") << endl;
	Sleep(500);
	cout << ("How many people live in 1km^2") << endl;
	cin >> Nnasel;
	cout << ("The program is learning, please wait") << endl;
	for (int a = 1; a < 1000000; a++) { //Перша стадія навчання 90% точності
		w1 = 2 + rand() % 1000;
		q = second_day_correct[st] - first_day_correct[st];
		correct_init = second_day_correct[st] + q + q*Nnasel / w1;//Нейрон
		if (correct_init < third_day_correct[st]) {

			if (correct_init/third_day_correct[st] * 100 > 90)
				break;
		}
		else {
			if (third_day_correct[st] / correct_init * 100 > 90)
				break;
		}
		if (st == sizeof(first_day_correct) / sizeof(first_day_correct[0]) - 1) {
			st = 0;
		}
		st++;
	}
	for (int f = 1; f < 1000000; f++) { //Перша стадія навчання 90% точності допоміжна
		w11 = 2 + rand() %2000;
		q = second_day_correct[st] - first_day_correct[st];
		correct_init1 = second_day_correct[st] + q + q * Nnasel / w11;//Нейрон
		if (correct_init1 < third_day_correct[st]) {
			if (correct_init1 / third_day_correct[st] * 100 > 90)
				break;
		}
		else {
			if (third_day_correct[st] / correct_init1 * 100 > 90)
				break;
		}
		if (st == sizeof(first_day_correct) / sizeof(first_day_correct[0]) - 2)
			st = 0;
		st++;
	}
	st = 0;
	w1 = w1 + w11 / 2;
	for (int b = 1; b < 1000000; b++) { //Друга стадія навчання 95% точності
		w2 = 2 + rand() % 2000;
		w3 = w1 + w2 / 2;
		q = second_day_correct[st] - first_day_correct[st];
		correct_init = second_day_correct[st] + q+ q* Nnasel/w3;//Нейрон
		if (correct_init < third_day_correct[st]) {
			if (correct_init / third_day_correct[st] * 100 > 96)
				break;
		}
		else {
			if (third_day_correct[st] / correct_init * 100 > 96)
				break;
		}
		if (st == sizeof(first_day_correct) / sizeof(first_day_correct[0]) - 1) {
			st = 0;
		}
		st++;
	}
	for (int h = 1; h < 1000000; h++) { //Друга стадія навчання 95% точності допоміжна
		w21 = 1 + rand() % 2000;
		w31 = w1 + w2 / 2;
		q = second_day_correct[st] - first_day_correct[st];
		correct_init2 = second_day_correct[st] + q + q * Nnasel / w31;//Нейрон
		if (correct_init2 < third_day_correct[st]) {
			if (correct_init2 / third_day_correct[st] * 100 > 96)
				break;
		}
		else {
			if (third_day_correct[st] / correct_init2 * 100 > 96)
				break;
		}
		if (st == sizeof(first_day_correct) / sizeof(first_day_correct[0]) - 1) {
			st = 0;
		}
		st++;
	}
	w3 = w3 + w31;
	//----------------------------------------------Опитування---------------------------------------------------------------------------
	cout << ("How many people were infected 2 days ago") << endl;
	cin >> user_first_day_correct;
	cout << ("How many people were infected yesterday") << endl;
	cin >> user_second_day_correct;
	cout << ("How many people are infected today") << endl;
	cin >> user_third_day_correct;
	cout << ("How many days do you want predict") << endl;
	cin >> d;
	cout << ("How many people are death today") << endl;
	cin >> user_correct_death;
	d = d - 1;
	if (user_first_day_correct >= user_second_day_correct || user_first_day_correct >= user_third_day_correct || user_second_day_correct >= user_third_day_correct || user_correct_death >= user_third_day_correct || user_correct_death <= 0) {
		cout << ("Error") << endl;
		goto final;
	}
	/*if (user_first_day_correct >= user_third_day_correct) {
		cout << ("Error") << endl;
		goto final;
	}
	if (user_second_day_correct >= user_third_day_correct) {
		cout << ("Error") << endl;
		goto final;
	}
	if (user_correct_death >= user_third_day_correct) {
		cout << ("Error") << endl;
		goto final;
	}
	if (user_correct_death <= 0) {
		cout << ("Error") << endl;
		goto final;
	}*/
	cout << ("The program is learning, please wait") << endl;
	for (int c = 0; c < 1000000; c++) {
		w4 = 1 + rand() % 5000;
			w5 = w4 + w3 / 2;
			q = user_second_day_correct - user_first_day_correct;
			correct_init = user_second_day_correct + q + q * Nnasel / w5;
			if (correct_init < user_third_day_correct) {
				if (correct_init / user_third_day_correct * 100 > 93)
					break;
			}
			else {
				if (user_third_day_correct / correct_init * 100 > 93)
					break;
			}
	 }
	for (int z = 0; z < 1000000; z++) {
		w6 = 1 + rand() % 5000;
		w7 = w6 + w5 / 2;
		q = user_second_day_correct - user_first_day_correct;
		correct_init = user_second_day_correct + q + q * Nnasel / w7;
		if (correct_init < user_third_day_correct) {
			if (correct_init / user_third_day_correct * 100 > 98)
				break;
		}
		else {
			if (user_third_day_correct / correct_init * 100 > 98)
				break;
		}
	}
	//-------------------------------------------------Коректировка------------------------------------
	for (int x = 1; x < 1000000; x++) { //Коректировка з базою данних
		w8 = 1 + rand() % 2000;
		w9 = w7 + w8 / 2;
		q = second_day_correct[st] - first_day_correct[st];
		correct_init4 = second_day_correct[st] + q + q * Nnasel / w9;//Нейрон
		if (correct_init4 < third_day_correct[st]) {
			if (correct_init4 / third_day_correct[st] * 100 > 96)
				break;
		}
		else {
			if (third_day_correct[st] / correct_init4 * 100 > 96)
				break;
		}
		if (st == sizeof(first_day_correct) / sizeof(first_day_correct[0]) - 1) {
			st = 0;
		}
		st++;
		
	}
	for (int xx = 1; xx < 1000000; xx++) { //Коректировка з базою данних допоміжна
		w81 = 1 + rand() % 2000;
		w91 = w7 + w81 / 2;
		w911 = w91 + w911 / 2;
		q = second_day_correct[st] - first_day_correct[st];
		correct_init3 = second_day_correct[st] + q + q * Nnasel / w911;//Нейрон
		if (correct_init3 < third_day_correct[st]) {
			w911 = w911 - 1;
			if (correct_init3 / third_day_correct[st] * 100 > 99)
				break;
		}
		else {
			w911 = w911 + 1;
			if (third_day_correct[st] / correct_init3 * 100 > 99)
				break;
		}
		if (st == sizeof(first_day_correct) / sizeof(first_day_correct[0]) - 1) {
			st = 0;
		}
		st++;

	}
	//--------------------------------------------Визначення хворих-----------------------------------
	stats = w9;
	death_stats = user_third_day_correct / user_correct_death;
	q = user_third_day_correct - user_second_day_correct;
	correct_init = user_third_day_correct + q + q * Nnasel / stats;
	cout << ("Tomorow wiil be: ") << correct_init << endl;
	death = correct_init / death_stats;
	cout << ("Tomorow wiil be dead people: ") << death << endl;
	if (correct_init >= 7704000000) {
		cout << ("All people will be infected tomorow");
		goto final;
	}
	infect_day = q + q * Nnasel / stats;
	cout << infect_day << (" infected people per first day") << endl;
	cout << death - user_correct_death << (" dead people per first day") << endl;
	N1 = user_third_day_correct;
	N2 = correct_init;
	b = 0;
	for (int a = 1; a <= d; a++) {
		b = N2 - N1;
		N1 = N2;
		N2 = N2 + b + b * Nnasel / stats;
		cout << ("In ") << a + 1 << (" day will be: ");
		cout << N2 << endl;
		cout << ("In ") << a + 1 << (" day will be dead people: ");
		D1 = N2 / death_stats;
		cout << D1<< endl;
		infect_day = b + b * Nnasel / stats;
		cout << infect_day << (" infected people per ") << a + 1 << (" day") << endl;
		Sleep(200);
		if (N2 >= 7780000000) {
			cout << ("All people will be infected after ") << a + 1 << (" days") << endl;//Весь світ заражений
			break;
		}
		if (N1 >= N2) {
			cout << ("Error...") << endl;// Помилка
			break;
		}
	}
	cout << ("Please stay home") << endl;
	final:
	cout << ("Press any key to close the console...");
	_getch();
	return 0;
}