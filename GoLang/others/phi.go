package others

func Phi(n int) int {
	ret := n
	for i := 2; i*i <= n; i++ {
		if n%i == 0 { // checking whether (n mod i) = 0 or not
			for n%i == 0 {
				n /= i // dividing all the factors of 'i'
			}
			ret -= ret / i // same as: ret * (1 - 1/p)
		}
	}
	if n > 1 {
		ret -= ret / n // there can be only one prime greater... then sqrt(n) that divides 'n'
	}
	return ret
}
