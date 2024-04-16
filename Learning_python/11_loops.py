# while loops and for loops
        # while loops
# x = 0
# while (x<=10):
#     print(x)
#     x = x+1

        #for loops

# for x in range(1,10):
#     print(x)    
 
    # used in arrays

array = [ "A", "quick", "brown", "fox", "jumps", "over", "the", "lazey", "dog"]
for word in array:
    if (word=="over"):
        break #stops the loop
    if (word=="the"): # skips "the"
        continue
    print(word)