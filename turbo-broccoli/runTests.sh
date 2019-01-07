#!/bin/bash

# Exit immediately if a command exists with a non-zero status
set -e

for testdirectory in */test/; do
	#echo $testdirectory
	testexecutables=$(find $testdirectory -type f -executable)
	for executable in $testexecutables; do
		$executable
	done
done
