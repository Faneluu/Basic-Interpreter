.PHONY: all clean

all: interpreter

interpreter: interpreter.tab.c lex.yy.c
	@g++ interpreter.tab.c lex.yy.c -lfl -o interpreter

lex.yy.c: interpreter.l
	@flex interpreter.l

interpreter.tab.c: interpreter.y
	@bison -d interpreter.y

clean:
	@rm -f interpreter  interpreter.tab.c interpreter.tab.h lex.yy.c
