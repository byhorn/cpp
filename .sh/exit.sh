# ~/cpp$ bash .sh/exit.sh folder/file.cpp

g++ $1 --include iostream

./a.out ; echo $? ; rm --force a.out
