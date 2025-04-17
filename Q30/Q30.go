package main

import (
	"fmt"
)

func mostFrequentElement(arr []int) (int, int) {
	frequency := make(map[int]int)
	maxCount := 0
	mostFrequent := arr[0]

	for _, num := range arr {
		frequency[num]++
		if frequency[num] > maxCount {
			maxCount = frequency[num]
			mostFrequent = num
		}
	}

	return mostFrequent, maxCount
}

func main() {
	arr := []int{1, 3, 2, 1, 4, 1, 3, 2, 3, 3}
	element, count := mostFrequentElement(arr)
	fmt.Printf("Most frequent element: %d (occurs %d times)\n", element, count)
}
