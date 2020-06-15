from math import log10, floor, ceil

def find_palindromic_number(n):
    a = 2*floor(log10(n))
    # len = number of digits in the n-th palindromic number
    len = a+(2*(1- floor((2*(10**(a/2))-2)/n)))-(1-floor(n/(11*(10**(((a+2*(1-floor((2*(10**(a/2))-2)/n)))-2)/2))-1)))
    r = int(n - ((2+(9*((len-1)%2)))*(10**(((len-1)-((len-1)%2))/2))-2))
    N1 = int((10**((ceil(len/2))-1)) + r - 1)
    rN1 = int(str(floor(N1/(10**(len%2))))[::-1])
    # N = n-th palindromic number
    N = N1*(10**(floor(len/2))) + rN1
    return N

# TEST
while True:
    print(find_palindromic_number(int(input('>>> '))))
    print()