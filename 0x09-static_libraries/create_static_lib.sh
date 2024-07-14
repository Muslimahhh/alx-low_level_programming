#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library from all the .o files
ar -rc liball.a *.o

# Index the library (optional, but good practice)
ranlib liball.a

# Clean up the .o files (optional, but keeps the directory clean)
rm -f *.o

# Print a success message
echo "Static library liball.a created successfully."
