
tokenizer:uimain.o tokenizer.o history.o
	cc -o tokenizer uimain.o tokenizer.o history.o



clean:
	rm -f *.o tokenizer


tokenizer.o: tokenizer.h tokenizer.c 
history.o: history.h history.c

