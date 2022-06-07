#include <stdio.h>
#include <iostream>
#include <string>
#include "Empfaenger.h"
#include "Nachricht.h"
#include "Date.h"
#include "Sender.h"

int main(){

	Date Heute(6, 7, 2022);

	std::string Text = "Dies ist der aktuelle Tag : ";

	Nachricht help(Heute, Text);

	Sender sender("Max", "Schopf");

	sender.send(help, "Max Schopf", "Wetterbericht Deutschland");


	Empfaenger empfang("Wetterbericht", "Berlin");


	empfang.receiveNachricht(sender.getStuff());

	empfang.getNachricht();

	return 0;
}