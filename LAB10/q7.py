n = int(input("Enter the number of chests, followed by values in each"))
coins = list(map(int, input().split())) #creates a lsit of all the values in each chest 

# Find the index of the minimum chest 
#Render that entry =0
coins[coins.index(min(coins))] = 0
#coins.index gives index when min(coins) is satisfied

print(*coins)

