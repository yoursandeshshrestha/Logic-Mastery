// Calculate the nth Fibonacci number.
package main

import (
	"fmt"
)

func fibonacci(n int) int {
	if n <= 1 {
		return n
	}

	a, b := 0, 1
	for i := 2; i <= n; i++ {
		a, b = b, a+b
	}
	return b
}

func main() {
	var n int
	fmt.Print("Enter the position (n): ")
	fmt.Scan(&n)

	result := fibonacci(n)
	fmt.Printf("Fibonacci number at position %d is: %d\n", n, result)
}
