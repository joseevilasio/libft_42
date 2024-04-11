.PHONY: build run tester libft

build:
	@docker build -t ducktester .

run:
	@docker run -it ducktester

tester:
	@cmake -S . -B build
	@cmake --build build
	@./build/all_tests

libft:
	$(MAKE) -C /src/Makefile fclean
	$(MAKE) -C /src/Makefile libft.a
	$(MAKE) -C /src/Makefile clean