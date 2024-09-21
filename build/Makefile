# Makefile

# 编译器
CXX = g++

# 编译选项
CXXFLAGS = -Wall -Wextra -I.

# 源文件和目标文件
SRCS = ../main.cpp ../hello.cpp
OBJS = $(SRCS:.cpp=.o)

# 可执行文件名
TARGET = hello

# 默认目标
all: $(TARGET)

# 链接目标
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

# 编译每个源文件
%.o: %.cpp hello.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
