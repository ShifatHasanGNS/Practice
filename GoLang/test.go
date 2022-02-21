package main

import (
	"fmt"
	"golang/others"
)

func main() {
	var n int
	fmt.Scanln(&n)

	fmt.Printf("phi(%v) = %v", n, others.Phi(n))
}
