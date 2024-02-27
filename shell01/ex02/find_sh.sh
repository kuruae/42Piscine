#!/bin/sh
find . -type f  -iname "*.sh" -printf '%f\n' | sed 's/\.sh$//' 
