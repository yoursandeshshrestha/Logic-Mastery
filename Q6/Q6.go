// Sum all elements in an array.
package main

import (
	"fmt"
)

func main() {
	arr := [5]int{10, 20, 30, 40, 50}
	sum := 0

	for _, value := range arr {
		sum += value
	}

	fmt.Println("Sum of array elements:", sum)
}
