package notes

import "fmt"

func Array() {
	var arr1 [5]int
	fmt.Println(arr1) // [0 0 0 0 0]

	arr2 := [5]int{2, 3, 4}
	fmt.Println(arr2) // [2 3 4 0 0]

	sum := 0
	for i := 0; i < len(arr2); i++ {
		sum += arr2[i]
	}
	fmt.Println("Sum =", sum)

	arr2D := [2][2]int{{1, 2}, {3, 4}}
	for i := 0; i < len(arr2D); i++ {
		fmt.Println(arr2D[i])
	}
}
