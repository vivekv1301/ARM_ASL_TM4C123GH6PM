Steps involved in Creating a new project.
1. Project tab >> New project >> Save with approp file name
2. Select target device >> TM4C123GH6PM >> OK >> No to startup file
3. Project window >> Options for Target 1 (Alt + F7)
4. Output tab >> Create HEX File
5. C/C++ tab >> Include paths >> add path of TivaWare series >> ti\TivaWare_C_Series
6. Debug tab >> Use checkbox >> Stellaris ICDI drivers >> OK
7. Add .c code file to Source group in project window
8. Add startup file to source group
9. Source Group 1 >> Add existing file >> ti >> TivaWare_C_Series >> examples >> Projects >> all files >> startup_rvmdk.S
10. Type the program and dump it onto the Microcontroller
