#ifndef _COLEG_H
#define _COLEG_H


#include <string>
using namespace std;
#include "Contact.h"
#include "tipContact.h"

class Coleg : public Contact {
  private:
    string telefon;

    string firma;

    string adresa;

    tipContact * ;

};
#endif
