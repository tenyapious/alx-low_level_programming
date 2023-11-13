#!/bin/bash

for f in _*.c
do
	mv $f "${f/_/""}"
done
