PROGRAM_NAME		=	ex00

HDR_PATH			=	.
SRC_PATH			=	.

SRC					=	Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

HDR					=	Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

OBJ					=	${SRC:%.cpp=%.o}

CFLAGS				=	-std=c++98 -Wall -Wextra -Werror

LIB_INC				=
LIB_PATH_INC		=	-I${HDR_PATH}

NORM				=	norminetteV3
NORMO				=	${SRC} ${HDR}



all:				${PROGRAM_NAME}

${PROGRAM_NAME}: 	${OBJ}
					clang++ ${LIB_PATH_INC} ${OBJ} ${LIB_INC} -o ${PROGRAM_NAME}

%.o:				%.cpp ${HDR}
					clang++ ${CFLAGS} ${LIB_PATH_INC} -c $< -o  $@

clean:
					@rm -f ${OBJ}

fclean:				clean
					@rm -f ${PROGRAM_NAME}

norm:
					@${NORM} ${NORMO}

re:					fclean ${PROGRAM_NAME}

.PHONY:				all clean fclean norm re
