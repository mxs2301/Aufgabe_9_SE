#ifndef NACHRICHTENDIENST_H
#define NACHRICHTENDIENST_H

#include "Date.h"
#include <string>
#include "Nachricht.h"

class Nachrichtendienst {

private:
	std::string name;

public:
	void send(Nachricht n, std::string e);

	void send(Nachricht n);

	void getEmpfaenger();

	void getSender();
};

#endif
