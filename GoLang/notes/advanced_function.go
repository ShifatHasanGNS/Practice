package notes

import "fmt"

func Test(myFunc func(int) int, a int) {
	fmt.Println(myFunc(a))
}

func ReturnFunc(x string) func() {
	num := 45
	return func() {
		fmt.Println(num)
	}
}

func AdvancedFunction() {
	test2 := func(x int) int {
		return x * 5
	}(20)
	fmt.Println(test2)

	test3 := func(x int) int {
		return x * 5
	}

	Test(test3, 3)

	f := ReturnFunc("Hello World...")
	f()
}
