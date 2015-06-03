/*
** 99Bottles.h for  in /home/bbr2394/Documents/projet++ubuntu14/99Bottles/Objective-C
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jun  3 17:10:58 2015 Bertrand-Rapello Baptiste
** Last update Wed Jun  3 17:16:48 2015 Bertrand-Rapello Baptiste
*/

#import <Foundation/Foundation.h>

@interface NumberBottles : NSObject
{
  int _nbBottles;
}

- (void) setNumber: (int) nb;
- (int) getNumber;

@end
