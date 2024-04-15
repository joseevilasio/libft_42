.PHONY: build run start tester compile compile_bonus update_files run_francinette

IMAGEM := ducktester
CONTAINER := duckbill

build:
	@docker build -t $(IMAGEM) .

run:
	@docker run --name $(CONTAINER) -it $(IMAGEM)

start:
	@docker start $(CONTAINER)
	@docker attach $(CONTAINER)

tester:
	@cmake -S . -B build
	@cmake --build build
	@./build/all_tests

compile:
	$(MAKE) -C /src/Makefile all
	$(MAKE) -C /src/Makefile clean

compile_bonus:
	$(MAKE) -C /src/Makefile bonus
	$(MAKE) -C /src/Makefile clean

run_francinette:
	@cd /src
	@francinette

update_files:
	@docker cp ./src $(CONTAINER):/workspace