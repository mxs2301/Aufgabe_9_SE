#ifndef NACHRICHT_H
#define NACHRICHT_H

#include <string>
#include "Date.h"
class Nachricht {


private:
	Date date;
	bool sent;
	bool received;
	bool read;
	int length;
	std::string Textnachricht;
	bool Multimedianachricht;


public: 

	Nachricht(Date date, bool sent, bool received, bool read, std::string Textnachricht, int length, bool Multimedianachricht):
	date(date),
	sent(sent),
	received(received),
	read(read),
	length(length),
	Textnachricht(Textnachricht),
	Multimedianachricht(Multimedianachricht)
	{}

	Nachricht(Date date, std::string Textnachricht):
	date(date),
	sent(false),
	received(false),
	read(false),
	length(Textnachricht.length()),
	Textnachricht(Textnachricht),
	Multimedianachricht(false)
	{}

	Nachricht(int a):
	date(0),
	sent(false),
	received(false),
	read(false),
	length(0),
	Textnachricht("No text"),
	Multimedianachricht(false)
	{}


	Date getDate(){
		return date;
	}
	bool getSent(){
		return sent;
	}
	bool getReceived(){
		return received;
	}
	bool getRead(){
		return read;
	}
	int getLength(){
		return length;
	}
	std::string& getText(){
		return Textnachricht;
	}
	bool getMultimedia(){
		return Multimedianachricht;
	}

};

#endif
