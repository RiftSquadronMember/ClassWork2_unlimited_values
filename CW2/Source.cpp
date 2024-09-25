#include <iostream>
#include <windows.h>
#include <vector>
#include <random>
#include <string>
#include <ctime>
#include <cmath>

void text_visualise(std::string text, int avg_speed) {
	for (int i = 0; i < text.length(); i++) {
		std::cout << text[i];
		if (text[i] == ',') {
			Sleep(300);
		}
		else if (text[i] == '.') {
			Sleep(700);
		}
		else { Sleep(avg_speed); }
	}
}



int main() { 
	int value = -1, answer = 0;
	std::vector<int> numbers;
	text_visualise("Enter any number of values, and then\nenter \"0\" to add them to each other\n\n", 25);
	while (value != 0) {
		text_visualise(">>> ", 10);
		std::cin >> value;
		numbers.push_back(value);
	}
	text_visualise("k, that's all, i guess.\nLet's see...\n oh, there it is! \n--> ", 25);
	for (int i = 0; i < numbers.size(); i++) {
		answer = answer + numbers[i];
	}

	std::cout << answer;

}