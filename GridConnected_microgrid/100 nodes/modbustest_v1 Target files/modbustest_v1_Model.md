Model ModbusTest_v1

REM *****************************************:
REM * Common entries:
REM *****************************************:

REM Setting the simulation time step...
rtds_write 0x00000000 0x0000004B

REM Machine block inputs...
rtds_write 0x00000003 0x00000000

REM LUT solver inputs...
rtds_write 0x01000000 0x00000000

REM HSSL configuration files...
rtds_file_write 0x01C80000 hssl_tx_config.txt
rtds_file_write 0x01D00000 hssl_rx_config.txt

REM Parallel DTV configuration...


REM *****************************************:
REM * SPC0 entries:
REM *****************************************:

REM SPC0 Topology Selector (TS) initialization...
rtds_file_write 0x08180000 SPC0_red_table.txt

rtds_write 0x08100020 0x00000001
rtds_write 0x08100021 0x00000000
rtds_write 0x08100023 0x00000000
rtds_write 0x08100024 0x00000000
rtds_write 0x08100025 0x00000000
rtds_write 0x08100026 0x00000000
rtds_write 0x08100027 0x00000000
rtds_write 0x08100030 0x00000000
rtds_write 0x08100031 0x00000000
rtds_write 0x08100032 0x00000000
rtds_write 0x08100033 0x00000000
rtds_write 0x08100034 0x00000000
rtds_write 0x08100035 0x00000000
rtds_write 0x08100036 0x00000000
rtds_write 0x08100037 0x00000000
rtds_write 0x08100038 0x00000000
rtds_write 0x08100039 0x00000000
rtds_write 0x0810003A 0x00000000
rtds_write 0x0810003B 0x00000000
rtds_file_write 0x08140000 trivial_imem.txt
rtds_file_write 0x08142000 trivial_lut.txt
rtds_write 0x08100040 0x00000001
rtds_write 0x08100041 0x00000000
rtds_write 0x08100043 0x00000000
rtds_write 0x08100044 0x00000000
rtds_write 0x08100045 0x00000000
rtds_write 0x08100046 0x00000000
rtds_write 0x08100047 0x00000000
rtds_write 0x08100050 0x00000000
rtds_write 0x08100051 0x00000000
rtds_write 0x08100052 0x00000000
rtds_write 0x08100053 0x00000000
rtds_write 0x08100054 0x00000000
rtds_write 0x08100055 0x00000000
rtds_write 0x08100056 0x00000000
rtds_write 0x08100057 0x00000000
rtds_write 0x08100058 0x00000000
rtds_write 0x08100059 0x00000000
rtds_write 0x0810005A 0x00000000
rtds_write 0x0810005B 0x00000000
rtds_file_write 0x08148000 trivial_imem.txt
rtds_file_write 0x0814A000 trivial_lut.txt
rtds_write 0x08100060 0x00000001
rtds_write 0x08100061 0x00000000
rtds_write 0x08100063 0x00000000
rtds_write 0x08100064 0x00000000
rtds_write 0x08100065 0x00000000
rtds_write 0x08100066 0x00000000
rtds_write 0x08100067 0x00000000
rtds_write 0x08100070 0x00000000
rtds_write 0x08100071 0x00000000
rtds_write 0x08100072 0x00000000
rtds_write 0x08100073 0x00000000
rtds_write 0x08100074 0x00000000
rtds_write 0x08100075 0x00000000
rtds_write 0x08100076 0x00000000
rtds_write 0x08100077 0x00000000
rtds_write 0x08100078 0x00000000
rtds_write 0x08100079 0x00000000
rtds_write 0x0810007A 0x00000000
rtds_write 0x0810007B 0x00000000
rtds_file_write 0x08150000 trivial_imem.txt
rtds_file_write 0x08152000 trivial_lut.txt

REM SPC0 Variable Delay initialization...
rtds_write 0x08100001 0x0

