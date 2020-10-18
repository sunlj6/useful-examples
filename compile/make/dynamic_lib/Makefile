CC = gcc

# srcs带路径
srcs = $(wildcard src/*.c)

# objs也带路径(不带路径时$(patsubst src/%.c,%.o,$(srcs))
objs = $(patsubst %.c,%.o,$(srcs))

# 注意app要放在.so之后,否则编译失败
all: libfoo.so app

.PHONY: all clean

app: main.c
	$(CC) -o $@ $^ -I include  -L . -lfoo -Wl,-rpath=. -g

libfoo.so: $(objs)
	$(CC) -shared -o $@ $^

src/%.o: src/%.c
	$(CC) -c $< -o $@ -fpic -I include -g

clean:
	rm -f app libfoo.so
	rm -f $(objs)
