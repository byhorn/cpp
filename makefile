
all: tie plant push

# git
branch:
	@for branch in $$(git branch -r | grep -v '\->'); do \
		if [ "$${branch}" != "origin/HEAD" ]; then \
			git branch --no-track $${branch#origin/} $$branch; \
		fi \
	done
tie:
	@git add --all
	@git commit --quiet --allow-empty --allow-empty-message --message ''
plant:
	@git update-ref -d HEAD
	@git commit --quiet --allow-empty --allow-empty-message --message ''
push:
	@git push --quiet --force gitlab:byhorn/cpp master:master
	@git push --quiet --force github:byhorn/cpp master:master
#

#
asfsdf:
# 	@cd class && g++ convention.cpp && ./a.out
# 	@echo $$?
# 	@$(MAKE) -C . --no-print-directory clean
debug:
	@cd class && g++ -ggdb hello.cpp && ./a.out
	@echo $$?
	@$(MAKE) -C . --no-print-directory delete
clean:
	@find . -type f -name 'a.out' -delete
sdfkj:
	@dskfjsldkfj
#
