
#include <iostream>
#include <string>
using string = std::string;

void worker_payroll(int& b, int& c) { // couldnt get it to also take in worker name
    std::cout << "Enter workers hourly pay: ";
    std::cin >> b;
    c = b * 168;
}
void worker_name(string& a) {
	// this function was clanker assisted
    std::cout << "enter worker name: ";
    std::getline(std::cin >> std::ws, a);
}

int main()
{
	int workers = 0;
    int exit = 0;
    std::cout << "Hello World!" << "\n";
	std::cout << "and welcome to my payroll manager" << "\n";
	std::cout << "enter how many workers you have 1-5: ";
	std::cin >> workers;
	if (workers == 1) {
		string worker_1 = "";
		int worker_1_pay = 0;
		int worker_1_weekly_pay = 0;
		worker_name(worker_1);
		worker_payroll(worker_1_pay, worker_1_weekly_pay);
		// output
		std::cout << "name: " << worker_1 << "\n";
		std::cout << "payroll: " << worker_1_weekly_pay << "\n";
		std::cin >> exit;
	}
	if (workers == 2) {
		string worker_1 = "";
		int worker_1_pay = 0;
		int worker_1_weekly_pay = 0;
		string worker_2 = "";
		int worker_2_pay = 0;
		int worker_2_weekly_pay = 0;
		worker_name(worker_1);
		worker_payroll(worker_1_pay, worker_1_weekly_pay);
		worker_name(worker_2);
		worker_payroll(worker_2_pay, worker_2_weekly_pay);
		std::cout << "name: " << worker_1 << "\n";
		std::cout << "payroll: " << worker_1_weekly_pay << "\n";
		std::cout << "name: " << worker_2 << "\n";
		std::cout << "payroll: " << worker_2_weekly_pay << "\n";
		std::cin >> exit;
	}
	if (workers == 3) {
		string worker_1 = "";
		int worker_1_pay = 0;
		int worker_1_weekly_pay = 0;
		string worker_2 = "";
		int worker_2_pay = 0;
		int worker_2_weekly_pay = 0;
		string worker_3 = "";
		int worker_3_pay = 0;
		int worker_3_weekly_pay = 0;
		worker_name(worker_1);
		worker_payroll(worker_1_pay, worker_1_weekly_pay);
		worker_name(worker_2);
		worker_payroll(worker_2_pay, worker_2_weekly_pay);
		worker_name(worker_3);
		worker_payroll(worker_3_pay, worker_3_weekly_pay);
		std::cout << "name: " << worker_1 << "\n";
		std::cout << "payroll: " << worker_1_weekly_pay << "\n";
		std::cout << "name: " << worker_2 << "\n";
		std::cout << "payroll: " << worker_2_weekly_pay << "\n";
		std::cout << "name: " << worker_3 << "\n";
		std::cout << "payroll: " << worker_3_weekly_pay << "\n";
		std::cin >> exit;
	}
	if (workers == 4) {
		string worker_1 = "";
		int worker_1_pay = 0;
		int worker_1_weekly_pay = 0;
		string worker_2 = "";
		int worker_2_pay = 0;
		int worker_2_weekly_pay = 0;
		string worker_3 = "";
		int worker_3_pay = 0;
		int worker_3_weekly_pay = 0;
		string worker_4 = "";
		int worker_4_pay = 0;
		int worker_4_weekly_pay = 0;
		worker_name(worker_1);
		worker_payroll(worker_1_pay, worker_1_weekly_pay);
		worker_name(worker_2);
		worker_payroll(worker_2_pay, worker_2_weekly_pay);
		worker_name(worker_3);
		worker_payroll(worker_3_pay, worker_3_weekly_pay);
		worker_name(worker_4);
		worker_payroll(worker_4_pay, worker_4_weekly_pay);
		std::cout << "name: " << worker_1 << "\n";
		std::cout << "payroll: " << worker_1_weekly_pay << "\n";
		std::cout << "name: " << worker_2 << "\n";
		std::cout << "payroll: " << worker_2_weekly_pay << "\n";
		std::cout << "name: " << worker_3 << "\n";
		std::cout << "payroll: " << worker_3_weekly_pay << "\n";
		std::cout << "name: " << worker_4 << "\n";
		std::cout << "payroll: " << worker_4_weekly_pay << "\n";
	}
	if (workers == 5) {
		string worker_1 = "";
		int worker_1_pay = 0;
		int worker_1_weekly_pay = 0;
		string worker_2 = "";
		int worker_2_pay = 0;
		int worker_2_weekly_pay = 0;
		string worker_3 = "";
		int worker_3_pay = 0;
		int worker_3_weekly_pay = 0;
		string worker_4 = "";
		int worker_4_pay = 0;
		int worker_4_weekly_pay = 0;
		string worker_5 = "";
		int worker_5_pay = 0;
		int worker_5_weekly_pay = 0;
		worker_name(worker_1);
		worker_payroll(worker_1_pay, worker_1_weekly_pay);
		worker_name(worker_2);
		worker_payroll(worker_2_pay, worker_2_weekly_pay);
		worker_name(worker_3);
		worker_payroll(worker_3_pay, worker_3_weekly_pay);
		worker_name(worker_4);
		worker_payroll(worker_4_pay, worker_4_weekly_pay);
		worker_name(worker_5);
		worker_payroll(worker_5_pay, worker_5_weekly_pay);
		std::cout << "name: " << worker_1 << "\n";
		std::cout << "payroll: " << worker_1_weekly_pay << "\n";
		std::cout << "name: " << worker_2 << "\n";
		std::cout << "payroll: " << worker_2_weekly_pay << "\n";
		std::cout << "name: " << worker_3 << "\n";
		std::cout << "payroll: " << worker_3_weekly_pay << "\n";
		std::cout << "name: " << worker_4 << "\n";
		std::cout << "payroll: " << worker_4_weekly_pay << "\n";
	}
	return 0;
}

