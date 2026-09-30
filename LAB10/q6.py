val_a, val_b = map(int, input("Enter 2 Ints").split())

# Wrap values in container for access by p
a = [val_a]
b = [val_b]

# p references the target list
if a[0] < b[0]:
    p = a #gives p access to req list 
else:
    p = b

# Add 10 via the reference p
p[0] += 10 #also changes the list p is directing to 

print("The modified values are: ",a[0], b[0])

