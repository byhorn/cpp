# ~/cpp$ bash .sh/run.sh folder/file.cpp

g++ $1 --include string --include iostream

./a.out ; echo $? ; rm --force a.out
