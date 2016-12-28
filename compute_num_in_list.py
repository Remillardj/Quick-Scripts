#!/usr/local/bin/python3


# create list of random numbers
num_list = range(50)


# compute using for loop
def sum_of_list(num_list):
	return (sum(num_list))


def sum_list_for(num_list):
	theSum = 0
	for i in num_list:
		theSum = theSum + i
	return theSum


def sum_list_while(num_list):
	theSum = 0
	while True:
		return sum(i for i in num_list if i > 0)


list1 = ["a", "b", "c"]
list2 = [1, 2, 3]

def alternate_2_lists_into_1(list1, list2):
	product_list = []

	for y < len(list1 + list2):
		for i in list2:
			for x in list1:
				count += y
				product_list.append(x)
				product_list.append(i)

	print (product_list)

alternate_2_lists_into_1(list1, list2)