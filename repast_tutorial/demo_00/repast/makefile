include ./env

.PHONY: clean
clean:
	rm -f *.o
	rm -f *.exe

.PHONY: compile
compile:
	$(MPICXX) $(BOOST_INCLUDE) ${REPAST_HPC_INCLUDE} -c ./demo_00.cpp -o Main.o
	$(MPICXX) $(BOOST_LIB_DIR) ${REPAST_HPC_LIB_DIR} -o main.exe Main.o $(BOOST_LIBS) ${REPAST_HPC_LIB} $(LDFLAGS)

.PHONY: all
all: clean compile
