# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -g

# Nome do executável final
TARGET = main

# Todos os .cpp da pasta viram parte do projeto
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

# Regra padrão: compilar o projeto
all: $(TARGET)

# Como gerar o binário a partir dos objetos
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Como gerar cada .o a partir do .cpp correspondente
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza (remove objetos e binário)
clean:
	rm -f $(OBJ) $(TARGET)
