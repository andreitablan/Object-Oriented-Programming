#ifndef _AGENDA_H
#define _AGENDA_H


class Contact;
class Prieten;

class Agenda {
  public:
    Contact cautareContact();

    Prieten listaPrieteni();

    Contact stergeContact();

    Contact addContact();

};
#endif
