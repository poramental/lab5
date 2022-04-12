#pragma once
#include "stdafx.h"

class Company {
public:
	std::string name;
	int numberOfWorkers;
	Worker* workerList = new Worker[numberOfWorkers];

	Company();


	friend std::istream& operator>>(std::istream& in, Company* myCompany) {
		std::cout << "name" << std::endl; in >> myCompany->name;
		std::cout << "numberOfWorkers" << std::endl; in >> myCompany->numberOfWorkers;
		std::cout << "workerList::" << std::endl;
		for (int i = 0; i < myCompany->numberOfWorkers; i++) {
			Worker* myWorker = new Worker();
			std::cout << i << std::endl; std::cin >> *myWorker;
			myCompany->workerList = myWorker;
		}
		return in;
	};
	friend std::ostream& operator<<(std::ostream& out, Company* myCompany) {
		out << "name\n" << myCompany->name << std::endl;
		out << "numberOfWorkers\n" << myCompany->numberOfWorkers << std::endl;
		
			std::cout << (*myCompany->workerList) << std::endl;
		
		return out;
	}
};