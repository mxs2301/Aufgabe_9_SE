#include <stdio.h>
#include <iostream>
#include "Empfaenger.h"
#include "Nachricht.h"
#include "Date.h"
#include "Sender.h"

int main(){

	Date Heute(6, 7, 2022);

	std::string FUCK = "Bitte Geben Sie mir einen Kompetenten Arbeitspartner";

	Nachricht help(Heute, FUCK);

	Sender Hurensohn("I am Pissed", "Fuck you thats why");

	Hurensohn.send(help, "Manfred", "Fairytale");


	Empfaenger Ende("Manfred", "Ach fick dich Alex");


	Ende.receiveNachricht(Hurensohn.getStuff());

	Ende.getNachricht();

	return 0;
}