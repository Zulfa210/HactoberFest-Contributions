package main

import "fmt"

func main() {
	target := "bell"
	inputs := []string{"hell", "tell", "lebl", "ellb"}
	for i := range inputs {
		ok := isAnagram(inputs[i], target)
		if ok {
			fmt.Printf("%s is an anagram of %s\n", inputs[i], target)
		}
	}
}

func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	m := make(map[rune]int)
	for _, r := range s {
		m[r] += 1
	}

	for _, r := range t {
		if m[r] == 0 {
			return false
		}
		m[r] -= 1
	}

	return true
}
