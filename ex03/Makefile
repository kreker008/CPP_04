PROGRAM_NAME		=	ex03

HDR_PATH			=	.
SRC_PATH			=	.

SRC					=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HDR					=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

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
