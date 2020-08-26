package main

import "fmt"

func conditions() {
	if 5 > 10 {
		fmt.Print("The condition 1 is true...\n")
	} else if 7 == 10 {
		fmt.Print("The condition 2 is true...\n")
	} else {
		fmt.Print("The condition 3 is true...\n")
	}
}
