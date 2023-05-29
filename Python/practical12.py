my_list=[{"V":"S001"},{"V":"S002"},{"VI":"S001"},{"VI":"S005"},{"VII":"S005"},{"V":"S009"},{"V":"S001"},{"VIII":"S001"}]

uni_values=set(val for dic in my_list for val in my_list.values())
print("Unique values:",uni_values)