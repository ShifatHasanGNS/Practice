package main

import "fmt"

func changeFirst(slice []int) {
	slice[0] = 1000
}

func mutableImmutableDataTypes() {
	var x int = 5
	y := x
	fmt.Println("int (before)\t--->", x, y)
	y = 7 // immutable
	fmt.Println("int (after)\t--->", x, y)

	var arr1 [2]int = [2]int{3, 4}
	arr2 := arr1
	fmt.Println("array (before)\t--->", arr1, arr2)
	arr2[0] = 100 // immutable
	fmt.Println("array (after)\t--->", arr1, arr2)

	var mp1 map[string]int = map[string]int{"hello": 3}
	mp2 := mp1
	fmt.Println("map (before)\t--->", mp1, mp2)
	mp2["mp2"] = 100 // mutable
	fmt.Println("map (after)\t--->", mp1, mp2)

	var s []int = []int{3, 4, 5}
	t := s
	fmt.Println("slice (before)\t--->", s, t)
	t[0] = 100 // mutable
	fmt.Println("slice (after)\t--->", s, t)

	changeFirst(s)
	fmt.Println("slice (after2)\t--->", s, t)
}
