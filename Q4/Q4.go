package main

import (
	"fmt"
)

func reverseString(s string) string {
	chars := []byte(s)                 
	for i, j := 0, len(chars)-1; i < j; i, j = i+1, j-1 {
		chars[i], chars[j] = chars[j], chars[i] 
	}
	return string(chars) 
}

func main() {
	input := "hello"
	reversed := reverseString(input)
	fmt.Println("Original:", input)
	fmt.Println("Reversed:", reversed)
}
