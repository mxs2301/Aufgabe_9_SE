#ifndef NACHRICHTENDIENST_H
#define NACHRICHTENDIENST_H

#include "Date.h"
#include <string>
#include "Empfaenger.h"
#include "Nachricht.h"

class Nachrichtendienst {

private:
	std::string name;
	std::string name_Sender;
	Nachricht save;


public:
	void send(Nachricht n, std::string e, std::string x);

	void send(Nachricht n);

	void getEmpfaenger();

	void getSender();

	Nachricht getNachricht();

	Nachrichtendienst();
	

};

#endif
