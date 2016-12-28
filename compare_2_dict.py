#!/usr/local/bin/python3


import copy
import sys


dict1 = {instance_id1 : {name: 'a'}, instance_id2 : {name : 'b'}}

dict2 = {instance_id1 : {name: 'ab'}, instance_id2 : {name : 'b'}}

def compare_dict(dict1, dict2):
	dict_intersect = set(dict1.keys()).intersection(set(dict2.keys()))

	output = {}

	for k in dict_intersect:
		if dict1[k] != dict2[k]:
			output.update(k, dict1[k], dict2[k])

		else:
			print ("Something went wrong.")
			sys.exit()