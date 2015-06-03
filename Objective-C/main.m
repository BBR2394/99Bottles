/*
** 99botles par Baptiste
** en Objective-C
*/

#import <Foundation/Foundation.h>
#import "Song.h"

int	main()
{
  NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
  Song * music = [[Song alloc] init];

  [music play];

  //NSLog (@"hello world");
  [music release];
  [pool drain];
  return 0;
}
