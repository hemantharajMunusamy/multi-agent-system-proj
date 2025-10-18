include ./env

.PHONY: clean
clean:
	rm -f *.o
	rm -f *.exe

.PHONY: compile
compile:
	$(MPICXX) $(BOOST_INCLUDE) -c ./demo_00.cpp -o Main.o
	$(MPICXX) $(BOOST_LIB_DIR) -o main.exe Main.o $(BOOST_LIBS) $(LDFLAGS)

.PHONY: all
all: clean compile
