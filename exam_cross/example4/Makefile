SRCDIR=${EXAM_CROSS_PATH}/exam_cross
OBJDIR=${EXAM_CROSS_PATH}/obj
BINDIR=${EXAM_CROSS_PATH}/bin
LIBDIR=${EXAM_CROSS_PATH}/lib

OBJNAME=example4

CXXMTFLAGS = -D_REENTRANT
LDMTFLAGS = -lpthread

EXECXX = g++
EXECXXFLAGS = -fsigned-char -g  -Wall -W -m64 -Wwrite-strings

EXELD = g++
EXELDFLAGS = -fsigned-char -g

INCDIRPATH = \
	-I$(SRCDIR)/include

BIN_${OBJNAME}_OBJLIST = \
	${OBJDIR}/${OBJNAME}/${OBJNAME}.o 

BIN_${OBJNAME}_SRCLIST = \
	${SRCDIR}/source/${OBJNAME}.cxx

#-----------------------------------------------------	
all:
	test -d ${OBJDIR}/${OBJNAME} || mkdir -p ${OBJDIR}/${OBJNAME}
	test -d ${BINDIR} || mkdir -p ${BINDIR}
	gmake  ${BINDIR}/${OBJNAME}

clean:
	rm -f ${BIN_${OBJNAME}_OBJLIST}
	rm -f ${BINDIR}/${OBJNAME}


${BINDIR}/${OBJNAME} : ${BIN_${OBJNAME}_OBJLIST}
	${EXELD} ${EXELDFLAGS} -o $@ ${BIN_${OBJNAME}_OBJLIST} ${LDMTFLAGS} -L${LIBDIR} -lexample3

${OBJDIR}/${OBJNAME}/${OBJNAME}.o  : ${SRCDIR}//source/${OBJNAME}.cxx
	${EXECXX} -c ${EXECXXFLAGS} ${INCDIRPATH} ${CXXMTFLAGS} $< -o $@

# DO NOT DELETE