REM SPC0 Matrix multiplier initialization...
rtds_file_write 0x08000000 SPC0_Com_Word.txt
rtds_file_write 0x08020000 SPC0_Com_LUT.txt
rtds_file_write 0x08080000 SPC0_MAC0_Val.txt
rtds_file_write 0x08082000 SPC0_MAC0_Col.txt
rtds_file_write 0x08084000 SPC0_MAC1_Val.txt
rtds_file_write 0x08086000 SPC0_MAC1_Col.txt
rtds_file_write 0x08088000 SPC0_MAC2_Val.txt
rtds_file_write 0x0808A000 SPC0_MAC2_Col.txt
rtds_file_write 0x0808C000 SPC0_MAC3_Val.txt
rtds_file_write 0x0808E000 SPC0_MAC3_Col.txt

rtds_write 0x08100004 0x00000000
REM SPC0 Contactors initialization...

REM SPC0 GDS compensation settings...
rtds_write 0x080C0000 0x00000001
rtds_write 0x080C0001 0x00000000
rtds_write 0x080C0004 0x3D23D70A
rtds_write 0x080C0005 0x3D710000
rtds_write 0x08100000 0x00000019

REM SPC0 FSM digital input pin assignments...

REM SPC0 Comparators initialization...

REM SPC0 DTSM initialization...

REM *****************************************:
REM * SPC1 entries:
REM *****************************************:

REM SPC1 Topology Selector (TS) initialization...
rtds_file_write 0x08580000 SPC1_red_table.txt

rtds_write 0x08500020 0x00000000
rtds_write 0x08500021 0x00000000
rtds_write 0x08500023 0x00000000
rtds_write 0x08500024 0x00000000
rtds_write 0x08500025 0x00000000
rtds_write 0x08500026 0x00000000
rtds_write 0x08500027 0x00000000
rtds_write 0x08500030 0x00000000
rtds_write 0x08500031 0x00000000
rtds_write 0x08500032 0x00000000
rtds_write 0x08500033 0x00000000
rtds_write 0x08500034 0x00000000
rtds_write 0x08500035 0x00000000
rtds_write 0x08500036 0x00000000
rtds_write 0x08500037 0x00000000
rtds_write 0x08500038 0x00000000
rtds_write 0x08500039 0x00000000
rtds_write 0x0850003A 0x00000000
rtds_write 0x0850003B 0x00000000
rtds_file_write 0x08540000 trivial_imem.txt
rtds_file_write 0x08542000 trivial_lut.txt
rtds_write 0x08500040 0x00000000
rtds_write 0x08500041 0x00000000
rtds_write 0x08500043 0x00000000
rtds_write 0x08500044 0x00000000
rtds_write 0x08500045 0x00000000
rtds_write 0x08500046 0x00000000
rtds_write 0x08500047 0x00000000
rtds_write 0x08500050 0x00000000
rtds_write 0x08500051 0x00000000
rtds_write 0x08500052 0x00000000
rtds_write 0x08500053 0x00000000
rtds_write 0x08500054 0x00000000
rtds_write 0x08500055 0x00000000
rtds_write 0x08500056 0x00000000
rtds_write 0x08500057 0x00000000
rtds_write 0x08500058 0x00000000
rtds_write 0x08500059 0x00000000
rtds_write 0x0850005A 0x00000000
rtds_write 0x0850005B 0x00000000
rtds_file_write 0x08548000 trivial_imem.txt
rtds_file_write 0x0854A000 trivial_lut.txt
rtds_write 0x08500060 0x00000000
rtds_write 0x08500061 0x00000000
rtds_write 0x08500063 0x00000000
rtds_write 0x08500064 0x00000000
rtds_write 0x08500065 0x00000000
rtds_write 0x08500066 0x00000000
rtds_write 0x08500067 0x00000000
rtds_write 0x08500070 0x00000000
rtds_write 0x08500071 0x00000000
rtds_write 0x08500072 0x00000000
rtds_write 0x08500073 0x00000000
rtds_write 0x08500074 0x00000000
rtds_write 0x08500075 0x00000000
rtds_write 0x08500076 0x00000000
rtds_write 0x08500077 0x00000000
rtds_write 0x08500078 0x00000000
rtds_write 0x08500079 0x00000000
rtds_write 0x0850007A 0x00000000
rtds_write 0x0850007B 0x00000000
rtds_file_write 0x08550000 trivial_imem.txt
rtds_file_write 0x08552000 trivial_lut.txt

