# application
# eg
fruit_price = str(50)
print(type(fruit_price))
money = input("how much money do you have? ")
print(type(money))

if fruit_price == money:
    print("congrats you can have this fruit! ")
elif money < fruit_price:
    print("oops! you have not enough money")
elif money > fruit_price:
    print("congrats! you can have this fruit and you can have your change as well")
    