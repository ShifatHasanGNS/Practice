package notes

import (
	"bufio"
	"fmt"
	"os"
	// "strconv"
)

func input() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	input := scanner.Text()
	fmt.Printf("You typed: %q\n", input)
}
