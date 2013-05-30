def factors(n):
    return [m for m in range(1, n+1) if n % m == 0]

print factors(24)
