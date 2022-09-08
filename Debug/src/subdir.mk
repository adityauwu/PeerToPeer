################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/P2Pmain.cpp \
../src/PeerReceiver.cpp \
../src/PeerSender.cpp \
../src/logger.cpp

OBJS += \
./src/P2Pmain.o \
./src/PeerReceiver.o \
./src/PeerSender.o \
./src/logger.o

CPP_DEPS += \
./src/P2Pmain.d \
./src/PeerReceiver.d \
./src/PeerSender.d \
./src/logger.d


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -Ipthread -O0 -g3 -w -Wall -c -fmessage-length=0 -fpermissive -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


