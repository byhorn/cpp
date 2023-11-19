
all:
	@cd class && g++ convention.cpp && ./a.out
	@echo $$?
	@$(MAKE) -C . --no-print-directory clean

debug:
	@cd class && g++ -ggdb hello.cpp && ./a.out
	@echo $$?
	@$(MAKE) -C . --no-print-directory delete


config:
	@git config --global alias.cg 'config --global'
	@git cg user.name ailust
	@git cg init.defaultbranch master
	@git cg core.editor vim
	@git cg format.pretty "%C(#ff55dd)%h%C(auto)%d %C(#4400ff)%s"
	@git cg alias.lg "log --graph --all"
	@git cg alias.ac '!git add -A && git commit -m'

output:
	@echo $$?
# echo $? 		without make

clean:
	@find . -type f -name 'a.out' -delete
	@find . -type f -name '*.out' -delete

# find . -type f -name '*.o' -exec rm {} +


home:
	@echo $$HOME

path:
	@echo $$PATH