#!/usr/local/bin/python3




def remove_digits(string):
  return ("".join([i for i in string if not i.isdigit()]))


string = "kdjfai3jakdj4ju4h5"
print (remove_digits(string))
