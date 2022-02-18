package others

func Is_Prime(p int) bool {
	if p <= 1 {
		return false
	}
	if p == 2 {
		return true
	}
	if p == 3 {
		return true
	}
	if p%2 == 0 {
		return false
	}
	if (p-1)%6 == 0 || (p+1)%6 == 0 {
		for i := 3; i*i <= p; i++ {
			if p%i == 0 {
				return false
			}
		}
		return true
	}
	return false
}


