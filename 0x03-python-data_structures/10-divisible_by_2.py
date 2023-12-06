#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    list_of_truth = []
    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            list_of_truth.append(True)
        else:
            list_of_truth.append(False)
    return list_of_truth
