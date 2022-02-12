package notes

import "fmt"

func ChangeValue(str *string) {
	*str = "Changed!"
}

func Pointer() {
	x := 7
	y := &x
	fmt.Println(x, y, *y)
	*y = 8
	fmt.Println(x, y, *y)

	s := "Hello"
	fmt.Println(s)

	ChangeValue(&s)
	fmt.Println(s)
}
