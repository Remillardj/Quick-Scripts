#!/usr/local/bin/python3

# search and replace
# whole word match, ie: cat no match catalog, but match cat
# text stored as array-of-character

# original: this film is the best film of the year
# replace film with movie

# cant use existing string-manipulation functions

# BAD IDEAS:
# give up
# dive right into coding with no plan
# find a similar program to modify

oldstr = "this film is the best film of the year"

newstr = oldstr.replace("film", "movie")

print (newstr)