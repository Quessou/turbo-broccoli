#!/bin/bash

# Exit immediately if a command exists with a non-zero status
set -e

mkdir -p testResults
for testDirectory in */test/; do
	#echo $testdirectory
	testExecutables=$(find $testDirectory -type f -executable)
	for executable in $testExecutables; do
		executableName=$(basename $executable)
		$executable --gtest_output="xml:testResults/testresults_$executableName.xml"
	done
done
