#!/bin/bash

count=0
for i in *.wiki; do
    [ -f "$i" ] || break
    mv $i ${i%.*}___$(date +%d_%m_%Y__%H%M%S)${count}.wiki
    count=$((count + 1))
done
