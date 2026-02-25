SRCDIR=${EXAM_CROSS_PATH}/exam_cross
OBJDIR=${EXAM_CROSS_PATH}/obj
BINDIR=${EXAM_CROSS_PATH}/bin
LIBDIR=${EXAM_CROSS_PATH}/lib

CXXMTFLAGS = -D_REENTRANT
LDMTFLAGS = -lpthread -lrt

SOCXX = g++
SOCXXFLAGS =  -fsigned-char -g -fPIC -Wall -W -m64

SOLD = g++
SOLDFLAGS = -fsigned-char -g -shared -fPIC

INCDIRPATH = \
	-I${SRCDIR}/include

LIB_example3_OBJLIST = \
	${OBJDIR}/example3/example3.o

LIB_example3_SRCLIST = \
	${SRCDIR}/source/example3.cxx

#-----------------------------------------------------	
all:
	test -d ${OBJDIR}/example3 || mkdir -p ${OBJDIR}/example3
	test -d ${LIBDIR} || mkdir -p ${LIBDIR}
	gmake  ${LIBDIR}/libexample3.so

clean:
	rm -f ${LIB_example3_OBJLIST}
	rm -f ${LIBDIR}/libexample3.so

#-----------------------------------------------------

${LIBDIR}/libexample3.so : ${LIB_example3_OBJLIST}
	${SOLD} ${SOLDFLAGS}  ${LIB_example3_OBJLIST} -o $@  ${LDMTFLAGS}  -L${LIBDIR}

${OBJDIR}/example3/example3.o  : ${SRCDIR}/source/example3.cxx
	${SOCXX} ${SOCXXFLAGS} -c ${INCDIRPATH} ${CXXMTFLAGS} $< -o $@

# DO NOT DELETE

