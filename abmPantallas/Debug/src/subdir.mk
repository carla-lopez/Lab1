################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/abmPantallas.c \
../src/pantalla.c \
../src/publicidad.c \
../src/utn_strings.c 

OBJS += \
./src/abmPantallas.o \
./src/pantalla.o \
./src/publicidad.o \
./src/utn_strings.o 

C_DEPS += \
./src/abmPantallas.d \
./src/pantalla.d \
./src/publicidad.d \
./src/utn_strings.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


