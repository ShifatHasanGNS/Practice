package notes

import (
	"fmt"
	"math"
)

type Shape interface {
	area() float64
}

// Circle is...
type Circle struct {
	radius float64
}

type Rect struct {
	width  float64
	height float64
}

func (r Rect) area() float64 {
	return r.width * r.height
}

func (c Circle) area() float64 {
	return math.Pi * c.radius * c.radius
}

func InterfaceFunc() {
	c1 := Circle{4.5}
	r1 := Rect{5, 7}
	shapes := []Shape{c1, r1}
	fmt.Println("Area of Circle =", shapes[0].area())
	fmt.Println("Area of Rect   =", shapes[1].area())
}
