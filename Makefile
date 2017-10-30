SRC=$(wildcard src/*c)
OBJ=$(patsubst %c, %o, $(SRC))
TEST=$(wildcard src/test/*c)
TESTO=$(patsubst %c, %o, $(TEST))
INC=inc/


EXE=$(addprefix exe/, $(notdir $(patsubst %c, %elf, $(TEST))))

.SECONDARY:

all: $(EXE)	
	@for exe in $(EXE) ;\
     	do \
          	./$$exe ; \
     	done
        

exe/%.elf:  src/test/%.o $(OBJ)
	gcc $< $(OBJ) -o $@ -lm

%.o: %.c
	gcc -c $< -I $(INC) -o $@ -lm -lfftw3

clean:
	rm -f $(OBJ) $(EXE) $(TESTO)
