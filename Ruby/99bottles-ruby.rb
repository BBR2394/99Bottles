#!/usr/bin/env ruby

class Trvl
  # le attr_accessor cree le "geter/seter" pour la variable "c"
  attr_accessor :c
  def initialize(d = 99)
    @c = d
  end
  
  def sing
    while @c > 0
      puts "#{@c} bottles of beer on the wall, #{@c} bottles of beer."
      @c = @c - 1
      if @c != 0
        puts "Take one down and pass it around, #{@c} bottles of beer on the wall."
        #un else if s'ecrirait "elsif ... " sans le "e"
      else
        puts "Take one down and pass it around, no more bottles of beer on the wall."
      end
    end
    puts "No more bottles of beer on the wall, no more bottles of beer. "
    puts "Go to the store and buy some more, 99 bottles of beer on the wall."
  end
end



if __FILE__ == $0
  puts "Bonjour"
  obj = Trvl.new
  obj.sing
end
