package main

import "fmt"

func changeValue1(str string) {
	str = "changed!"
}

func changeValue2(str *string) {
	*str = "changed!"
}

func pointer() {
	x := 7
	y := &x
	fmt.Println(x, y, *y)
	*y = 8
	fmt.Println(x, y, *y)

	s := "Hello"
	fmt.Println(s)

	changeValue1(s)
	fmt.Println(s)

	changeValue2(&s)
	fmt.Println(s)
}
