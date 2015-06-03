
#import "Song.h"

@implementation Song

- (void) play
{
  self->_bottles = [[NumberBottles alloc] init];

  [_bottles setNumber:99];
  while ([_bottles getNumber] > 0)
    {
      NSLog(@"%d bottles of beer on the wall, %d bottles of beer.\n", [_bottles getNumber], [_bottles getNumber]);
      [_bottles setNumber:[_bottles getNumber] - 1];
      if ([_bottles getNumber] != 0)
	{
	  NSLog(@"Take one down and pass it around, %d bottles of beer on the wall.\n", [_bottles getNumber]);
	}
      else if ([_bottles getNumber] == 0)
	{
	  NSLog(@"Take one down and pass it around, no more bottles of beer on the wall.\n");
	}
    }
  NSLog(@"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
  [_bottles release];
}    

@end