REM SPC1 Variable Delay initialization...
rtds_write 0x08500001 0x0

REM SPC1 Matrix multiplier initialization...
rtds_file_write 0x08400000 SPC1_Com_Word.txt
rtds_file_write 0x08420000 SPC1_Com_LUT.txt
rtds_file_write 0x08480000 SPC1_MAC0_Val.txt
rtds_file_write 0x08482000 SPC1_MAC0_Col.txt
rtds_file_write 0x08484000 SPC1_MAC1_Val.txt
rtds_file_write 0x08486000 SPC1_MAC1_Col.txt
rtds_file_write 0x08488000 SPC1_MAC2_Val.txt
rtds_file_write 0x0848A000 SPC1_MAC2_Col.txt
rtds_file_write 0x0848C000 SPC1_MAC3_Val.txt
rtds_file_write 0x0848E000 SPC1_MAC3_Col.txt

rtds_write 0x08500004 0x00000000
REM SPC1 Contactors initialization...

REM SPC1 GDS compensation settings...
rtds_write 0x084C0000 0x00000000
rtds_write 0x084C0001 0x00000000
rtds_write 0x084C0004 0x00000000
rtds_write 0x084C0005 0x00000000
rtds_write 0x08500000 0x00000000

REM SPC1 FSM digital input pin assignments...

REM SPC1 Comparators initialization...

REM SPC1 DTSM initialization...

REM *****************************************:
REM * SPC2 entries:
REM *****************************************:

REM SPC2 Topology Selector (TS) initialization...
rtds_file_write 0x08980000 SPC2_red_table.txt

rtds_write 0x08900020 0x00000000
rtds_write 0x08900021 0x00000000
rtds_write 0x08900023 0x00000000
rtds_write 0x08900024 0x00000000
rtds_write 0x08900025 0x00000000
rtds_write 0x08900026 0x00000000
rtds_write 0x08900027 0x00000000
rtds_write 0x08900030 0x00000000
rtds_write 0x08900031 0x00000000
rtds_write 0x08900032 0x00000000
rtds_write 0x08900033 0x00000000
rtds_write 0x08900034 0x00000000
rtds_write 0x08900035 0x00000000
rtds_write 0x08900036 0x00000000
rtds_write 0x08900037 0x00000000
rtds_write 0x08900038 0x00000000
rtds_write 0x08900039 0x00000000
rtds_write 0x0890003A 0x00000000
rtds_write 0x0890003B 0x00000000
rtds_file_write 0x08940000 trivial_imem.txt
rtds_file_write 0x08942000 trivial_lut.txt
rtds_write 0x08900040 0x00000000
rtds_write 0x08900041 0x00000000
rtds_write 0x08900043 0x00000000
rtds_write 0x08900044 0x00000000
rtds_write 0x08900045 0x00000000
rtds_write 0x08900046 0x00000000
rtds_write 0x08900047 0x00000000
rtds_write 0x08900050 0x00000000
rtds_write 0x08900051 0x00000000
rtds_write 0x08900052 0x00000000
rtds_write 0x08900053 0x00000000
rtds_write 0x08900054 0x00000000
rtds_write 0x08900055 0x00000000
rtds_write 0x08900056 0x00000000
rtds_write 0x08900057 0x00000000
rtds_write 0x08900058 0x00000000
rtds_write 0x08900059 0x00000000
rtds_write 0x0890005A 0x00000000
rtds_write 0x0890005B 0x00000000
rtds_file_write 0x08948000 trivial_imem.txt
rtds_file_write 0x0894A000 trivial_lut.txt
rtds_write 0x08900060 0x00000000
rtds_write 0x08900061 0x00000000
rtds_write 0x08900063 0x00000000
rtds_write 0x08900064 0x00000000
rtds_write 0x08900065 0x00000000
rtds_write 0x08900066 0x00000000
rtds_write 0x08900067 0x00000000
rtds_write 0x08900070 0x00000000
rtds_write 0x08900071 0x00000000
rtds_write 0x08900072 0x00000000
rtds_write 0x08900073 0x00000000
rtds_write 0x08900074 0x00000000
rtds_write 0x08900075 0x00000000
rtds_write 0x08900076 0x00000000
rtds_write 0x08900077 0x00000000
rtds_write 0x08900078 0x00000000
rtds_write 0x08900079 0x00000000
rtds_write 0x0890007A 0x00000000
rtds_write 0x0890007B 0x00000000
rtds_file_write 0x08950000 trivial_imem.txt
rtds_file_write 0x08952000 trivial_lut.txt

