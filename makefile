o := 1>/dev/null
e := 2>/dev/null

update:
	@git add --all
	@git commit -m 'last commit' $o
	@git update-ref -d HEAD
	@git commit -m 'master root' $o

push:
	@git push -f origin master:master

all:
	@cd class && g++ convention.cpp && ./a.out
	@echo $$?
	@$(MAKE) -C . --no-print-directory clean

debug:
	@cd class && g++ -ggdb hello.cpp && ./a.out
	@echo $$?
	@$(MAKE) -C . --no-print-directory delete

output:
	@echo $$?
# echo $? 		without make

clean:
	@find . -type f -name 'a.out' -delete
#	@find . -type f -name '*.out' -delete

# find . -type f -name '*.o' -exec rm {} +