#ifndef SENDER_H
#define SENDER_H

#include <string>
#include "Nachricht.h"
#include "Nachrichtendienst.h"


class Sender {

private:
	std::string name;
	std::string addresse;
	Nachrichtendienst middleman;

public:
	Sender(std::string name, std::string addresse);


	void send(Nachricht n, std::string e,  std::string x);

	void send(Nachricht n);

	std::string getName();


	Nachricht getStuff();

};

#endif
