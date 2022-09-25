import sys
from timeit import default_timer as timer

sys.set_int_max_str_digits(0)    # To Set -> No Limit For Integer

megabyte = int(input("\nMemory Space (in Megabyte) = "))
bits = 8388608 * megabyte    # 8 * (1024^2) = 8388608

print(f"\nCalculating The Maximum-Decimal-Integer-Number That Can Fit Inside The \'{megabyte} Megabyte\' Memory Space.\n")

start = timer()
num = (1 << bits) - 1    # Calculating The Maximum-Decimal-Integer-Number That Can Fit Inside The {bits} Megabyte Memory Space
end = timer()
elapsed = (end - start)
print(f"\nCalculation Completed in : {elapsed} seconds!")

start = timer()
num_str = str(num)    # Converting Number To String
end = timer()
elapsed = (end - start)

number_of_digits = len(num_str)
print(f"\nNumber of Digits : {number_of_digits}")
print(f"\nConverted The Resultant Number To Text in : {elapsed} seconds!")

# Write The Result into The Result File
with open(f"result_for_{megabyte}_Mb.txt", "w") as file:
    start = timer()
    file.write(num_str)
    end = timer()

elapsed = (end - start)
print(f"\nWriting into The Result-File Took : {elapsed} seconds!\n\nDone!")
