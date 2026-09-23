import sys
import numpy as np

# Taking inputs 
m, n = map(int, input("Enter value of m and n with space in between: ").split())
T = int(input("Enter value of threshold(0<=T<=255): "))

print("Readings(Enter bw 0 and 255): \n")
# Read each row line-by-line m times
img = np.array([input().split() for _ in range(m)], dtype=int)

# Converting vector entries to HIGH or LOW
bw = np.where(img >= T, 255, 0)

# Print the resulting matrix
np.savetxt(sys.stdout, bw, fmt="%d")

