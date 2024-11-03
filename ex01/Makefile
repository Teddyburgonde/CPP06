#=================== NAME ===================#

NAME = serialize

#================ COMPILATOR ================#

CPP = c++

#=================== FLAGS ==================#

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

#================== SOURCES =================#

SRCS =	Serializer.cpp \
		main.cpp

#============== OBJECT FILES ================#

OBJS = $(SRCS:.cpp=.o)

#==========GENERATION BINARY FILES ==========#

BAR_LENGTH := 80
TOTAL_FILES := $(words $(SRCS))
PAUSE_DURATION := 0.70
%.o : %.cpp
	@$(eval COMPILED_FILES := $(shell echo $$(($(COMPILED_FILES) + 1))))
	@$(eval PROGRESS_PERCENT := $(shell echo $$(($(COMPILED_FILES) * 100 / $(TOTAL_FILES)))))
	@$(eval FILLED_BAR_LENGTH := $(shell echo $$(($(PROGRESS_PERCENT) * $(BAR_LENGTH) / 100))))
	@printf "\rCompiling [\033[0;32m"
	@for i in $(shell seq 1 $(FILLED_BAR_LENGTH)); do printf "◦"; done
	@printf "🟡"
	@for i in $(shell seq 1 $(shell echo $$(($(BAR_LENGTH) - $(FILLED_BAR_LENGTH))))); do printf "•"; done
	@printf "\033[0m] $(PROGRESS_PERCENT)%%"
	@$(CPP) $(CFLAGS) -c $< -o $@
	@sleep $(PAUSE_DURATION)

#================= COLORS ===================#

GREEN = \033[32m
RESET = \033[0m

#================ UTILS PART ================#

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo
	@echo "$(GREEN) EXECUTABLE READY !$(RESET)"

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re 