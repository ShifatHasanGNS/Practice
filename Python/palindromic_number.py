from math import log10, floor, ceil

def find_palindromic_number(n):
    r = floor(log10(n))
    s = floor((2*(10**r) - 2)/n)
    t = r - s
    d = 1 + (2*t) + floor(n/((11*(10**t)) - 1))
    a = d % 2
    u = floor((d - 1)/2)
    m = (n + 2) - ((11 - 9*a)*(10**u))
    N_o = (10**u) + m - 1
    N_r = int(str(floor(N_o/(10**a)))[::-1])
    N = N_o*(10**floor(d/2)) + N_r
    return N

# TEST
while True:
    print(find_palindromic_number(int(input('>>> '))))
    print()