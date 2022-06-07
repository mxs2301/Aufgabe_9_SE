#include "Empfaenger.h"
#include <string>
#include "Nachricht.h"
#include <iostream>


void Empfaenger::printDate(){
	recent.getDate().printDate();
}

void Empfaenger::getNachricht() {
	
	std::cout << recent.getText();
	printDate();
	std::cout << "\n";
}


void Empfaenger::receiveNachricht(Nachricht input){
	recent = input;
}


Empfaenger::Empfaenger(std::string name, std::string addresse):
name(name),
addresse(addresse),
recent(4)
{}

