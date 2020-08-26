package main

import "fmt"

func test1(x int, y int) (int, int) {
	return x + y, x - y
}

func test2(x, y int) (z1, z2 int) {
	defer fmt.Println("Hello...")
	z1 = x + y
	z2 = x - y
	fmt.Println("Before Return...")
	return
}

func function() {
	ans1, ans2 := test1(10, 20)
	fmt.Println(ans1, ans2)

	ans1, ans2 = test2(10, 20)
	fmt.Println(ans1, ans2)
}
