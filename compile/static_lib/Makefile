# 静态库
CC = gcc
AR = ar

# srcs带路径
srcs = $(wildcard src/*.c)

# objs也带路径(不带路径时$(patsubst src/%.c,%.o,$(srcs))
objs = $(patsubst %.c,%.o,$(srcs))

# 注意app要放在.a之后,否则编译失败
all: libfoo.a app

.PHONY: all clean

app: main.c
	$(CC) -o $@ $^ -I include  -L . -lfoo -Wl,-rpath=.

libfoo.a: $(objs)
	$(AR) rc $@ $^

src/%.o: src/%.c
	$(CC) -c $< -o $@ -fpic -I include

clean:
	rm -f app libfoo.a
	rm -f $(objs)
