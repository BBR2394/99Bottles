/*
** song.h for  in /home/bbr2394/Documents/projet++ubuntu14/99Bottles/Objective-C
** 
** Made by Bertrand-Rapello Baptiste
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jun  3 17:21:55 2015 Bertrand-Rapello Baptiste
** Last update Wed Jun  3 17:31:48 2015 Bertrand-Rapello Baptiste
*/

#import <Foundation/Foundation.h>
#import "NumberBottles.h"

@interface Song : NSObject
{
  NumberBottles *_bottles;
}

- (void) play;

@end
