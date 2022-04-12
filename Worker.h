#pragma once
#include "stdafx.h"

class Worker {
public:
	std::string surname;
	std::string initials;
	std::string position;
	std::string startYear;
	Worker();

	friend std::istream& operator>>(std::istream& in, Worker& myWorker) {
		std::cout << "surname" << std::endl; in >> myWorker.surname;
		std::cout << "initials" << std::endl; in >> myWorker.initials;
		std::cout << "position" << std::endl; in >> myWorker.position;
		std::cout << "startYear" << std::endl; in >> myWorker.startYear;
		return in;
	};
	friend std::ostream& operator<<(std::ostream& out, Worker& myWorker) {
		out << "initials\n" << myWorker.initials << std::endl;
		out << "surname\n" << myWorker.surname << std::endl;
		out << "position\n" << myWorker.position << std::endl;
		out << "startYear\n" << myWorker.startYear << std::endl;
		return out;
	};
};