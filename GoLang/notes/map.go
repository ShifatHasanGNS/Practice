package notes

import "fmt"

func MapFunc() {
	var mp map[string]int = map[string]int{
		"apple":  5,
		"pear":   6,
		"orange": 9,
	}
	fmt.Println(mp)
	fmt.Println(mp["apple"])

	mp["apple"] = 500
	fmt.Println(mp["apple"])

	val, ok := mp["apple"]
	fmt.Println(val, ok)

	val, ok = mp["banana"]
	fmt.Println(val, ok)
}
