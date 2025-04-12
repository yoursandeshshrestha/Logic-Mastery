// Return the sum of digits of a number.
package main

import (
	"fmt"
)

func sumOfDigits(n int) int {
	if n < 0 {
		n = -n 
	}
	sum := 0
	for n > 0 {
		sum += n % 10
		n /= 10
	}
	return sum
}

func main() {
	var number int
	fmt.Print("Enter a number: ")
	fmt.Scan(&number)

	fmt.Printf("Sum of digits: %d\n", sumOfDigits(number))
}
