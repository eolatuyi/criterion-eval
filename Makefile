CC := gcc
BIN := criterion_eval

BUILD_DIR := build

CRITERION_DIR_REL := ./Third_Party/Criterion
CRITERION_DIR := $(abspath $(CRITERION_DIR_REL))

INCLUDE_DIRS := -I.
INCLUDE_DIRS += -I${CRITERION_DIR}/include
INCLUDE_DIRS += -I${CRITERION_DIR}/include/criterion
INCLUDE_DIRS += -I${CRITERION_DIR}/include/criterion/internal
INCLUDE_DIRS += -I${CRITERION_DIR}/include/criterion/internal/assert
INCLUDE_DIRS += -I${CRITERION_DIR}/include/criterion/new

SOURCE_FILES := $(wildcard *.c)

# Criterion library.
#SOURCE_FILES += ${CRITERION_DIR}/$(BUILD_DIR)/src/libcriterion.a

CFLAGS := -ggdb3 -O0 
LDFLAGS := -ggdb3 -O0 -pthread -Wl,-rpath,${CRITERION_DIR}/$(BUILD_DIR)/src -lcriterion 

OBJ_FILES = $(SOURCE_FILES:%.c=$(BUILD_DIR)/%.o)

DEP_FILE = $(OBJ_FILES:%.o=%.d)

${BIN} : $(BUILD_DIR)/$(BIN)

${BUILD_DIR}/${BIN} : ${OBJ_FILES}
	-mkdir -p ${@D}
	$(CC) $^ $(CFLAGS) $(INCLUDE_DIRS) ${LDFLAGS} -o $@


-include ${DEP_FILE}

${BUILD_DIR}/%.o : %.c
	-mkdir -p $(@D)
	$(CC) $(CFLAGS) ${INCLUDE_DIRS} -MMD -c $< -o $@

.PHONY: clean

clean:
	-rm -rf $(BUILD_DIR)







