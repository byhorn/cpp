
update:
	@git add --all
	@git commit --quiet --message 'last commit'
	@git update-ref -d HEAD
	@git commit --quiet --message 'master root'

push:
	@git push --quiet --force origin master:master






all:
	@cd class && g++ convention.cpp && ./a.out
	@echo $$?
	@$(MAKE) -C . --no-print-directory clean

debug:
	@cd class && g++ -ggdb hello.cpp && ./a.out
	@echo $$?
	@$(MAKE) -C . --no-print-directory delete

clean:
	find . -type f -name 'a.out' -delete
