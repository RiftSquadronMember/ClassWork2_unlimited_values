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
	std::cout << "fart" << std::endl;
	int value = -1, answer = 0;
	std::vector<int> numbers;
	std::vector<int> numbers1;
	std::vector<int> numbers2;


	text_visualise("Enter any number of values, and then\nenter \"0\" to add them to each other\n\n", 25);
	while (value != 0) {
		text_visualise(">>> ", 10);
		std::cin >> value;
		numbers.push_back(value);
	}
	text_visualise("k, that's all, i guess.\nLet's see...\nOh, there it is!", 25);
	for (int i = 0; i < numbers.size(); i++) {
		answer = answer + numbers[i];
		if (numbers[i] % 2 == 0) {
			numbers2.push_back(numbers[i]);
		}
		else { numbers1.push_back(numbers[i]); }
	}


	text_visualise("\n\nSum of them --> ", 25);
	std::cout << answer;
	answer = 0;
	for (int i = 0; i < numbers2.size(); i++) {
		answer = answer + numbers2[i];
	}

	text_visualise("\nSum of even numbers --> ", 25);
	std::cout << answer;

	answer = 0;
	for (int i = 0; i < numbers1.size(); i++) {
		answer = answer + numbers1[i];
	}

	text_visualise("\nSum of odd numbers --> ", 25);
	std::cout << answer;
}
