package main

import (
	"fmt"
)

func removeDuplicates(arr []int) []int {
	seen := make(map[int]bool)
	result := []int{}

	for _, val := range arr {
		if !seen[val] {
			seen[val] = true
			result = append(result, val)
		}
	}

	return result
}

func main() {
	arr := []int{1, 2, 2, 3, 4, 4, 5, 1}
	unique := removeDuplicates(arr)
	fmt.Println("Array after removing duplicates:", unique)
}
