package main

import "fmt"

func main() {
	var number1 uint16 = 260                             // Explicit
	var number2 = 20000.1                                // Semi Implicit
	number3 := 6                                         // Implicit
	var number uint64                                    // defined as --> 0
	var bl bool                                          // defined as --> false
	var x string = fmt.Sprintf("\nHello, %T %v", 10, 10) // using --> Sprintf()

	fmt.Println("Hello World...", number1)
	fmt.Printf("%T %T\n", number2, number3)
	fmt.Println(number, bl)
	fmt.Println(x)
	fmt.Printf("\nHello, %T %v", 10, 10)                       // %T --> type,  %v --> any variable
	fmt.Printf("\nThe probability is 50 %%")                   // %% --> % sign
	fmt.Printf("\nHello, It's %t...", false)                   // %t --> boolian
	fmt.Printf("\n\nNumber: %b", 3455)                         // %b --> binary integer
	fmt.Printf("\nNumber: %d", 3455)                           // %d --> decimal integer
	fmt.Printf("\nNumber: %o", 3455)                           // %o --> octal integer
	fmt.Printf("\nNumber: %x", 3455)                           // %x --> hexa-decimal integer
	fmt.Printf("\nNumber: %f or %F", 3455.1214, 3455.1214)     // %f --> floating point number
	fmt.Printf("\nNumber: %e", 3455.1214)                      // %e --> floating point number (with scientific notation)
	fmt.Printf("\nNumber: %g", 345512145166165165165.1655)     // %g --> floating point number
	fmt.Printf("\n\nString: %s", "Shifat Hasan")               // default string
	fmt.Printf("\nString: %q", "Shifat Hasan")                 // double quoted string
	fmt.Printf("\n\nNumber: %.5f has padding", 3455.121415561) // (only for float) with padding: width.precision ; 0.5
	fmt.Printf("\n\nNumber: %-5d has padding", 3455)           // with padding: width.precision ; -5.0
	fmt.Printf("\nNumber: %05d has padding", 3455)             // with padding: width.precision ; 05.0
}
