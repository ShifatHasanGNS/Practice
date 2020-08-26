package main

import "fmt"

func loops() {

	// Original for loop
	for i := 1; i < 10; i++ {
		fmt.Println(i)
	}

	// Behaves like a while loop
	fmt.Print("\n\n\n")
	x := 5
	for x < 20 {
		fmt.Println(x)
		x++
	}

}
