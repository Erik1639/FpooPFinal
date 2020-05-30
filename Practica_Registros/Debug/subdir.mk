################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Estudios.cpp \
../MedioContacto.cpp \
../Profesor.cpp \
../ProfesorBD.cpp \
../ProfesorBs.cpp \
../ProfesorVista.cpp 

OBJS += \
./Estudios.o \
./MedioContacto.o \
./Profesor.o \
./ProfesorBD.o \
./ProfesorBs.o \
./ProfesorVista.o 

CPP_DEPS += \
./Estudios.d \
./MedioContacto.d \
./Profesor.d \
./ProfesorBD.d \
./ProfesorBs.d \
./ProfesorVista.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


