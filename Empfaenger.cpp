#include "Empfaenger.h"
#include <string>
#include "Nachricht.h"
#include <iostream>

void Empfaenger::getNachricht() {
	
	std::cout << recent.getText() << std::endl;
}


void Empfaenger::receiveNachricht(Nachricht input){
	recent = input;
}


Empfaenger::Empfaenger(std::string name, std::string addresse):
name(name),
addresse(addresse),
recent(4)
{}

