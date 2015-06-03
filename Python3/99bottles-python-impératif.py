#!/usr/bin/python

import sys

def fn_99bottles():
    c = 99
    
    while c > 0:
        print "%d bottles of beer on the wall, %d bottles of beer." % (c, c)
        c -= 1
        if c != 0:
            print "Take one down and pass it around, %d bottles of beer on the wall." % c
        else:
            print "Take one down and pass it around, no more bottles of beer on the wall."
        
        # le else if s'escrit elif
        print "No more bottles of beer on the wall, no more bottles of beer."
        print "Go to the store and buy some more, 99 bottles of beer on the wall. "
##################################################################

fn_99bottles()
