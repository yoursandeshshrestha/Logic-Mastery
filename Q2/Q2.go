package main

import "fmt"

func main() {
    var a, b, c int

    fmt.Print("Enter First Number: ")
    fmt.Scan(&a)

    fmt.Print("Enter Second Number: ")
    fmt.Scan(&b)

    fmt.Print("Enter Third Number: ")
    fmt.Scan(&c)

    if a > b && a > c {
        fmt.Printf("Largest Number is: %d\n", a)
    } else if b > a && b > c {
        fmt.Printf("Largest Number is: %d\n", b)
    } else {
        fmt.Printf("Largest Number is: %d\n", c)
    }
}