REM SPC2 Variable Delay initialization...
rtds_write 0x08900001 0x0

REM SPC2 Matrix multiplier initialization...
rtds_file_write 0x08800000 SPC2_Com_Word.txt
rtds_file_write 0x08820000 SPC2_Com_LUT.txt
rtds_file_write 0x08880000 SPC2_MAC0_Val.txt
rtds_file_write 0x08882000 SPC2_MAC0_Col.txt
rtds_file_write 0x08884000 SPC2_MAC1_Val.txt
rtds_file_write 0x08886000 SPC2_MAC1_Col.txt
rtds_file_write 0x08888000 SPC2_MAC2_Val.txt
rtds_file_write 0x0888A000 SPC2_MAC2_Col.txt
rtds_file_write 0x0888C000 SPC2_MAC3_Val.txt
rtds_file_write 0x0888E000 SPC2_MAC3_Col.txt

rtds_write 0x08900004 0x00000000
REM SPC2 Contactors initialization...

REM SPC2 GDS compensation settings...
rtds_write 0x088C0000 0x00000000
rtds_write 0x088C0001 0x00000000
rtds_write 0x088C0004 0x00000000
rtds_write 0x088C0005 0x00000000
rtds_write 0x08900000 0x00000000

REM SPC2 FSM digital input pin assignments...

REM SPC2 Comparators initialization...

REM SPC2 DTSM initialization...

REM *****************************************:
REM * SPC3 entries:
REM *****************************************:

REM SPC3 Topology Selector (TS) initialization...
rtds_file_write 0x08D80000 SPC3_red_table.txt

rtds_write 0x08D00020 0x00000000
rtds_write 0x08D00021 0x00000000
rtds_write 0x08D00023 0x00000000
rtds_write 0x08D00024 0x00000000
rtds_write 0x08D00025 0x00000000
rtds_write 0x08D00026 0x00000000
rtds_write 0x08D00027 0x00000000
rtds_write 0x08D00030 0x00000000
rtds_write 0x08D00031 0x00000000
rtds_write 0x08D00032 0x00000000
rtds_write 0x08D00033 0x00000000
rtds_write 0x08D00034 0x00000000
rtds_write 0x08D00035 0x00000000
rtds_write 0x08D00036 0x00000000
rtds_write 0x08D00037 0x00000000
rtds_write 0x08D00038 0x00000000
rtds_write 0x08D00039 0x00000000
rtds_write 0x08D0003A 0x00000000
rtds_write 0x08D0003B 0x00000000
rtds_file_write 0x08D40000 trivial_imem.txt
rtds_file_write 0x08D42000 trivial_lut.txt
rtds_write 0x08D00040 0x00000000
rtds_write 0x08D00041 0x00000000
rtds_write 0x08D00043 0x00000000
rtds_write 0x08D00044 0x00000000
rtds_write 0x08D00045 0x00000000
rtds_write 0x08D00046 0x00000000
rtds_write 0x08D00047 0x00000000
rtds_write 0x08D00050 0x00000000
rtds_write 0x08D00051 0x00000000
rtds_write 0x08D00052 0x00000000
rtds_write 0x08D00053 0x00000000
rtds_write 0x08D00054 0x00000000
rtds_write 0x08D00055 0x00000000
rtds_write 0x08D00056 0x00000000
rtds_write 0x08D00057 0x00000000
rtds_write 0x08D00058 0x00000000
rtds_write 0x08D00059 0x00000000
rtds_write 0x08D0005A 0x00000000
rtds_write 0x08D0005B 0x00000000
rtds_file_write 0x08D48000 trivial_imem.txt
rtds_file_write 0x08D4A000 trivial_lut.txt
rtds_write 0x08D00060 0x00000000
rtds_write 0x08D00061 0x00000000
rtds_write 0x08D00063 0x00000000
rtds_write 0x08D00064 0x00000000
rtds_write 0x08D00065 0x00000000
rtds_write 0x08D00066 0x00000000
rtds_write 0x08D00067 0x00000000
rtds_write 0x08D00070 0x00000000
rtds_write 0x08D00071 0x00000000
rtds_write 0x08D00072 0x00000000
rtds_write 0x08D00073 0x00000000
rtds_write 0x08D00074 0x00000000
rtds_write 0x08D00075 0x00000000
rtds_write 0x08D00076 0x00000000
rtds_write 0x08D00077 0x00000000
rtds_write 0x08D00078 0x00000000
rtds_write 0x08D00079 0x00000000
rtds_write 0x08D0007A 0x00000000
rtds_write 0x08D0007B 0x00000000
rtds_file_write 0x08D50000 trivial_imem.txt
rtds_file_write 0x08D52000 trivial_lut.txt

