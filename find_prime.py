import math

# 소수 판별
def primenumber(x):
    if x == 1:
        return 0
    for i in range (2, int(math.sqrt(x) + 1)):	# 2부터 x의 제곱근까지의 숫자
    	if x % i == 0:		# 나눠떨어지는 숫자가 있으면 소수가 아님
        	return 0
    return 1				# 전부 나눠떨어지지 않는다면 소수임

N = int(input())
is_primes = list(map(int, input().split()))

is_prime = 0

for i in range(N):
    is_prime += primenumber(is_primes[i])
    
print(is_prime)