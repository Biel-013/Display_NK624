################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/TouchGFXProjects/Display_NK624/Common/Src/system_stm32h7xx_dualcore_boot_cm4_cm7.c 

C_DEPS += \
./Drivers/CMSIS/system_stm32h7xx_dualcore_boot_cm4_cm7.d 

OBJS += \
./Drivers/CMSIS/system_stm32h7xx_dualcore_boot_cm4_cm7.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/system_stm32h7xx_dualcore_boot_cm4_cm7.o: C:/TouchGFXProjects/Display_NK624/Common/Src/system_stm32h7xx_dualcore_boot_cm4_cm7.c Drivers/CMSIS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../../../CM7/Core/Inc -I../../../CM7/TouchGFX/App -I../../../CM7/TouchGFX/target/generated -I../../../CM7/TouchGFX/target -I../../../Drivers/BSP/Components/Common -I../../../Drivers/BSP/STM32H745I-DISCO -I../../../Utilities/JPEG -I../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../Drivers/CMSIS/Include -I../../CM7/../../CM7/Middlewares/ST/touchgfx/framework/include -I../../CM7/../../CM7/TouchGFX/generated/fonts/include -I../../CM7/../../CM7/TouchGFX/generated/gui_generated/include -I../../CM7/../../CM7/TouchGFX/generated/images/include -I../../CM7/../../CM7/TouchGFX/generated/texts/include -I../../CM7/../../CM7/TouchGFX/generated/videos/include -I../../CM7/../../CM7/TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS

clean-Drivers-2f-CMSIS:
	-$(RM) ./Drivers/CMSIS/system_stm32h7xx_dualcore_boot_cm4_cm7.d ./Drivers/CMSIS/system_stm32h7xx_dualcore_boot_cm4_cm7.o ./Drivers/CMSIS/system_stm32h7xx_dualcore_boot_cm4_cm7.su

.PHONY: clean-Drivers-2f-CMSIS

