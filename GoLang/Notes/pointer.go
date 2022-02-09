package notes

import "fmt"

func ChangeValue1(str string) {
	str = "changed!"
}

func ChangeValue2(str *string) {
	*str = "changed!"
}

func Pointer() {
	x := 7
	y := &x
	fmt.Println(x, y, *y)
	*y = 8
	fmt.Println(x, y, *y)

	s := "Hello"
	fmt.Println(s)

	ChangeValue1(s)
	fmt.Println(s)

	ChangeValue2(&s)
	fmt.Println(s)
}
