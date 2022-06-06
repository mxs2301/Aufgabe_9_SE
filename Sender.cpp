#include "Sender.h"
#include "Nachricht.h"
#include "Nachrichtendienst.h"
#include <string>

void Sender::send(Nachricht n, std::string e, std::string x) {
	
	Nachrichtendienst Telekom;
	Telekom.send(n, e, x);
	middleman = Telekom;

}

void Sender::send(Nachricht n) {

	
}

Sender::Sender(std::string name, std::string addresse):
name(name),
addresse(addresse)
{}

std::string Sender::getName(){
	return name;
}

Nachricht Sender::getStuff(){
		return middleman.getNachricht();
}