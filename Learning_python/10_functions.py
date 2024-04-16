<<<<<<< HEAD
# defining a function
# def name_of_function():
# method 1

def name_of_function():
    print("hello this is method 1 of defining a function")
    print("hello this is method 1 of defining a function")
    print("hello this is method 1 of defining a function") 
    print("hello this is method 1 of defining a function")       # all things happning inside the def function is part of the def function
name_of_function()


# method 2
def name_of_function():
    variable = "this is method 2 of defining a function!"   # we definr a variabke 
    print(variable)
    print(variable)
    print(variable)
    print(variable)
name_of_function()     

# method 3
def name_of_function(variable):
    print(variable)
    print(variable)
    print(variable)
name_of_function("hi this is method 3 of defining a function")


# method 4 using if elif and else statements

def calculator():
    print("this is sum and sub calculator \n if you want to do subtration please enter larger no ist \n if you want to do addition please enter small number ist ")
    input_1 = input("enter your ist number ")
    input_2 = input("emter your 2nd number ")
    sub = int(input_1) - int(input_2)
    add = int(input_1) + int(input_2)
    if input_1>input_2:
        print(sub)
    elif input_1<input_2:
        print(add)
    else:
        print("cannot calculate")
calculator()

# method 5 for defining a function
# eg age prediction model 

def future_age(age):
    new_age = int(age) + int(input("enter the year to which you want to calculate \n enter last two digits of year only "))
    return new_age
future_predicted_age = future_age(input("what is yout current age? "))
print(future_predicted_age)

=======
# defining a function
# def name_of_function():
# method 1

def name_of_function():
    print("hello this is method 1 of defining a function")
    print("hello this is method 1 of defining a function")
    print("hello this is method 1 of defining a function") 
    print("hello this is method 1 of defining a function")       # all things happning inside the def function is part of the def function
name_of_function()


# method 2
def name_of_function():
    variable = "this is method 2 of defining a function!"   # we definr a variabke 
    print(variable)
    print(variable)
    print(variable)
    print(variable)
name_of_function()     

# method 3
def name_of_function(variable):
    print(variable)
    print(variable)
    print(variable)
name_of_function("hi this is method 3 of defining a function")


# method 4 using if elif and else statements

def calculator():
    print("this is sum and sub calculator \n if you want to do subtration please enter larger no ist \n if you want to do addition please enter small number ist ")
    input_1 = input("enter your ist number ")
    input_2 = input("emter your 2nd number ")
    sub = int(input_1) - int(input_2)
    add = int(input_1) + int(input_2)
    if input_1>input_2:
        print(sub)
    elif input_1<input_2:
        print(add)
    else:
        print("cannot calculate")
calculator()

# method 5 for defining a function
# eg age prediction model 

def future_age(age):
    new_age = int(age) + int(input("enter the year to which you want to calculate \n enter last two digits of year only "))
    return new_age
future_predicted_age = future_age(input("what is yout current age? "))
print(future_predicted_age)

>>>>>>> b1842df9969ceec089377b79497eeb5f3d1fc2eb
   