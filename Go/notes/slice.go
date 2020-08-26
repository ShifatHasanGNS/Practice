package main

import "fmt"

func slice() {
	var x [5]int = [5]int{1, 2, 3, 4, 5}
	fmt.Println("x =", x)

	var s []int = x[1:3]
	fmt.Println("s =", s)
	fmt.Println("s =", s[:cap(s)])

	var a []int = []int{5, 6, 7, 8, 9}
	fmt.Println("a =", a)
	a = append(a, 10)
	fmt.Println("a =", a)

	b := make([]int, 5)
	fmt.Println("b =", b)
}
