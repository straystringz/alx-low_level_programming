#!/bin/bash

echo "Input name"

read name

echo "Input age"

read age

getrich=$((( $RANDOM % 15 ) + $age ))

echo "Hello, $name, you will get married when you are $getrich years old."
