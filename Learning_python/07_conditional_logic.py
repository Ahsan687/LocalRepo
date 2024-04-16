<<<<<<< HEAD
# Logical operators are either "true or false" or "yes or no" or "0 or 1"
# equal to                    ==
# not equal to                !=
# less than                    <
# greater than                 >
# less than and equal to       <=
# greater than and equal to    >=

print(6==6) # output will be true as 6 = 6
print(5>6)  # false
print(4<5)  # true
print(7>=6) # true
print(6<=5) #false

# applications of logical operators eg.
# for an exam to appear in age must be 10 or above
# can_take_exam = 10
# person_1 = (input("what is your age? "))
# print(person_1 >= can_take_exam)        # typerror because the input of user is intiger and the print of the logical 
                                        # operator is string so we need to conver eithe of the two
can_take_exam = 10
person_1 = int(input("what is your age? "))
=======
# Logical operators are either "true or false" or "yes or no" or "0 or 1"
# equal to                    ==
# not equal to                !=
# less than                    <
# greater than                 >
# less than and equal to       <=
# greater than and equal to    >=

print(6==6) # output will be true as 6 = 6
print(5>6)  # false
print(4<5)  # true
print(7>=6) # true
print(6<=5) #false

# applications of logical operators eg.
# for an exam to appear in age must be 10 or above
# can_take_exam = 10
# person_1 = (input("what is your age? "))
# print(person_1 >= can_take_exam)        # typerror because the input of user is intiger and the print of the logical 
                                        # operator is string so we need to conver eithe of the two
can_take_exam = 10
person_1 = int(input("what is your age? "))
>>>>>>> b1842df9969ceec089377b79497eeb5f3d1fc2eb
print(person_1 >= can_take_exam)