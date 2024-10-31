#/bin/bash

# run the command
output=$(./attribute "Food")

# validate the output
test "$output" == "Attribute: Food"
