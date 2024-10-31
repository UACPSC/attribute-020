#/bin/bash

# run the command
output=$(./attribute '')

# validate the output
test "$output" == "Attribute: Empty"
