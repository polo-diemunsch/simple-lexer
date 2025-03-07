#pragma once

#include <string>
#include "symbole.h"
using namespace std;

class Lexer {
   public:
      Lexer(string s) : flux(s), tete(0), tampon(nullptr) { };
      ~Lexer();

      Symbole * Consulter();
      void Avancer();

      size_t getTete() { return tete; };

   protected:
      string flux;
      size_t tete;
      Symbole * tampon;
};
