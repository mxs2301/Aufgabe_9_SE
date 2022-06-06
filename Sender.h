#ifndef SENDER_H
#define SENDER_H

#include <string>
#include "Nachricht.h"


class Sender {

private:
	std::string name;
	std::string addresse;
	
public:
	Sender(std::string name, std::string addresse);


	void send(Nachricht n, std::string e);

	void send(Nachricht n);



};

#endif
