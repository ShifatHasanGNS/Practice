package main

import (
	"fmt"
	"math"
)

func operatorsMaths() {
	var a float32 = 15.8
	var b int = 5

	c := a + float32(b)
	fmt.Printf("%v + %v = %v\n", a, b, c)

	pi := math.Pi
	fmt.Println(pi)
}
