#ifndef EMPFAENGER_H
#define EMPFAENGER_H

#include "Nachricht.h"
#include <string>

class Empfaenger {

private:
  std::string name;
  std::string addresse;
  Nachricht recent;


public:
  void getNachricht();
  void receiveNachricht(Nachricht input);
  Empfaenger(std::string name, std::string addresse);



};

#endif
