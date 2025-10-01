CC       = riscv32-linux-gcc
CFLAGS   = -Wall -Wextra -fanalyzer -g
ARCHFLAGS= -march=rv32imd -mabi=ilp32d
LIBRV32  = $(HOME)/bin/bootlin/riscv32-buildroot-linux-gnu/sysroot

# Qual exercício compilar (ex.: make DIR=ex1)
DIR ?= ex1

SRC_DIR  = $(DIR)
OBJ_DIR  = build/$(DIR)
TARGET   = $(OBJ_DIR)/program.elf

# Pega todos os .c dentro do exercício escolhido (pode ter quantos quiser)
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

# Compila programa
$(TARGET): $(OBJS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(ARCHFLAGS) $(OBJS) -o $(TARGET)

# Regras genéricas para .c -> .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(ARCHFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

run: $(TARGET)
	qemu-riscv32 -L $(LIBRV32) ./$(TARGET)

debug: $(TARGET)
	@echo "On another terminal run:"
	@echo "  riscv32-linux-gdb -tui ./$(TARGET)"
	qemu-riscv32 -L $(LIBRV32) -g 1234 $(TARGET) -S

# Git commit and push
git:
	git add .
	git commit -m "$(COMMENT)"
	git push origin main
