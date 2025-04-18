package main

import (
    "fmt"
)

func main() {
    var num int
    isPrime := true

    fmt.Print("Enter a positive integer: ")
    fmt.Scan(&num)

    if num <= 1 {
        isPrime = false
    } else {
        for i := 2; i <= num/2; i++ {
            if num%i == 0 {
                isPrime = false
                break
            }
        }
    }

    if isPrime {
        fmt.Printf("%d is a prime number.\n", num)
    } else {
        fmt.Printf("%d is not a prime number.\n", num)
    }
}
