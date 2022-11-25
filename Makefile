PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

OBJS = TP1_CPP_LEXIQUE.o

ifeq ($(BUILD_MODE),debug)
	CFLAGS += -g
else ifeq ($(BUILD_MODE),run)
	CFLAGS += -O2
else ifeq ($(BUILD_MODE),linuxtools)
	CFLAGS += -g -pg -fprofile-arcs -ftest-coverage
	LDFLAGS += -pg -fprofile-arcs -ftest-coverage
	EXTRA_CLEAN += TP1_CPP_LEXIQUE.gcda TP1_CPP_LEXIQUE.gcno $(PROJECT_ROOT)gmon.out
	EXTRA_CMDS = rm -rf TP1_CPP_LEXIQUE.gcda
else
    $(error Build mode $(BUILD_MODE) not supported by this Makefile)
endif

all:	TP1_CPP_LEXIQUE

TP1_CPP_LEXIQUE:	$(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^
	$(EXTRA_CMDS)

%.o:	$(PROJECT_ROOT)%.cpp
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

%.o:	$(PROJECT_ROOT)%.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

clean:
	rm -fr TP1_CPP_LEXIQUE $(OBJS) $(EXTRA_CLEAN)
