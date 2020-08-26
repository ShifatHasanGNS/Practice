package main

import (
	"fmt"
	"math"
)

type shape interface {
	area() float64
}

// Circle is...
type Circle struct {
	radius float64
}

type rect struct {
	width  float64
	height float64
}

func (r rect) area() float64 {
	return r.width * r.height
}

func (c Circle) area() float64 {
	return math.Pi * c.radius * c.radius
}

func interfaceFunc() {
	c1 := Circle{4.5}
	r1 := rect{5, 7}
	shapes := []shape{c1, r1}
	fmt.Println("Area of Circle =", shapes[0].area())
	fmt.Println("Area of Rect   =", shapes[1].area())
}
