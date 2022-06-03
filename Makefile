## File generated by the BNF Converter (bnfc 2.9.4).

CC = gcc -g
CCFLAGS = --ansi -W -Wall -Wsign-conversion -Wno-unused-parameter -Wno-unused-function -Wno-unneeded-internal-declaration ${CC_OPTS}

FLEX = flex
FLEX_OPTS = -Ppascalzin_

BISON = bison
BISON_OPTS = -t -ppascalzin_

OBJS = Absyn.o Buffer.o Lexer.o Parser.o Printer.o

.PHONY : clean distclean

all : Testpascalzin

clean :
	rm -f *.o Testpascalzin pascalzin.aux pascalzin.log pascalzin.pdf pascalzin.dvi pascalzin.ps pascalzin

distclean : clean
	rm -f Absyn.h Absyn.c Bison.h Buffer.h Buffer.c pascalzin.l Lexer.c pascalzin.y Parser.h Parser.c Printer.c Printer.h Skeleton.c Skeleton.h Test.c Makefile pascalzin.tex

Testpascalzin : ${OBJS} Test.o
	@echo "Linking Testpascalzin..."
	${CC} ${OBJS} Test.o -o Testpascalzin

Absyn.o : Absyn.c Absyn.h
	${CC} ${CCFLAGS} -c Absyn.c

Buffer.o : Buffer.c Buffer.h
	${CC} ${CCFLAGS} -c Buffer.c

Lexer.c : pascalzin.l
	${FLEX} ${FLEX_OPTS} -oLexer.c pascalzin.l

Parser.c Bison.h : pascalzin.y
	${BISON} ${BISON_OPTS} pascalzin.y -o Parser.c

Lexer.o : CCFLAGS+=-Wno-sign-conversion

Lexer.o : Lexer.c Bison.h
	${CC} ${CCFLAGS} -c Lexer.c

Parser.o : Parser.c Absyn.h Bison.h
	${CC} ${CCFLAGS} -c Parser.c

Printer.o : Printer.c Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Printer.c

Test.o : Test.c Parser.h Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Test.c