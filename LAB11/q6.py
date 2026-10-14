# Reads space-separated numbers until the line is submitted with Enter
line = input("Enter all coefficients separated by spaces: ")
coeffs = [float(val) for val in line.split()] 
#line.split exits as soon as enter is pressed

a = float(input("Enter floating-point value a: "))

# (i) Compute P(a) without using exponentiation (a**n)
p_of_a = coeffs[0]
current_x = a
#Multiplies each iteration by x
for i in range(1, len(coeffs)):
    p_of_a += coeffs[i] * current_x
    current_x *= a

print(f"Degree n = {len(coeffs) - 1}")
print(f"Value of P({a}) = {p_of_a}")

