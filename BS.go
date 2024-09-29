// Go
package main

import "fmt"

func bubbleSort(listage []int) []int {
	length := len(listage)

	for i := 0; i < length; i++ {
		for j := 0; j < length-i-1; j++ {
			if listage[j] > listage[j+1] {
				listage[j], listage[j+1] = listage[j+1], listage[j]
			}
		}
	}
	return listage
}

func main() {
	listage := []int{4, 8, 87, 54, 12, 3, 65, 99, 30, 43}

	newListage := bubbleSort(listage)
	fmt.Println(newListage)
}
