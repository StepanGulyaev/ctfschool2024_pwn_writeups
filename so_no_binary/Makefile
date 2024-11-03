CC=clang
CFLAGS=-O0 -fno-stack-protector -no-pie -Wl,-z,norelro
LDFLAGS=
SRC=$(wildcard *.c)
C_EXECUTABLE=$(SRC:.c=)

all: $(C_EXECUTABLE)

$(C_EXECUTABLE):$(SRC)
	$(CC) $< $(LDFLAGS) $(CFLAGS) -o $@

clean:
	rm -rf $(C_EXECUTABLE)

