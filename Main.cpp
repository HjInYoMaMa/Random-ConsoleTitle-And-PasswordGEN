#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>
#include <conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;

//random title generate code:
static const char rnum[] = "0123456789" "qwertyuiopasdfghjklzxcvbnm" "QWERTYUIOPASDFGHJKLZXCVBNM";
int staticLength = sizeof(rnum) - 1;
std::string RandomTitle;

//random password generate code:
const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum) - 1;

char GetRandom() {
	return rnum[rand() % staticLength];
}

void SetRandomTitle() {

	srand(time(0));
	for (unsigned int i = 0; i < 40; ++i) {

		RandomTitle += GetRandom();
	}

	SetConsoleTitle(RandomTitle.c_str());
}

int main() {
	SetRandomTitle();
	int n;
	cout << "Enter the length of password:";
	cin >> n;
	srand(time(0));
	cout << "Generated password:";
	for (int i = 0; i < n; i++)
		cout << alphanum[rand() % string_length];
	_getch();
	return 0;
}