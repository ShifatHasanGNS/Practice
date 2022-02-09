package notes

import "fmt"

func RangeFunc() {
	var a []int = []int{1, 3, 4, 56, 6, 7, 12, 4, 6}

	for i, element := range a {
		for j := i + 1; j < len(a); j++ {
			if element == a[j] {
				fmt.Println(element)
			}
		}
	}
}
