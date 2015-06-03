//
// Objet.hh for  in /home/baptiste/Documents/projet++ubuntu14/99Bottles/C++
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Nov 20 14:33:59 2014 Bertrand-Rapello Baptiste
// Last update Thu Nov 20 14:45:22 2014 Bertrand-Rapello Baptiste
//

#ifndef _OBJET_HH_
# define _OBJET_HH_

class Objet
{
public:
  Objet();
  ~Objet();

private:
  int	_c;

public:
  void start();
  int get_c() const;
  void set_c();
};

#endif
