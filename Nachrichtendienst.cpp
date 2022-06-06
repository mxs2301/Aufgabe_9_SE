#include "Nachrichtendienst.h"
#include "Nachricht.h"

void Nachrichtendienst::send(Nachricht n, std::string e,  std::string x) {
	// TODO - implement Nachrichtendienst::send
	name = e;
	name_Sender = x;
	save = n;

}

Nachrichtendienst::Nachrichtendienst():
name("Unknown"),
name_Sender("Unknown"),
save(3)
{}


void Nachrichtendienst::send(Nachricht n) {
	// TODO - implement Nachrichtendienst::send
	throw "Not yet implemented";
}

void Nachrichtendienst::getEmpfaenger() {
	// TODO - implement Nachrichtendienst::getEmpfaenger
	throw "Not yet implemented";
}

void Nachrichtendienst::getSender() {
	// TODO - implement Nachrichtendienst::getSender
	throw "Not yet implemented";
}

Nachricht Nachrichtendienst::getNachricht(){
	return save;
}