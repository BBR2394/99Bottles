//
// Objet.cpp for  in /home/baptiste/Documents/projet++ubuntu14/99Bottles/C++
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Nov 20 14:36:46 2014 Bertrand-Rapello Baptiste
// Last update Thu Nov 20 14:45:41 2014 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Objet.hh"

Objet::Objet()
{
  _c = 99;
}

Objet::~Objet()
{

}

void Objet::start()
{
  while (this->_c > 0)
    {
      std::cout << _c << " bottle of beer on the wall, " << _c << " bottle of beer." << std::endl;
      this->_c = _c - 1;
      if (_c != 0)
	std::cout << "Take one down and pass it around, " << _c << " bottles of beer on the wall." << std::endl;
      else
	std::cout << "Take one down and pass it around, no more bottles of beer on the wall." << std::endl;
    }
  std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl;
  std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << std::endl;

}
