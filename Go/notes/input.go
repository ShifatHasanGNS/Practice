package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func input() {
	scanner := bufio.NewScanner(os.Stdin)
	fmt.Print("Type the year you were born: ")
	scanner.Scan()
	input, _ := strconv.ParseInt(scanner.Text(), 10, 64)
	fmt.Printf("You typed: %d\n", 2020-input)
}
