#include <iostream>
#include <windows.h>
#include <vector>
#include <random>
#include <string>
#include <ctime>
#include <cmath>

void text_visualise(std::string text) {
	for (int i = 0; i < text.length(); i++) {
		std::cout << text[i];
		if (text[i] == ',') {
			Sleep(300);
		}
		else if (text[i] == '.') {
			Sleep(700);
		}
		else { Sleep(25); }
	}
}


/*

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
*/


int main() {
	bool again = false;
	double roubles = 0, total_earn = 0;
	int choice = -1, choice2 = 0;
	text_visualise("Enter amount of roubles\nthat you want to convert\n--> ");
	std::cin >> roubles;

	std::string valutes[5]{ "Tenge","Dollar","Euro","Farit","Zloti" };
	double valutes_cost[5]{ 5.17,0.011,0.0097,0.027,0.041 };


	std::cout
		<< "\n___________________________________________________________________________________________"
		<< "\n|    Volutes      |  Rouble/Volute | Amount you'll get  |    Comission   |      Total     |"
		<< "\n|                 |                |  [comission off]   |       [5%]     |                |"
		<< "\n|-----------------|----------------|--------------------|----------------|----------------|"
		<< "\n| [1]    Tenge    |    1/" << valutes_cost[0] << "      | >> " << roubles * valutes_cost[0] << " T       |      " 
		<< (roubles * valutes_cost[0]) * 0.05 << "    |  " << (roubles * valutes_cost[0]) * 0.95
		<< "\n|                 |----------------|                    |                |                |"
		<< "\n| [2] Dollar[USA] |    1/" << valutes_cost[1] << "     | >> $ " << roubles * valutes_cost[1] << "       |      " 
		<< (roubles * valutes_cost[1]) * 0.05 << "    |  " << (roubles * valutes_cost[1]) * 0.95
		<< "\n|                 |----------------|                    |                |                |"
		<< "\n| [3]    Euro     |    1/" << valutes_cost[2] << "    | >> " << roubles * valutes_cost[2] << " EU       |      " 
		<< (roubles * valutes_cost[2]) * 0.05 << "    |  " << (roubles * valutes_cost[2]) * 0.95
		<< "\n|                 |----------------|                    |                |                |"
		<< "\n| [4]    Farit    |    1/" << valutes_cost[3] << "        | >> " << roubles * valutes_cost[3] << " F       |      " 
		<< (roubles * valutes_cost[3]) * 0.05 << "    |  " << (roubles * valutes_cost[3]) * 0.95
		<< "\n|                 |----------------|                    |                |                |"
		<< "\n| [5]    Zloti    |    1/" << valutes_cost[4] << "     | >> " << roubles * valutes_cost[4] << " Z       |      " 
		<< (roubles * valutes_cost[4]) * 0.05 << "    |  " << (roubles * valutes_cost[4]) * 0.95
		<< "\n|                 |                |                    |                |                |"
		<< "\n|-----------------|----------------|--------------------|----------------|----------------|";

	
		do {
			text_visualise("\n\nWhat volute do you want to buy?\n--> ");
			std::cin >> choice;
		} while (choice < 1 || choice > 5);
		do {
		if (again == false) {
			text_visualise("\nOk, deal is done, you've earned ");
		}
		else { text_visualise("\nWe did make this deal again, now you've earned "); }
		total_earn = total_earn + ((valutes_cost[choice - 1] * roubles) * 0.95);
		std::cout << total_earn << " of " << valutes[choice - 1];
		do {
			text_visualise("\n\nWant to make the same deal again?\n1 - Yes\n2 - No\n\n>>> ");
			std::cin >> choice2;
		} while (choice2 < 1 || choice2 > 2);

		if (choice2 == 1) {
			again = true;
		}
	} while (choice2 == 1);







}
