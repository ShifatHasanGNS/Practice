package notes

import "fmt"

// Point1 is...
type Point1 struct {
	x int32
	y int32
}

// Circle1 is...
type Circle1 struct {
	radius float64
	*Point1
}

// Student is...
type Student struct {
	name  string
	grade []int
	age   int
}

func (s *Student) setAge(age int) {
	s.age = age
}

func Structure() {
	p := Point1{1, 2}
	fmt.Println(p)

	c := Circle1{4.5, &Point1{4, 5}}
	fmt.Println(c)

	s1 := Student{"Muhammad Shifat Hasan", []int{80, 90, 85, 100}, 18}
	fmt.Println(s1)
	s1.setAge(17)
	fmt.Println(s1)
}
