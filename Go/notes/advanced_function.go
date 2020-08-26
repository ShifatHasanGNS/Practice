package main

import "fmt"

func test(myFunc func(int) int, a int) {
	fmt.Println(myFunc(a))
}

func returnFunc(x string) func() {
	num := 45
	return func() {
		fmt.Println(num)
	}
}

func advancedFunction() {
	test2 := func(x int) int {
		return x * 5
	}(20)
	fmt.Println(test2)

	test3 := func(x int) int {
		return x * 5
	}

	test(test3, 3)

	f := returnFunc("Hello World...")
	f()
}
