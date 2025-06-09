# Taking pizza order
pizza = input("Enter which pizza you want (s/m/l): ")
bill = 0

if pizza == 's' or pizza == 'S':
    bill += 100
    print("Your small pizza is ₹100")
elif pizza == 'm' or pizza == 'M':
    bill += 200
    print("Your medium pizza is ₹200")
elif pizza == 'l' or pizza == 'L':
    bill += 300
    print("Your large pizza is ₹300")

# Toppings
toppings1 = input("Do you want to add Pepperoni? (Y/N): ")
if toppings1 == 'Y' or toppings1 == 'y':
    bill += 50
    print("Cost of Pepperoni is ₹50")

toppings2 = input("Do you want to add Extra Cheese? (Y/N): ")
if toppings2 == 'Y' or toppings2 == 'y':
    bill += 30
    print("Cost of Extra Cheese is ₹30")

# Burger with size
burger = input("Do you want a burger? (Y/N): ")
if burger == 'Y' or burger == 'y':
    burger_size = input("Which burger size do you want? (s = small, b = big): ")
    if burger_size == 's' or burger_size == 'S':
        bill += 70
        print("Small burger added for ₹70")
    elif burger_size == 'b' or burger_size == 'B':
        bill += 120
        print("Big burger added for ₹120")

# Fries
fries = input("Do you want fries? (Y/N): ")
if fries == 'Y' or fries == 'y':
    bill += 50
    print("Fries added for ₹50")

# Cold Drink
drink = input("Do you want a cold drink? (Y/N): ")
if drink == 'Y' or drink == 'y':
    bill += 40
    print("Cold drink added for ₹40")

# Final Bill
print("Your total bill is ₹", bill)
