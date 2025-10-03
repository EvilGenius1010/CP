
# Paths
PYGEN := python3 include_gen.py
INPUT := /Users/harshavardhankolhatkar04/Desktop/Coding_Docs/CP/input.txt
OUTPUT := /Users/harshavardhankolhatkar04/Desktop/Coding_Docs/CP/output.txt
MI_TEMPL := /Users/harshavardhankolhatkar04/Desktop/Coding_Docs/CP/MI_template.cpp
SI_TEMPL := /Users/harshavardhankolhatkar04/Desktop/Coding_Docs/CP/SI_template.cpp
ROOT := $(shell git rev-parse --show-toplevel)

# SI means single input and MI means multiple input.

# Set compiler and flags
CXXFLAGS := -I$(ROOT)
CXX := g++ $(CXXFLAGS)

# CXXFLAGS := -std=c++17 -Wall-I$(ROOT)



# Rule 1: Default rule to run from subfolder (e.g. maths/)
# Usage: make run DIR=maths FILE=problem1.cpp
hexec:
	@echo "📦 Generating headers..."
	@$(PYGEN)
	@echo "⚙️  Compiling $(FILE).cpp..."
	@$(CXX) $(FILE).cpp -o a.out
	@echo "🚀 Running..."
	@./a.out < $(INPUT) > $(OUTPUT)
	@echo "✅ Output written to output.txt"
	@rm -f a.out

# Rule 2: Run any C++ file from root
# Usage: make quick FILE=maths/problem1
# Omit the .cpp suffix
exec:
	@echo "⚙️  Compiling $(FILE)..."
	@$(CXX) $(FILE).cpp -o a.out
	@echo "🚀 Running..."
	@./a.out < $(INPUT) > $(OUTPUT)
	@echo "✅ Output written to output.txt"
	@rm -f a.out

.PHONY: run quick


new:
	@if [ -z "$(FILE)" ]; then \
		echo "❌ Error: FILE not provided"; exit 1; \
	fi
	@if [ -z "$(TYPE)" ]; then \
		echo "❌ Error: TYPE (SI or MI) not provided"; exit 1; \
	fi
	@echo "Creating new C++ file at current path..."
	@touch $(FILE).cpp 
	@echo "📥 Copying $(TYPE)_TEMPL content to $(FILE).cpp ..."
	@if [ "$(TYPE)" = "si" ]; then \
		cat $(SI_TEMPL) > $(FILE).cpp; \
	elif [ "$(TYPE)" = "mi" ]; then \
		cat $(MI_TEMPL) > $(FILE).cpp; \
	else \
		echo "❌ Error: TYPE must be SI or MI"; exit 1; \
	fi
		@echo "✅ Done: $(FILE).cpp created using $(TYPE)_TEMPL"



# CURR_DIR ?= $(shell pwd)
# DIR := $(patsubst $(ROOT)/%,%,$(CURR_DIR))
# temp:
# 	@echo "$(DIR)"


