
tokenizer_test:uimain.o tokenizer.o history.o
	cc -o tokenizer_test uimain.o tokenizer.o history.o

clean:
	rm -f *.o tokenizer_test

tokenizer.o: tokenizer.h tokenizer.c
history.o: history.h history.c

