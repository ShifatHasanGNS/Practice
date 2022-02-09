package notes

import "fmt"

func SwitchStatement() {
	ans := -1

	switch ans {
	case 1, -1:
		fmt.Println("1. one")
		fmt.Println("2. one")
	case 2:
		fmt.Println("two")
	default:
		fmt.Println("not a case")
	}

	switch {
	case 1 == -1:
		fmt.Println("1. one")
		fmt.Println("2. one")
	case 2 < 5:
		fmt.Println("two")
	default:
		fmt.Println("not a case")
	}
}
