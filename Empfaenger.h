#ifndef EMPFAENGER_H
#define EMPFAENGER_H

#include <string>

class Empfaenger {

private:
  std::string name;
  std::string addresse;

public:
  void getNachricht();

  Empfaenger(std::string name, std::string addresse);



};

#endif
