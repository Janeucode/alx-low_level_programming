#!/bin/bash
ar -rcs liball.a *.o
rm *.o
echo "Static library liball.a created successfully."
