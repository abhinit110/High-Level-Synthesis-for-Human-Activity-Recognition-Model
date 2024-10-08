// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V_H__
#define __dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
  static const unsigned AddressRange = 768;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V_ram) {
        ram[0] = "0b000000011011";
        ram[1] = "0b111011000111";
        ram[2] = "0b111111101111";
        ram[3] = "0b000010110110";
        ram[4] = "0b000010010111";
        ram[5] = "0b111010010101";
        ram[6] = "0b111111111000";
        ram[7] = "0b111011001011";
        ram[8] = "0b111111001100";
        ram[9] = "0b111111111101";
        ram[10] = "0b111111111101";
        ram[11] = "0b111110110001";
        ram[12] = "0b111011011001";
        ram[13] = "0b110111010001";
        ram[14] = "0b000010101011";
        ram[15] = "0b000001010111";
        ram[16] = "0b111011000010";
        ram[17] = "0b111011101001";
        ram[18] = "0b111100001110";
        ram[19] = "0b000011011110";
        ram[20] = "0b110010010000";
        ram[21] = "0b111001000110";
        ram[22] = "0b000001101110";
        ram[23] = "0b111011011011";
        ram[24] = "0b111110100011";
        ram[25] = "0b111111000011";
        ram[26] = "0b000011010010";
        ram[27] = "0b000011011000";
        ram[28] = "0b111110111110";
        ram[29] = "0b111111011101";
        ram[30] = "0b111110010010";
        ram[31] = "0b111001011010";
        ram[32] = "0b000001001110";
        ram[33] = "0b000000001110";
        ram[34] = "0b111111011011";
        ram[35] = "0b111101111001";
        ram[36] = "0b000001110011";
        ram[37] = "0b000000010110";
        ram[38] = "0b000010011011";
        ram[39] = "0b110101110001";
        ram[40] = "0b111111010101";
        ram[41] = "0b000011011011";
        ram[42] = "0b000010011011";
        ram[43] = "0b111111011110";
        ram[44] = "0b000010011001";
        ram[45] = "0b111011111101";
        ram[46] = "0b000000111010";
        ram[47] = "0b000000011011";
        ram[48] = "0b111110010000";
        ram[49] = "0b000000000000";
        ram[50] = "0b111100010011";
        ram[51] = "0b111111101110";
        ram[52] = "0b111111101000";
        ram[53] = "0b111101010000";
        ram[54] = "0b000000010111";
        ram[55] = "0b111110110110";
        ram[56] = "0b110100001110";
        ram[57] = "0b111011001100";
        ram[58] = "0b000000001101";
        ram[59] = "0b111011010100";
        ram[60] = "0b111101011101";
        ram[61] = "0b000000110111";
        ram[62] = "0b111101110111";
        ram[63] = "0b000000001011";
        ram[64] = "0b111110110010";
        ram[65] = "0b000001110000";
        ram[66] = "0b000000110100";
        ram[67] = "0b111100100100";
        ram[68] = "0b000000100101";
        ram[69] = "0b000001010111";
        ram[70] = "0b111111010100";
        ram[71] = "0b111011011101";
        ram[72] = "0b111101000000";
        ram[73] = "0b000010010111";
        ram[74] = "0b000001111100";
        ram[75] = "0b111101111100";
        ram[76] = "0b000000111010";
        ram[77] = "0b000000001110";
        ram[78] = "0b000000100001";
        ram[79] = "0b000000110111";
        ram[80] = "0b111110011110";
        ram[81] = "0b111101111110";
        ram[82] = "0b111110110010";
        ram[83] = "0b111111010111";
        ram[84] = "0b111111010101";
        ram[85] = "0b000000011011";
        ram[86] = "0b000000011010";
        ram[87] = "0b000001101101";
        ram[88] = "0b000000101101";
        ram[89] = "0b111111111111";
        ram[90] = "0b111011100000";
        ram[91] = "0b000000101100";
        ram[92] = "0b111010011001";
        ram[93] = "0b111011111110";
        ram[94] = "0b000010101111";
        ram[95] = "0b000000000101";
        ram[96] = "0b000001100011";
        ram[97] = "0b111101001001";
        ram[98] = "0b111101000110";
        ram[99] = "0b000001111001";
        ram[100] = "0b111111110111";
        ram[101] = "0b000000000111";
        ram[102] = "0b000000011011";
        ram[103] = "0b111100000101";
        ram[104] = "0b000000000001";
        ram[105] = "0b111100100100";
        ram[106] = "0b000010001111";
        ram[107] = "0b000011010001";
        ram[108] = "0b000000000110";
        ram[109] = "0b111110110010";
        ram[110] = "0b111010101011";
        ram[111] = "0b111001000001";
        ram[112] = "0b111110010011";
        ram[113] = "0b000010001000";
        ram[114] = "0b111111001010";
        ram[115] = "0b111110010000";
        ram[116] = "0b111010001111";
        ram[117] = "0b000001010010";
        ram[118] = "0b111111000111";
        ram[119] = "0b000000000011";
        ram[120] = "0b111111110010";
        ram[121] = "0b000010110000";
        ram[122] = "0b110101011011";
        ram[123] = "0b111011101101";
        ram[124] = "0b111110101001";
        ram[125] = "0b000000111000";
        ram[126] = "0b000010010001";
        ram[127] = "0b111111110010";
        ram[128] = "0b111101000110";
        ram[129] = "0b111110110001";
        ram[130] = "0b111110110110";
        ram[131] = "0b000010110111";
        ram[132] = "0b111011111101";
        ram[133] = "0b111111101110";
        ram[134] = "0b000010001110";
        ram[135] = "0b000010011010";
        ram[136] = "0b000001000010";
        ram[137] = "0b000000000011";
        ram[138] = "0b000001000101";
        ram[139] = "0b111101110010";
        ram[140] = "0b000000101110";
        ram[141] = "0b000000000010";
        ram[142] = "0b111101101100";
        ram[143] = "0b111111000110";
        ram[144] = "0b111101000000";
        ram[145] = "0b111110110110";
        ram[146] = "0b000010110011";
        ram[147] = "0b000010000101";
        ram[148] = "0b000000101111";
        ram[149] = "0b000000000100";
        ram[150] = "0b000000010011";
        ram[151] = "0b111110101101";
        ram[152] = "0b111101011000";
        ram[153] = "0b111111101000";
        ram[154] = "0b111111001011";
        ram[155] = "0b111111000000";
        ram[156] = "0b111110101010";
        ram[157] = "0b111101011101";
        ram[158] = "0b111000111001";
        ram[159] = "0b111011011100";
        ram[160] = "0b000010100111";
        ram[161] = "0b111110100111";
        ram[162] = "0b111110110011";
        ram[163] = "0b111111001111";
        ram[164] = "0b111001011000";
        ram[165] = "0b111101100101";
        ram[166] = "0b111110111001";
        ram[167] = "0b000011010110";
        ram[168] = "0b111110001010";
        ram[169] = "0b111111011101";
        ram[170] = "0b110101100011";
        ram[171] = "0b110101001110";
        ram[172] = "0b111100110011";
        ram[173] = "0b000000001000";
        ram[174] = "0b000001001100";
        ram[175] = "0b000001010101";
        ram[176] = "0b111011111001";
        ram[177] = "0b111010100011";
        ram[178] = "0b000001001001";
        ram[179] = "0b000001011110";
        ram[180] = "0b111111110101";
        ram[181] = "0b000011100100";
        ram[182] = "0b000001001100";
        ram[183] = "0b111000101011";
        ram[184] = "0b000000011000";
        ram[185] = "0b000010110101";
        ram[186] = "0b000001110110";
        ram[187] = "0b111111011111";
        ram[188] = "0b111111001010";
        ram[189] = "0b111000111011";
        ram[190] = "0b000001001101";
        ram[191] = "0b111111010100";
        ram[192] = "0b111111000110";
        ram[193] = "0b000001011110";
        ram[194] = "0b111001101111";
        ram[195] = "0b000011011111";
        ram[196] = "0b000000110000";
        ram[197] = "0b111110000111";
        ram[198] = "0b000000110101";
        ram[199] = "0b111111110011";
        ram[200] = "0b111110101100";
        ram[201] = "0b000010000011";
        ram[202] = "0b000001011100";
        ram[203] = "0b000010001100";
        ram[204] = "0b000000100011";
        ram[205] = "0b111010010011";
        ram[206] = "0b111101011110";
        ram[207] = "0b000000100010";
        ram[208] = "0b111110001011";
        ram[209] = "0b000000101010";
        ram[210] = "0b000011111110";
        ram[211] = "0b000010011101";
        ram[212] = "0b111111010010";
        ram[213] = "0b111101100110";
        ram[214] = "0b000000111001";
        ram[215] = "0b111011110000";
        ram[216] = "0b000000011110";
        ram[217] = "0b000010001111";
        ram[218] = "0b111110001001";
        ram[219] = "0b000010111101";
        ram[220] = "0b111110011000";
        ram[221] = "0b000000100100";
        ram[222] = "0b000000011011";
        ram[223] = "0b000000101100";
        ram[224] = "0b111110101011";
        ram[225] = "0b111101010010";
        ram[226] = "0b000001111010";
        ram[227] = "0b111011011101";
        ram[228] = "0b111100001001";
        ram[229] = "0b000011011111";
        ram[230] = "0b111111010111";
        ram[231] = "0b111110100001";
        ram[232] = "0b000100100101";
        ram[233] = "0b000001110001";
        ram[234] = "0b111100110011";
        ram[235] = "0b000000000011";
        ram[236] = "0b111011100101";
        ram[237] = "0b000000011001";
        ram[238] = "0b111100110111";
        ram[239] = "0b000100001010";
        ram[240] = "0b000001010010";
        ram[241] = "0b000001100010";
        ram[242] = "0b111100010001";
        ram[243] = "0b111000100100";
        ram[244] = "0b000001100011";
        ram[245] = "0b000001100100";
        ram[246] = "0b000000110001";
        ram[247] = "0b111110110100";
        ram[248] = "0b000000010010";
        ram[249] = "0b111000101100";
        ram[250] = "0b000000011111";
        ram[251] = "0b000000111011";
        ram[252] = "0b111101011010";
        ram[253] = "0b000001111110";
        ram[254] = "0b111011000000";
        ram[255] = "0b111110010101";
        ram[256] = "0b000001111101";
        ram[257] = "0b111101010010";
        ram[258] = "0b000001010100";
        ram[259] = "0b000001111010";
        ram[260] = "0b111110100100";
        ram[261] = "0b111101011001";
        ram[262] = "0b000001101010";
        ram[263] = "0b111111101011";
        ram[264] = "0b111111111001";
        ram[265] = "0b111101000100";
        ram[266] = "0b111101101010";
        ram[267] = "0b111110101011";
        ram[268] = "0b000001001010";
        ram[269] = "0b000001011111";
        ram[270] = "0b111110010001";
        ram[271] = "0b111111111011";
        ram[272] = "0b111110000110";
        ram[273] = "0b000000001000";
        ram[274] = "0b000000111101";
        ram[275] = "0b111101101111";
        ram[276] = "0b111110111000";
        ram[277] = "0b000000001110";
        ram[278] = "0b111101011000";
        ram[279] = "0b111111100011";
        ram[280] = "0b000000100010";
        ram[281] = "0b000000011111";
        ram[282] = "0b000010100001";
        ram[283] = "0b000001001111";
        ram[284] = "0b111001111001";
        ram[285] = "0b111010010001";
        ram[286] = "0b000010100011";
        ram[287] = "0b111101001110";
        ram[288] = "0b111111110011";
        ram[289] = "0b111110100110";
        ram[290] = "0b000001101111";
        ram[291] = "0b000001010001";
        ram[292] = "0b000010001001";
        ram[293] = "0b111110110000";
        ram[294] = "0b111111100000";
        ram[295] = "0b000001110110";
        ram[296] = "0b110100110011";
        ram[297] = "0b111101010100";
        ram[298] = "0b111110010001";
        ram[299] = "0b000010000011";
        ram[300] = "0b000001000001";
        ram[301] = "0b000001100010";
        ram[302] = "0b111100110011";
        ram[303] = "0b000001010101";
        ram[304] = "0b000000001001";
        ram[305] = "0b111100110111";
        ram[306] = "0b000000100010";
        ram[307] = "0b111111110010";
        ram[308] = "0b000000010001";
        ram[309] = "0b110100111110";
        ram[310] = "0b111001111111";
        ram[311] = "0b000001110011";
        ram[312] = "0b111110111100";
        ram[313] = "0b000000111100";
        ram[314] = "0b111101010011";
        ram[315] = "0b111011111100";
        ram[316] = "0b111101011100";
        ram[317] = "0b111111110111";
        ram[318] = "0b111111101100";
        ram[319] = "0b111101010100";
        ram[320] = "0b111100011011";
        ram[321] = "0b000010100110";
        ram[322] = "0b000001101101";
        ram[323] = "0b000010111100";
        ram[324] = "0b111111010110";
        ram[325] = "0b111000001011";
        ram[326] = "0b111010110000";
        ram[327] = "0b110111011110";
        ram[328] = "0b111101110001";
        ram[329] = "0b000100011011";
        ram[330] = "0b111011010000";
        ram[331] = "0b111110010010";
        ram[332] = "0b000010111110";
        ram[333] = "0b111011000101";
        ram[334] = "0b111101111001";
        ram[335] = "0b111100011011";
        ram[336] = "0b000001101011";
        ram[337] = "0b111111001100";
        ram[338] = "0b000011111110";
        ram[339] = "0b111011001011";
        ram[340] = "0b000001001010";
        ram[341] = "0b000001001111";
        ram[342] = "0b111101111001";
        ram[343] = "0b110101000111";
        ram[344] = "0b000100111100";
        ram[345] = "0b000011000111";
        ram[346] = "0b111011000101";
        ram[347] = "0b111101001100";
        ram[348] = "0b000010010000";
        ram[349] = "0b111100100101";
        ram[350] = "0b111110111101";
        ram[351] = "0b000000010011";
        ram[352] = "0b000010100111";
        ram[353] = "0b000000111110";
        ram[354] = "0b111101100000";
        ram[355] = "0b000011010000";
        ram[356] = "0b000000100111";
        ram[357] = "0b111101111111";
        ram[358] = "0b000001011101";
        ram[359] = "0b000100010100";
        ram[360] = "0b000010010111";
        ram[361] = "0b000001010101";
        ram[362] = "0b111011111010";
        ram[363] = "0b111111100111";
        ram[364] = "0b000000100100";
        ram[365] = "0b111111110001";
        ram[366] = "0b111101111000";
        ram[367] = "0b111110101010";
        ram[368] = "0b000000010111";
        ram[369] = "0b111100011111";
        ram[370] = "0b111000001000";
        ram[371] = "0b000001010100";
        ram[372] = "0b111110101101";
        ram[373] = "0b111111001100";
        ram[374] = "0b000000011010";
        ram[375] = "0b111101100111";
        ram[376] = "0b111110000101";
        ram[377] = "0b111110100100";
        ram[378] = "0b000010001001";
        ram[379] = "0b000000010110";
        ram[380] = "0b101011000101";
        ram[381] = "0b101110110001";
        ram[382] = "0b000001011011";
        ram[383] = "0b111011110110";
        ram[384] = "0b111110000001";
        ram[385] = "0b000001001010";
        ram[386] = "0b111101110010";
        ram[387] = "0b111000010110";
        ram[388] = "0b000000011010";
        ram[389] = "0b000000100000";
        ram[390] = "0b111100010010";
        ram[391] = "0b000000000010";
        ram[392] = "0b000100101011";
        ram[393] = "0b111111010001";
        ram[394] = "0b111011011100";
        ram[395] = "0b000000100110";
        ram[396] = "0b000001010011";
        ram[397] = "0b111111000011";
        ram[398] = "0b110111010100";
        ram[399] = "0b111110100010";
        ram[400] = "0b111111010110";
        ram[401] = "0b000010101011";
        ram[402] = "0b000011001011";
        ram[403] = "0b000001001001";
        ram[404] = "0b000010101010";
        ram[405] = "0b111010000000";
        ram[406] = "0b000010010101";
        ram[407] = "0b000011110011";
        ram[408] = "0b000001111000";
        ram[409] = "0b111110111011";
        ram[410] = "0b111100000111";
        ram[411] = "0b111000011000";
        ram[412] = "0b111111100100";
        ram[413] = "0b000000110010";
        ram[414] = "0b111101110001";
        ram[415] = "0b111101111011";
        ram[416] = "0b000001010110";
        ram[417] = "0b000000100011";
        ram[418] = "0b111110111111";
        ram[419] = "0b111111010111";
        ram[420] = "0b111100110010";
        ram[421] = "0b000001010000";
        ram[422] = "0b111011010010";
        ram[423] = "0b000000111010";
        ram[424] = "0b000010100000";
        ram[425] = "0b000011001001";
        ram[426] = "0b000001100110";
        ram[427] = "0b111110101101";
        ram[428] = "0b111111110011";
        ram[429] = "0b111011101110";
        ram[430] = "0b000001100010";
        ram[431] = "0b000001111100";
        ram[432] = "0b111111011110";
        ram[433] = "0b000011001110";
        ram[434] = "0b111011000000";
        ram[435] = "0b000000001111";
        ram[436] = "0b000001111111";
        ram[437] = "0b111111111111";
        ram[438] = "0b000000111100";
        ram[439] = "0b000000101111";
        ram[440] = "0b111111100001";
        ram[441] = "0b111011100011";
        ram[442] = "0b000001001000";
        ram[443] = "0b111111010110";
        ram[444] = "0b000001111010";
        ram[445] = "0b000000111110";
        ram[446] = "0b000000100010";
        ram[447] = "0b000011011000";
        ram[448] = "0b000000001001";
        ram[449] = "0b111110111101";
        ram[450] = "0b111110001011";
        ram[451] = "0b111110101001";
        ram[452] = "0b111111100001";
        ram[453] = "0b111101111010";
        ram[454] = "0b111111101111";
        ram[455] = "0b000011111010";
        ram[456] = "0b000000101100";
        ram[457] = "0b111100011001";
        ram[458] = "0b000010101000";
        ram[459] = "0b000011000010";
        ram[460] = "0b000000011001";
        ram[461] = "0b111110101111";
        ram[462] = "0b111110010010";
        ram[463] = "0b111110011111";
        ram[464] = "0b000000111011";
        ram[465] = "0b000011011101";
        ram[466] = "0b000000101101";
        ram[467] = "0b111111111111";
        ram[468] = "0b000010000110";
        ram[469] = "0b111111111110";
        ram[470] = "0b000000000111";
        ram[471] = "0b000010111000";
        ram[472] = "0b000000101000";
        ram[473] = "0b000001111101";
        ram[474] = "0b000001000110";
        ram[475] = "0b111110101101";
        ram[476] = "0b111110100101";
        ram[477] = "0b111110100110";
        ram[478] = "0b000000001011";
        ram[479] = "0b111100101101";
        ram[480] = "0b111010100100";
        ram[481] = "0b111100111111";
        ram[482] = "0b000100101000";
        ram[483] = "0b000100001011";
        ram[484] = "0b111100100110";
        ram[485] = "0b111010100110";
        ram[486] = "0b111110001111";
        ram[487] = "0b111100000100";
        ram[488] = "0b000100000011";
        ram[489] = "0b000000111111";
        ram[490] = "0b111100011110";
        ram[491] = "0b000010000001";
        ram[492] = "0b111101011001";
        ram[493] = "0b111101111001";
        ram[494] = "0b111101010011";
        ram[495] = "0b111011011100";
        ram[496] = "0b111110000010";
        ram[497] = "0b111111011100";
        ram[498] = "0b000000111111";
        ram[499] = "0b000001010011";
        ram[500] = "0b111000100001";
        ram[501] = "0b111101111011";
        ram[502] = "0b000001000110";
        ram[503] = "0b000001011111";
        ram[504] = "0b000010100111";
        ram[505] = "0b000001000101";
        ram[506] = "0b000011001001";
        ram[507] = "0b111110100110";
        ram[508] = "0b000010000011";
        ram[509] = "0b111110101000";
        ram[510] = "0b111100111101";
        ram[511] = "0b000001001010";
        ram[512] = "0b000011001001";
        ram[513] = "0b111011101011";
        ram[514] = "0b000000111100";
        ram[515] = "0b111110011110";
        ram[516] = "0b111101101011";
        ram[517] = "0b000000000111";
        ram[518] = "0b111011000110";
        ram[519] = "0b111110011001";
        ram[520] = "0b000000010011";
        ram[521] = "0b111111100101";
        ram[522] = "0b111101001000";
        ram[523] = "0b000000110111";
        ram[524] = "0b111111010110";
        ram[525] = "0b000000100000";
        ram[526] = "0b111101111010";
        ram[527] = "0b000001011011";
        ram[528] = "0b111101100000";
        ram[529] = "0b000001110010";
        ram[530] = "0b000011000101";
        ram[531] = "0b111101000111";
        ram[532] = "0b000000001000";
        ram[533] = "0b111110110111";
        ram[534] = "0b111110100011";
        ram[535] = "0b000010000100";
        ram[536] = "0b111001011010";
        ram[537] = "0b111011001010";
        ram[538] = "0b000011011110";
        ram[539] = "0b111110110010";
        ram[540] = "0b000000100011";
        ram[541] = "0b000001101110";
        ram[542] = "0b111000100110";
        ram[543] = "0b111011010101";
        ram[544] = "0b000000111110";
        ram[545] = "0b111111100111";
        ram[546] = "0b111110000100";
        ram[547] = "0b000011011011";
        ram[548] = "0b110011100000";
        ram[549] = "0b111001101101";
        ram[550] = "0b000001001001";
        ram[551] = "0b111110001101";
        ram[552] = "0b111001111111";
        ram[553] = "0b000000100110";
        ram[554] = "0b000010100100";
        ram[555] = "0b111111101101";
        ram[556] = "0b000000000101";
        ram[557] = "0b111110000001";
        ram[558] = "0b111111010010";
        ram[559] = "0b111101101101";
        ram[560] = "0b111010110100";
        ram[561] = "0b111100110001";
        ram[562] = "0b111110011010";
        ram[563] = "0b111101010100";
        ram[564] = "0b000000100111";
        ram[565] = "0b000001000100";
        ram[566] = "0b111100001110";
        ram[567] = "0b000000111111";
        ram[568] = "0b000001101101";
        ram[569] = "0b111111010110";
        ram[570] = "0b000000001111";
        ram[571] = "0b111011111100";
        ram[572] = "0b000010000001";
        ram[573] = "0b000011011100";
        ram[574] = "0b000000000001";
        ram[575] = "0b111101110110";
        ram[576] = "0b000011111111";
        ram[577] = "0b111101001010";
        ram[578] = "0b111110110000";
        ram[579] = "0b111100011011";
        ram[580] = "0b111111111110";
        ram[581] = "0b111100110001";
        ram[582] = "0b111110110111";
        ram[583] = "0b111110010010";
        ram[584] = "0b111101010001";
        ram[585] = "0b111011010110";
        ram[586] = "0b000001100110";
        ram[587] = "0b000100010010";
        ram[588] = "0b111101101100";
        ram[589] = "0b111111101101";
        ram[590] = "0b000011001111";
        ram[591] = "0b111000000111";
        ram[592] = "0b000000010111";
        ram[593] = "0b000001111111";
        ram[594] = "0b111100010111";
        ram[595] = "0b000010100001";
        ram[596] = "0b111111100100";
        ram[597] = "0b111100000000";
        ram[598] = "0b000000001000";
        ram[599] = "0b000001111001";
        ram[600] = "0b000001100001";
        ram[601] = "0b000000010001";
        ram[602] = "0b111111010000";
        ram[603] = "0b111101000010";
        ram[604] = "0b000010110110";
        ram[605] = "0b000000011001";
        ram[606] = "0b111111111110";
        ram[607] = "0b111111001101";
        ram[608] = "0b111101100111";
        ram[609] = "0b000010000000";
        ram[610] = "0b111110010101";
        ram[611] = "0b000010101001";
        ram[612] = "0b000001100000";
        ram[613] = "0b000010111100";
        ram[614] = "0b000000001111";
        ram[615] = "0b111111100001";
        ram[616] = "0b000000101110";
        ram[617] = "0b000000110100";
        ram[618] = "0b111110111101";
        ram[619] = "0b000001100010";
        ram[620] = "0b000000110100";
        ram[621] = "0b000001001101";
        ram[622] = "0b000000010100";
        ram[623] = "0b000001110110";
        ram[624] = "0b111100111001";
        ram[625] = "0b111110000000";
        ram[626] = "0b111110001110";
        ram[627] = "0b111101101101";
        ram[628] = "0b111101101111";
        ram[629] = "0b111100111011";
        ram[630] = "0b111110111111";
        ram[631] = "0b000001101010";
        ram[632] = "0b111011111001";
        ram[633] = "0b111011011001";
        ram[634] = "0b111111111100";
        ram[635] = "0b000000111100";
        ram[636] = "0b111011001100";
        ram[637] = "0b111110101011";
        ram[638] = "0b110110011101";
        ram[639] = "0b110110001011";
        ram[640] = "0b111101100101";
        ram[641] = "0b111111110100";
        ram[642] = "0b111111111011";
        ram[643] = "0b111100111100";
        ram[644] = "0b111110110111";
        ram[645] = "0b111111110010";
        ram[646] = "0b000001010011";
        ram[647] = "0b111111101010";
        ram[648] = "0b000000110010";
        ram[649] = "0b111111000100";
        ram[650] = "0b111111000110";
        ram[651] = "0b111110110011";
        ram[652] = "0b111110000101";
        ram[653] = "0b111110011011";
        ram[654] = "0b000001101100";
        ram[655] = "0b111010111010";
        ram[656] = "0b111101100110";
        ram[657] = "0b000000110011";
        ram[658] = "0b000000011101";
        ram[659] = "0b111101101001";
        ram[660] = "0b000000001000";
        ram[661] = "0b000001110110";
        ram[662] = "0b111111110101";
        ram[663] = "0b000010011101";
        ram[664] = "0b000000111011";
        ram[665] = "0b000010001000";
        ram[666] = "0b111110100110";
        ram[667] = "0b000000010011";
        ram[668] = "0b111111011001";
        ram[669] = "0b111100001011";
        ram[670] = "0b000000101011";
        ram[671] = "0b000100001011";
        ram[672] = "0b000001110111";
        ram[673] = "0b000010001010";
        ram[674] = "0b000001010011";
        ram[675] = "0b111100001001";
        ram[676] = "0b111101010011";
        ram[677] = "0b111110101111";
        ram[678] = "0b111111010100";
        ram[679] = "0b111100011111";
        ram[680] = "0b111101001101";
        ram[681] = "0b111100101110";
        ram[682] = "0b111110010101";
        ram[683] = "0b000001010011";
        ram[684] = "0b000001010100";
        ram[685] = "0b000010000110";
        ram[686] = "0b000101010101";
        ram[687] = "0b111011101010";
        ram[688] = "0b000010000100";
        ram[689] = "0b111110100001";
        ram[690] = "0b111011110010";
        ram[691] = "0b111111111101";
        ram[692] = "0b111011100001";
        ram[693] = "0b000000011010";
        ram[694] = "0b000010110001";
        ram[695] = "0b111111110010";
        ram[696] = "0b111111100010";
        ram[697] = "0b000000100010";
        ram[698] = "0b111110101100";
        ram[699] = "0b000001010100";
        ram[700] = "0b000001100110";
        ram[701] = "0b111111111111";
        ram[702] = "0b000000011000";
        ram[703] = "0b111111110111";
        ram[704] = "0b000000000100";
        ram[705] = "0b111100101100";
        ram[706] = "0b111110001101";
        ram[707] = "0b111110011101";
        ram[708] = "0b111011111101";
        ram[709] = "0b111110110100";
        ram[710] = "0b111110011000";
        ram[711] = "0b000001100101";
        ram[712] = "0b000010111111";
        ram[713] = "0b111111110110";
        ram[714] = "0b111011111101";
        ram[715] = "0b111110000010";
        ram[716] = "0b000010101010";
        ram[717] = "0b000011100001";
        ram[718] = "0b111110110101";
        ram[719] = "0b000000101001";
        ram[720] = "0b000000110001";
        ram[721] = "0b000000010111";
        ram[722] = "0b111100011011";
        ram[723] = "0b111010100001";
        ram[724] = "0b000000000100";
        ram[725] = "0b000000111110";
        ram[726] = "0b111111011100";
        ram[727] = "0b000010010000";
        ram[728] = "0b110111110011";
        ram[729] = "0b111011101110";
        ram[730] = "0b000001110011";
        ram[731] = "0b000100101001";
        ram[732] = "0b000000001101";
        ram[733] = "0b000001100010";
        ram[734] = "0b111100001100";
        ram[735] = "0b111011100110";
        ram[736] = "0b111110101101";
        ram[737] = "0b000010001110";
        ram[738] = "0b111110101100";
        ram[739] = "0b111111110110";
        ram[740] = "0b000111110001";
        ram[741] = "0b111000101001";
        ram[742] = "0b111111100000";
        ram[743] = "0b000000010011";
        ram[744] = "0b111110011000";
        ram[745] = "0b111111111011";
        ram[746] = "0b111101001010";
        ram[747] = "0b000010000011";
        ram[748] = "0b111110001010";
        ram[749] = "0b000011000001";
        ram[750] = "0b111111010001";
        ram[751] = "0b111100100011";
        ram[752] = "0b000001001100";
        ram[753] = "0b000000011111";
        ram[754] = "0b111110001101";
        ram[755] = "0b111101110101";
        ram[756] = "0b000011100011";
        ram[757] = "0b111110001111";
        ram[758] = "0b000000101011";
        ram[759] = "0b111100111110";
        ram[760] = "0b111100111111";
        ram[761] = "0b000000110001";
        ram[762] = "0b000001000011";
        ram[763] = "0b000000001100";
        ram[764] = "0b111000011101";
        ram[765] = "0b000001111010";
        ram[766] = "0b111110100000";
        ram[767] = "0b000100000001";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 768;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V_ram* meminst;


SC_CTOR(dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V) {
meminst = new dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V_ram("dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config10_s_w10_V() {
    delete meminst;
}


};//endmodule
#endif
