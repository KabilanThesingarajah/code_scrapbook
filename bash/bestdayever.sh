#!/bin/bash

name=$1
compliment=$2

user=$(whoami)
date=$(date)
whereami=$(pwd)
echo "Good morning $1"
echo "You're looking good today $2!!"
echo "You have the best beard I've ever seen $2!!"

echo "You are currently logged in as root and you are in the directory: $whereami"
echo "The date is: $date"
echo "The current directory is: $whereami"
