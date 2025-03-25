package main

import "fmt"

func main() {
    var num int
    fmt.Print("Enter your desired number: ")
    fmt.Scan(&num)

    if num%2 == 0 {
        fmt.Println("You have entered an even number")
    } else {
        fmt.Println("You have entered an odd number")
    }
}
