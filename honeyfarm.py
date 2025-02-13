# 6 12 18 24 30

N = int(input())

hexagon = 1
central_to_hexa = 1

while N > hexagon:
    hexagon += (central_to_hexa * 6)
    central_to_hexa += 1 
    
print(central_to_hexa)