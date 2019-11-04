OPEN2X = /opt/openwiz/toolchain

CC=$(OPEN2X)/bin/arm-openwiz-linux-gnu-gcc
LD=$(CC)

TARGET=Selector.gpe
OBJS = selector.o


DEFS= 
INCS=-I. -I$(OPEN2X)/include
CFLAGS=-O3 -mcpu=arm926ej-s -ffast-math -fomit-frame-pointer 
LDFLAGS=$(CFLAGS) -L$(OPEN2X)/lib
LIBS=-lSDL -lSDL_image -lpng -lm -lz -lpthread -liconv

$(TARGET): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $@ $(LIBS)
.c.o:
	$(CC) $(CFLAGS) $(INCS) $(DEFS) -c $< -o $@

clean:
	rm -f *.o *~ $(TARGET)