REM SPC3 Variable Delay initialization...
rtds_write 0x08D00001 0x0

REM SPC3 Matrix multiplier initialization...
rtds_file_write 0x08C00000 SPC3_Com_Word.txt
rtds_file_write 0x08C20000 SPC3_Com_LUT.txt
rtds_file_write 0x08C80000 SPC3_MAC0_Val.txt
rtds_file_write 0x08C82000 SPC3_MAC0_Col.txt
rtds_file_write 0x08C84000 SPC3_MAC1_Val.txt
rtds_file_write 0x08C86000 SPC3_MAC1_Col.txt
rtds_file_write 0x08C88000 SPC3_MAC2_Val.txt
rtds_file_write 0x08C8A000 SPC3_MAC2_Col.txt
rtds_file_write 0x08C8C000 SPC3_MAC3_Val.txt
rtds_file_write 0x08C8E000 SPC3_MAC3_Col.txt

rtds_write 0x08D00004 0x00000000
REM SPC3 Contactors initialization...

REM SPC3 GDS compensation settings...
rtds_write 0x08CC0000 0x00000000
rtds_write 0x08CC0001 0x00000000
rtds_write 0x08CC0004 0x00000000
rtds_write 0x08CC0005 0x00000000
rtds_write 0x08D00000 0x00000000

REM SPC3 FSM digital input pin assignments...

REM SPC3 Comparators initialization...

REM SPC3 DTSM initialization...

*****************************************:


REM SP data configuration...
*****************************************:


REM Setting the capture sample step...
rtds_write 0x00000027 0x0000004B


REM post SP Init calculation...
rtds_write 0x00000040 0x00FFFFFF
rtds_write 0x00000041 0x000001C1
rtds_write 0x00000005 0x00000002
glbl_write 0x41200008 0x00000000
glbl_write 0x42200008 0x00000001
glbl_write 0x43200008 0x00000000
rtds_write 0x00000043 0x59682F00
rtds_write 0x00000042 0x047868BF
rtds_write 0x0000000A 0x00000001


REM CoProcessors uBlaze_1, uBlaze_2 and uBlaze_3 configuration
glbl_write 0x40800000 0x7
glbl_write 0xf8000008 0xdf0d


REM CoProcessor ARM_1 configuration...
glbl_write 0xfffffff0 0xffffff2c  
glbl_write 0xf8000244 0x2
glbl_write 0xf8000244 0x22
glbl_write 0xf8000244 0x20
glbl_write 0xf8000244 0x0
glbl_file_write 0xfffc0000 cop_2_app_imem.bin


REM ifconfig eth0 up
sys_command 0x1


REM enable ETH0 Intr on Core0 CPU
glbl_write 0xF8F01834 0x01010101
glbl_write 0x40800000 0x7
glbl_write 0xfffffff0 0xfffc0000


REM Initialize IEC61850 Configuration...
app_file_write 0x0 app_init.txt

REM Download Linux APP
app_file_write 0x5 mbus_server_app.elf
