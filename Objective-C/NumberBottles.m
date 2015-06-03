
#import "NumberBottles.h"

@implementation NumberBottles

- (void) setNumber: (int)nb
{
  self->_nbBottles = nb;
}

- (int) getNumber
{
  return self->_nbBottles;
}

@end
