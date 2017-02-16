#include "Automate.h"

#include "Lexer.h"

#include "Symbole.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {

   Automate automate;
   automate.lancer();

//   int status = a.GetStatus();
//   if (status&ACCEPTE)
//   {
//      cout << "Chaine acceptée (partiellement s'il y a des erreurs)"<<endl;
//   }
//   if (status&ERROR)
//   {
//      cout << "Erreur"<<endl;
//      cout << a.GetDiagnostic()<<endl;
//   }
//   if (status==0)
//   {
//      cout << "L'automate n'est pas dans un état final (il n'y a pas d'erreur mais on n'a pas atteint d'état final)"<<endl;
//   }

   return 0;
}
