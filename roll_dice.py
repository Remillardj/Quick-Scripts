#!/usr/local/bin/python3

'''

Game name:
	Dice Roller

Author:
	Jaryd Remillard (jaryd.remillard@gmail.com)

Created on:
	Tuesday, July 21st, 2015

Requirements:
	Python 3.4.3

Version:
	1.0.0

Submit bugs, reviews, conerns or comments to my email:
	jaryd.remillard@gmail.com

Notes:
	No dice? But you somehow have python installed and prefer
	to use a console program to decide how to move your troops,
	move your avatar to make fake dollars, or want to have fun
	rolling virtual non-existant dice? Here is your solution.

Features:
	Select how many dices you want, then select how many
	sides you want on the dice. It will print in list 
	form. Go crazy.

Copyright (c) 2015 Jaryd Remillard

'''

import random

try:
	num_dice = int(input("How many DICES did you want?: "))
	num_side = int(input("How many SIDED dice do you want?: "))

	dice_queue = []
	x = 0
	
	while x < num_dice:
		roll = random.randint(1, num_side)
		x += 1
		dice_queue.append(roll)

	print (dice_queue)

except ValueError:
	print ("Please type in a valid number.")