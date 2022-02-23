#include "movement.h"

//makes vector =0,0 when object is made
movement::movement(float dt) {
	mover2.x = 0;
	mover2.y = 0;
	deltaTimeMP = dt;
}
void movement::insilizeBools(bool moveD[360])//set bool arry to false
{
	for (int i = 0; i < 361; i++) {
		moveD[i] = false;
	
	}
}
//cheaks what rotaion the player is at
void movement::cheakmove(bool moveD[360], sf::Sprite ship)
{
	int rot = ship.getRotation();
	switch (rot) {
	case 0: moveD[0] = true; break;
	case 1: moveD[1] = true; break;
	case 2: moveD[2] = true; break;
	case 3: moveD[3] = true; break;
	case 4: moveD[4] = true; break;
	case 5: moveD[5] = true; break;
	case 6: moveD[6] = true; break;
	case 7: moveD[7] = true; break;
	case 8: moveD[8] = true; break;
	case 9: moveD[9] = true; break;
	case 10: moveD[10] = true; break;
	case 11: moveD[11] = true; break;
	case 12: moveD[12] = true; break;
	case 13: moveD[13] = true; break;
	case 14: moveD[14] = true; break;
	case 15: moveD[15] = true; break;
	case 16: moveD[16] = true; break;
	case 17: moveD[17] = true; break;
	case 18: moveD[18] = true; break;
	case 19: moveD[19] = true; break;
	case 20: moveD[20] = true; break;
	case 21: moveD[21] = true; break;
	case 22: moveD[22] = true; break;
	case 23: moveD[23] = true; break;
	case 24: moveD[24] = true; break;
	case 25: moveD[25] = true; break;
	case 26: moveD[26] = true; break;
	case 27: moveD[27] = true; break;
	case 28: moveD[28] = true; break;
	case 29: moveD[29] = true; break;
	case 30: moveD[30] = true; break;
	case 31: moveD[31] = true; break;
	case 32: moveD[32] = true; break;
	case 33: moveD[33] = true; break;
	case 34: moveD[34] = true; break;
	case 35: moveD[35] = true; break;
	case 36: moveD[36] = true; break;
	case 37: moveD[37] = true; break;
	case 38: moveD[38] = true; break;
	case 39: moveD[39] = true; break;
	case 40: moveD[40] = true; break;
	case 41: moveD[41] = true; break;
	case 42: moveD[42] = true; break;
	case 43: moveD[43] = true; break;
	case 44: moveD[44] = true; break;
	case 45: moveD[45] = true; break;
	case 46: moveD[46] = true; break;
	case 47: moveD[47] = true; break;
	case 48: moveD[48] = true; break;
	case 49: moveD[49] = true; break;
	case 50: moveD[50] = true; break;
	case 51: moveD[51] = true; break;
	case 52: moveD[52] = true; break;
	case 53: moveD[53] = true; break;
	case 54: moveD[54] = true; break;
	case 55: moveD[55] = true; break;
	case 56: moveD[56] = true; break;
	case 57: moveD[57] = true; break;
	case 58: moveD[58] = true; break;
	case 59: moveD[59] = true; break;
	case 60: moveD[60] = true; break;
	case 61: moveD[61] = true; break;
	case 62: moveD[62] = true; break;
	case 63: moveD[63] = true; break;
	case 64: moveD[64] = true; break;
	case 65: moveD[65] = true; break;
	case 66: moveD[66] = true; break;
	case 67: moveD[67] = true; break;
	case 68: moveD[68] = true; break;
	case 69: moveD[69] = true; break;
	case 70: moveD[70] = true; break;
	case 71: moveD[71] = true; break;
	case 72: moveD[72] = true; break;
	case 73: moveD[73] = true; break;
	case 74: moveD[74] = true; break;
	case 75: moveD[75] = true; break;
	case 76: moveD[76] = true; break;
	case 77: moveD[77] = true; break;
	case 78: moveD[78] = true; break;
	case 79: moveD[79] = true; break;
	case 80: moveD[80] = true; break;
	case 81: moveD[81] = true; break;
	case 82: moveD[82] = true; break;
	case 83: moveD[83] = true; break;
	case 84: moveD[84] = true; break;
	case 85: moveD[85] = true; break;
	case 86: moveD[86] = true; break;
	case 87: moveD[87] = true; break;
	case 88: moveD[88] = true; break;
	case 89: moveD[89] = true; break;
	case 90: moveD[90] = true; break;
	case 91: moveD[91] = true; break;
	case 92: moveD[92] = true; break;
	case 93: moveD[93] = true; break;
	case 94: moveD[94] = true; break;
	case 95: moveD[95] = true; break;
	case 96: moveD[96] = true; break;
	case 97: moveD[97] = true; break;
	case 98: moveD[98] = true; break;
	case 99: moveD[99] = true; break;
	case 100: moveD[100] = true; break;
	case 101: moveD[101] = true; break;
	case 102: moveD[102] = true; break;
	case 103: moveD[103] = true; break;
	case 104: moveD[104] = true; break;
	case 105: moveD[105] = true; break;
	case 106: moveD[106] = true; break;
	case 107: moveD[107] = true; break;
	case 108: moveD[108] = true; break;
	case 109: moveD[109] = true; break;
	case 110: moveD[110] = true; break;
	case 111: moveD[111] = true; break;
	case 112: moveD[112] = true; break;
	case 113: moveD[113] = true; break;
	case 114: moveD[114] = true; break;
	case 115: moveD[115] = true; break;
	case 116: moveD[116] = true; break;
	case 117: moveD[117] = true; break;
	case 118: moveD[118] = true; break;
	case 119: moveD[119] = true; break;
	case 120: moveD[120] = true; break;
	case 121: moveD[121] = true; break;
	case 122: moveD[122] = true; break;
	case 123: moveD[123] = true; break;
	case 124: moveD[124] = true; break;
	case 125: moveD[125] = true; break;
	case 126: moveD[126] = true; break;
	case 127: moveD[127] = true; break;
	case 128: moveD[128] = true; break;
	case 129: moveD[129] = true; break;
	case 130: moveD[130] = true; break;
	case 131: moveD[131] = true; break;
	case 132: moveD[132] = true; break;
	case 133: moveD[133] = true; break;
	case 134: moveD[134] = true; break;
	case 135: moveD[135] = true; break;
	case 136: moveD[136] = true; break;
	case 137: moveD[137] = true; break;
	case 138: moveD[138] = true; break;
	case 139: moveD[139] = true; break;
	case 140: moveD[140] = true; break;
	case 141: moveD[141] = true; break;
	case 142: moveD[142] = true; break;
	case 143: moveD[143] = true; break;
	case 144: moveD[144] = true; break;
	case 145: moveD[145] = true; break;
	case 146: moveD[146] = true; break;
	case 147: moveD[147] = true; break;
	case 148: moveD[148] = true; break;
	case 149: moveD[149] = true; break;
	case 150: moveD[150] = true; break;
	case 151: moveD[151] = true; break;
	case 152: moveD[152] = true; break;
	case 153: moveD[153] = true; break;
	case 154: moveD[154] = true; break;
	case 155: moveD[155] = true; break;
	case 156: moveD[156] = true; break;
	case 157: moveD[157] = true; break;
	case 158: moveD[158] = true; break;
	case 159: moveD[159] = true; break;
	case 160: moveD[160] = true; break;
	case 161: moveD[161] = true; break;
	case 162: moveD[162] = true; break;
	case 163: moveD[163] = true; break;
	case 164: moveD[164] = true; break;
	case 165: moveD[165] = true; break;
	case 166: moveD[166] = true; break;
	case 167: moveD[167] = true; break;
	case 168: moveD[168] = true; break;
	case 169: moveD[169] = true; break;
	case 170: moveD[170] = true; break;
	case 171: moveD[171] = true; break;
	case 172: moveD[172] = true; break;
	case 173: moveD[173] = true; break;
	case 174: moveD[174] = true; break;
	case 175: moveD[175] = true; break;
	case 176: moveD[176] = true; break;
	case 177: moveD[177] = true; break;
	case 178: moveD[178] = true; break;
	case 179: moveD[179] = true; break;
	case 180: moveD[180] = true; break;
	case 181: moveD[181] = true; break;
	case 182: moveD[182] = true; break;
	case 183: moveD[183] = true; break;
	case 184: moveD[184] = true; break;
	case 185: moveD[185] = true; break;
	case 186: moveD[186] = true; break;
	case 187: moveD[187] = true; break;
	case 188: moveD[188] = true; break;
	case 189: moveD[189] = true; break;
	case 190: moveD[190] = true; break;
	case 191: moveD[191] = true; break;
	case 192: moveD[192] = true; break;
	case 193: moveD[193] = true; break;
	case 194: moveD[194] = true; break;
	case 195: moveD[195] = true; break;
	case 196: moveD[196] = true; break;
	case 197: moveD[197] = true; break;
	case 198: moveD[198] = true; break;
	case 199: moveD[199] = true; break;
	case 200: moveD[200] = true; break;
	case 201: moveD[201] = true; break;
	case 202: moveD[202] = true; break;
	case 203: moveD[203] = true; break;
	case 204: moveD[204] = true; break;
	case 205: moveD[205] = true; break;
	case 206: moveD[206] = true; break;
	case 207: moveD[207] = true; break;
	case 208: moveD[208] = true; break;
	case 209: moveD[209] = true; break;
	case 210: moveD[210] = true; break;
	case 211: moveD[211] = true; break;
	case 212: moveD[212] = true; break;
	case 213: moveD[213] = true; break;
	case 214: moveD[214] = true; break;
	case 215: moveD[215] = true; break;
	case 216: moveD[216] = true; break;
	case 217: moveD[217] = true; break;
	case 218: moveD[218] = true; break;
	case 219: moveD[219] = true; break;
	case 220: moveD[220] = true; break;
	case 221: moveD[221] = true; break;
	case 222: moveD[222] = true; break;
	case 223: moveD[223] = true; break;
	case 224: moveD[224] = true; break;
	case 225: moveD[225] = true; break;
	case 226: moveD[226] = true; break;
	case 227: moveD[227] = true; break;
	case 228: moveD[228] = true; break;
	case 229: moveD[229] = true; break;
	case 230: moveD[230] = true; break;
	case 231: moveD[231] = true; break;
	case 232: moveD[232] = true; break;
	case 233: moveD[233] = true; break;
	case 234: moveD[234] = true; break;
	case 235: moveD[235] = true; break;
	case 236: moveD[236] = true; break;
	case 237: moveD[237] = true; break;
	case 238: moveD[238] = true; break;
	case 239: moveD[239] = true; break;
	case 240: moveD[240] = true; break;
	case 241: moveD[241] = true; break;
	case 242: moveD[242] = true; break;
	case 243: moveD[243] = true; break;
	case 244: moveD[244] = true; break;
	case 245: moveD[245] = true; break;
	case 246: moveD[246] = true; break;
	case 247: moveD[247] = true; break;
	case 248: moveD[248] = true; break;
	case 249: moveD[249] = true; break;
	case 250: moveD[250] = true; break;
	case 251: moveD[251] = true; break;
	case 252: moveD[252] = true; break;
	case 253: moveD[253] = true; break;
	case 254: moveD[254] = true; break;
	case 255: moveD[255] = true; break;
	case 256: moveD[256] = true; break;
	case 257: moveD[257] = true; break;
	case 258: moveD[258] = true; break;
	case 259: moveD[259] = true; break;
	case 260: moveD[260] = true; break;
	case 261: moveD[261] = true; break;
	case 262: moveD[262] = true; break;
	case 263: moveD[263] = true; break;
	case 264: moveD[264] = true; break;
	case 265: moveD[265] = true; break;
	case 266: moveD[266] = true; break;
	case 267: moveD[267] = true; break;
	case 268: moveD[268] = true; break;
	case 269: moveD[269] = true; break;
	case 270: moveD[270] = true; break;
	case 271: moveD[271] = true; break;
	case 272: moveD[272] = true; break;
	case 273: moveD[273] = true; break;
	case 274: moveD[274] = true; break;
	case 275: moveD[275] = true; break;
	case 276: moveD[276] = true; break;
	case 277: moveD[277] = true; break;
	case 278: moveD[278] = true; break;
	case 279: moveD[279] = true; break;
	case 280: moveD[280] = true; break;
	case 281: moveD[281] = true; break;
	case 282: moveD[282] = true; break;
	case 283: moveD[283] = true; break;
	case 284: moveD[284] = true; break;
	case 285: moveD[285] = true; break;
	case 286: moveD[286] = true; break;
	case 287: moveD[287] = true; break;
	case 288: moveD[288] = true; break;
	case 289: moveD[289] = true; break;
	case 290: moveD[290] = true; break;
	case 291: moveD[291] = true; break;
	case 292: moveD[292] = true; break;
	case 293: moveD[293] = true; break;
	case 294: moveD[294] = true; break;
	case 295: moveD[295] = true; break;
	case 296: moveD[296] = true; break;
	case 297: moveD[297] = true; break;
	case 298: moveD[298] = true; break;
	case 299: moveD[299] = true; break;
	case 300: moveD[300] = true; break;
	case 301: moveD[301] = true; break;
	case 302: moveD[302] = true; break;
	case 303: moveD[303] = true; break;
	case 304: moveD[304] = true; break;
	case 305: moveD[305] = true; break;
	case 306: moveD[306] = true; break;
	case 307: moveD[307] = true; break;
	case 308: moveD[308] = true; break;
	case 309: moveD[309] = true; break;
	case 310: moveD[310] = true; break;
	case 311: moveD[311] = true; break;
	case 312: moveD[312] = true; break;
	case 313: moveD[313] = true; break;
	case 314: moveD[314] = true; break;
	case 315: moveD[315] = true; break;
	case 316: moveD[316] = true; break;
	case 317: moveD[317] = true; break;
	case 318: moveD[318] = true; break;
	case 319: moveD[319] = true; break;
	case 320: moveD[320] = true; break;
	case 321: moveD[321] = true; break;
	case 322: moveD[322] = true; break;
	case 323: moveD[323] = true; break;
	case 324: moveD[324] = true; break;
	case 325: moveD[325] = true; break;
	case 326: moveD[326] = true; break;
	case 327: moveD[327] = true; break;
	case 328: moveD[328] = true; break;
	case 329: moveD[329] = true; break;
	case 330: moveD[330] = true; break;
	case 331: moveD[331] = true; break;
	case 332: moveD[332] = true; break;
	case 333: moveD[333] = true; break;
	case 334: moveD[334] = true; break;
	case 335: moveD[335] = true; break;
	case 336: moveD[336] = true; break;
	case 337: moveD[337] = true; break;
	case 338: moveD[338] = true; break;
	case 339: moveD[339] = true; break;
	case 340: moveD[340] = true; break;
	case 341: moveD[341] = true; break;
	case 342: moveD[342] = true; break;
	case 343: moveD[343] = true; break;
	case 344: moveD[344] = true; break;
	case 345: moveD[345] = true; break;
	case 346: moveD[346] = true; break;
	case 347: moveD[347] = true; break;
	case 348: moveD[348] = true; break;
	case 349: moveD[349] = true; break;
	case 350: moveD[350] = true; break;
	case 351: moveD[351] = true; break;
	case 352: moveD[352] = true; break;
	case 353: moveD[353] = true; break;
	case 354: moveD[354] = true; break;
	case 355: moveD[355] = true; break;
	case 356: moveD[356] = true; break;
	case 357: moveD[357] = true; break;
	case 358: moveD[358] = true; break;
	case 359: moveD[359] = true; break;
	}



}
//& symbol save the charge to the class var 
//moves ship
void movement::realmove(bool moveD[360], sf::Vector2f &mover2, float trust,sf::Sprite ship) {
	//sees what angle the ship is at and move the ship based off the angle
	//moves up  
	int rot=ship.getRotation();
	//mover2.x += abs(cos(1) / 1000 + trust)*deltaTimeMP;
	//mover2.y -= abs(sin(1) / 100 + trust)*deltaTimeMP;
	// abs(); this makes any number from a equation in the () a postive number
	//cos is used to find the x
	//sin is use to find the y
	//they are needed beause it is hard disiuse bewtween angles at a small scale (but their may be a better way to do this)

	if (moveD[0] == true) {//goes up
		mover2.y -= sin(0) / 1000 + trust;
	}
	if (moveD[rot] == true&&rot>=2&&rot<=44) {
		mover2.x += abs(cos(rot) / 1000 + trust);
		mover2.y -= abs(sin(rot) / 100 + trust);
	}
	if (moveD[45] == true) {//goes right and up 
		mover2.x += cos(45) / 1000 + trust;
		mover2.y -= sin(45) / 1000 + trust;
	}
	if (moveD[rot] == true&&rot>=46&&rot<=69) {
		mover2.x += abs(cos(rot) / 100 + trust);
		mover2.y -= abs(sin(rot) / 1000 + trust);
	}
	if (moveD[rot] == true && rot >= 70 && rot <= 86) {
		mover2.x += abs(cos(rot) / 100 + trust);
		mover2.y -= abs(sin(rot) / 10000 + trust / 1.2);
	}
	if (moveD[rot] == true && rot >= 86 && rot <= 89&&rot!=90) {
		mover2.x += abs(cos(rot) / 100 + trust);
	}
	if (moveD[90] == true) { mover2.x += trust; }//goes right
	if (moveD[rot] == true && rot >= 91 && rot <= 99) {
		mover2.x += abs(cos(rot) / 100 + trust);
		mover2.y += abs(sin(rot) / 1000 + trust / 1.2);
	}
	if (moveD[rot] == true && rot >= 99 && rot <= 124) {
		mover2.x += abs(cos(rot) / 100 + trust);
		mover2.y += abs(sin(rot) / 1000 + trust);
	}
	if (moveD[rot] == true && rot >= 125 && rot <= 131) {
		mover2.x += abs(cos(rot) / 100 + trust);
		mover2.y += abs(sin(rot) / 1000 + trust / 1.2);
	}
	if (moveD[rot] == true &&rot >= 132 && rot <= 137) {//goes right and down
		mover2.x += trust; mover2.y = mover2.x;
	}
	if (moveD[rot] == true && rot >= 138 && rot <= 159) {
		mover2.x += abs(cos(159) / 100 + trust);
		mover2.y += abs(sin(159) / 1000 + trust);
	}
	if (moveD[rot] == true && rot >= 160 && rot <= 170) {
		mover2.x += abs(cos(rot) / 1000 + trust);
		mover2.y += abs(sin(rot) / 100 + trust);
	}
	if (moveD[rot] == true && rot == 171 || rot == 172) {
		mover2.x += abs(cos(rot) / 1000 + trust / 1.2);
		mover2.y += abs(sin(rot) / 100 + trust);
	}
	if (moveD[rot] == true && rot >= 173 && rot <= 177) {
		mover2.x += abs(cos(rot) / 1000 + trust / 1.3);
		mover2.y += abs(sin(rot) / 100 + trust);
	}
	if (moveD[rot] == true && rot >= 178 && rot <= 183) {//goes down
		mover2.y += trust;
	}
	if (moveD[rot] == true && rot >= 184 && rot <= 190) {
		mover2.x -= abs(cos(rot) / 1000 + trust / 1.2);
		mover2.y += abs(sin(rot) / 100 + trust);
	}
	if (moveD[rot] == true && rot >= 191 && rot <= 199) {
		mover2.x -= abs(cos(rot) / 10000 + trust);
		mover2.y += abs(sin(rot) / 100 + trust);
	}
	if (moveD[rot] == true && rot >= 200 && rot <= 222) {
		mover2.x -= abs(cos(rot) / 100000 + trust);
		mover2.y += abs(sin(rot) / 100 + trust);
	}
	if (moveD[rot] == true && rot >= 223 && rot <= 227) {//goes left and down
		mover2.x -= cos(45) / 1000 + trust;
		mover2.y += sin(45) / 1000 + trust;
	}
	if (moveD[rot] == true && rot >= 228 && rot <= 238) {
		mover2.x -= abs(cos(rot) / 10000 + trust);
		mover2.y += abs(sin(rot) / 100 + trust);
	}
	if (moveD[rot] == true && rot >= 239 && rot <= 253) {
		mover2.x -= abs(cos(rot) / 100 + trust);
		mover2.y += abs(sin(rot) / 10000 + trust);
	}
	if (moveD[rot] == true && rot >= 254 && rot <= 266) {
		mover2.x -= abs(cos(rot) / 100 + trust);
		mover2.y += abs(sin(rot) / 10000 + trust / 1.2);
	}
	if (moveD[rot] == true && rot >= 267 && rot <= 272) {//goes left
		mover2.x -= trust;
	}
	if (moveD[rot] == true && rot >= 273 && rot <= 286&&rot!=285) {
		mover2.x -= abs(cos(rot) / 100 + trust);
		mover2.y -= abs(sin(rot) / 10000 + trust / 1.2);
	}
	if (moveD[285] == true) {
		mover2.x -= abs(cos(285) / 100 + trust);
		mover2.y -= abs(sin(285) / 100000 + trust / 1.2);//werid could cause glitch
	}
	if (moveD[rot] == true && rot >= 287 && rot <= 312) {
		mover2.x -= abs(cos(rot) / 100 + trust);
		mover2.y -= abs(sin(rot) / 10000 + trust);
	}
	if (moveD[rot] == true && rot >= 313 && rot <= 317) {//goes left and up
		mover2.x -= trust; mover2.y = mover2.x;
	}
	if (moveD[rot] == true && rot >= 318 && rot <= 339) {
		mover2.x -= abs(cos(rot) / 100 + trust);
		mover2.y -= abs(sin(rot) / 10000 + trust);
	}
	if (moveD[rot] == true && rot >= 340 && rot <= 344) {
		mover2.x -= abs(cos(rot) / 1000 + trust);
		mover2.y -= abs(sin(rot) / 1000 + trust);
	}
	if (moveD[rot] == true && rot >= 345 && rot <= 357) {
		mover2.x -= abs(cos(rot) / 1000 + trust / 1.2);
		mover2.y -= abs(sin(rot) / 1000 + trust);
	}
	if (moveD[rot] == true && rot == 358 || rot == 359) {//goes up
		mover2.y -= sin(0) / 1000 + trust;
	}
	
	///old movement code
	/*
	if (moveD[0] == true) {
		//mover2.y -= trust*deltaTimeMP;
		mover2.y -= sin(0)/1000+trust*deltaTimeMP;
	
	}
	if (moveD[1] == true) {
		mover2.x += abs(cos(1) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(1) / 100 + trust)*deltaTimeMP;
		//mover2.x += trust*deltaTimeMP; mover2.y = mover2.x*-1;
	}
	if (moveD[2] == true) {
		mover2.x += abs(cos(2) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(2) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[3] == true) {
		mover2.x += abs(cos(3) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(3) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[4] == true) {
		mover2.x += abs(cos(4) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(4) / 100+ trust)*deltaTimeMP;
	}
	if (moveD[5] == true) {
		mover2.x += abs(cos(5) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(5) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[6] == true) {
		mover2.x += abs(cos(6) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(6) / 100+ trust)*deltaTimeMP;
	}
	if (moveD[7] == true) {
		mover2.x += abs(cos(7) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(7) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[8] == true) {
		mover2.x += abs(cos(8) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(8) / 100+ trust)*deltaTimeMP;
	}
	if (moveD[9] == true) {
		mover2.x += abs(cos(9) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(9) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[10] == true) {
		mover2.x += abs(cos(10) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(10) / 100+trust)*deltaTimeMP;
	}
	if (moveD[11] == true) {
		mover2.x += abs(cos(11) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(11) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[12] == true) {
		mover2.x += abs(cos(12) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(12) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[13] == true) {
		mover2.x += abs(cos(13) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(13) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[14] == true) {
		mover2.x += abs(cos(14) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(14) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[15] == true) {
		mover2.x += abs(cos(15) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(15) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[16] == true) {
		mover2.x += abs(cos(16) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(16) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[17] == true) {
		mover2.x += abs(cos(17) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(17) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[18] == true) {
		mover2.x += abs(cos(18) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(18) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[19] == true) {
		mover2.x += abs(cos(19) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(19) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[20] == true) {
		mover2.x += abs(cos(20) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(20) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[21] == true) {
		mover2.x += abs(cos(21) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(21) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[22] == true) {
		mover2.x += abs(cos(22) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(22) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[23] == true) {
		mover2.x += abs(cos(23) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(23) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[24] == true) {
		mover2.x += abs(cos(24) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(24) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[25] == true) {
		mover2.x += abs(cos(25) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(25) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[26] == true) {
		mover2.x += abs(cos(26) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(26) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[27] == true) {
		mover2.x += abs(cos(27) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(27) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[28] == true) {
		mover2.x += abs(cos(28) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(28) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[29] == true) {
		mover2.x += abs(cos(29) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(29) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[30] == true) {
		mover2.x += abs(cos(30) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(30) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[31] == true) {
		mover2.x += abs(cos(31) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(31) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[32] == true) {
		mover2.x += abs(cos(32) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(32) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[33] == true) {
		mover2.x += abs(cos(33) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(33) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[34] == true) {
		mover2.x += abs(cos(34) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(34) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[35] == true) {
		mover2.x += abs(cos(35) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(35) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[36] == true) {
		mover2.x += abs(cos(36) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(36) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[37] == true) {
		mover2.x += abs(cos(37) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(37) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[38] == true) {
		mover2.x += abs(cos(38) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(38) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[39] == true) {
		mover2.x += abs(cos(39) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(39) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[40] == true) {
		mover2.x += abs(cos(40) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(40) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[41] == true) {
		mover2.x += abs(cos(41) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(41) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[42] == true) {
		mover2.x += abs(cos(42) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(42) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[43] == true) {
		mover2.x += abs(cos(43) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(43) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[44] == true) {
		mover2.x += abs(cos(44) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(44) / 100 + trust)*deltaTimeMP;
	}
	//moves diganly right and up
	if (moveD[45] == true) { 
		mover2.x += cos(45)/1000 + trust*deltaTimeMP;
		mover2.y -= sin(45)/1000 + trust*deltaTimeMP;
	}
	if (moveD[46] == true) {
		mover2.x += abs(cos(46) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(46) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[47] == true) {
		mover2.x += abs(cos(47) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(47) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[48] == true) {
		mover2.x += abs(cos(48) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(48) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[49] == true) {
		mover2.x += abs(cos(49) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(49) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[50] == true) {
		mover2.x += abs(cos(50) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(50) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[51] == true) {
		mover2.x += abs(cos(51) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(51) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[52] == true) {
		mover2.x += abs(cos(52) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(52) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[53] == true) {
		mover2.x += abs(cos(53) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(53) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[54] == true) {
		mover2.x += abs(cos(54) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(54) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[55] == true) {
		mover2.x += abs(cos(55) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(55) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[56] == true) {
		mover2.x += abs(cos(56) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(56) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[57] == true) {
		mover2.x += abs(cos(57) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(57) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[58] == true) {
		mover2.x += abs(cos(58) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(58) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[59] == true) {
		mover2.x += abs(cos(59) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(59) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[60] == true) {
		mover2.x += abs(cos(60) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(60) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[61] == true) {
		mover2.x += abs(cos(61) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(61) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[62] == true) {
		mover2.x += abs(cos(62) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(62) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[63] == true) {
		mover2.x += abs(cos(63) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(63) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[64] == true) {
		mover2.x += abs(cos(64) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(64) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[65] == true) {
		mover2.x += abs(cos(65) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(65) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[66] == true) {
		mover2.x += abs(cos(66) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(66) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[67] == true) {
		mover2.x += abs(cos(67) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(67) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[68] == true) {
		mover2.x += abs(cos(68) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(68) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[69] == true) {
		mover2.x += abs(cos(69) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(69) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[70] == true) {
		mover2.x += abs(cos(70) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(70) / 10000 + trust/1.2);
	}
	if (moveD[71] == true) {
		mover2.x += abs(cos(71) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(71) / 10000 + trust/1.2);
	}
	if (moveD[72] == true) {
		mover2.x += abs(cos(72) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(72) / 10000 + trust/1.2);
	}
	if (moveD[73] == true) {
		mover2.x += abs(cos(73) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(73) / 10000 + trust/1.2);
	}
	if (moveD[74] == true) {
		mover2.x += abs(cos(74) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(74) / 10000 + trust/1.2);
	}
	if (moveD[75] == true) {
		mover2.x += abs(cos(75) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(75) / 10000 + trust/1.2);
	}
	if (moveD[76] == true) {
		mover2.x += abs(cos(76) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(76) / 10000 + trust/1.2);
	}
	if (moveD[77] == true) {
		mover2.x += abs(cos(77) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(77) / 10000 + trust/1.2);
	}
	if (moveD[78] == true) {
		mover2.x += abs(cos(78) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(78) / 10000 + trust/1.2);
	}
	if (moveD[79] == true) {
		mover2.x += abs(cos(79) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(79) / 10000 + trust/1.2);
	}
	if (moveD[80] == true) {
		mover2.x += abs(cos(80) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(80) / 10000 + trust/1.2);
	}
	if (moveD[81] == true) {
		mover2.x += abs(cos(81) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(81) / 10000 + trust/1.2);
	}
	if (moveD[82] == true) {
		mover2.x += abs(cos(82) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(82) / 10000 + trust/1.2);
	}
	if (moveD[83] == true) {
		mover2.x += abs(cos(83) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(83) / 10000 + trust/1.2);
	}
	if (moveD[84] == true) {
		mover2.x += abs(cos(84) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(84) / 10000 + trust/1.2);
	}
	if (moveD[85] == true) {
		mover2.x += abs(cos(85) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(85) / 10000 + trust/1.2);
	}
	if (moveD[86] == true) {
		mover2.x += abs(cos(86) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(86) / 10000 + trust/1.2);
	}
	if (moveD[87] == true) {
		mover2.x += abs(cos(87) / 100 + trust)*deltaTimeMP;
		
	}
	if (moveD[88] == true) {
		mover2.x += abs(cos(88) / 100 + trust)*deltaTimeMP;
		
	}
	if (moveD[89] == true) {
		mover2.x += abs(cos(89) / 100 + trust)*deltaTimeMP;
		
	}
	//moves right
	if (moveD[90] == true) { mover2.x += trust*deltaTimeMP; }
	if (moveD[91] == true) {
		mover2.x += abs(cos(91) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(91) / 1000 + trust/1.2);
	}
	if (moveD[92] == true) {
		mover2.x += abs(cos(92) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(92) / 1000 + trust/1.2);
	}
	if (moveD[93] == true) {
		mover2.x += abs(cos(93) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(93) / 1000 + trust/1.2);
	}
	if (moveD[94] == true) {
		mover2.x += abs(cos(94) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(94) / 1000 + trust/1.2);
	}
	if (moveD[95] == true) {
		mover2.x += abs(cos(95) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(95) / 1000 + trust/1.2);
	}
	if (moveD[96] == true) {
		mover2.x += abs(cos(96) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(96) / 1000 + trust/1.2);
	}
	if (moveD[97] == true) {
		mover2.x += abs(cos(97) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(97) / 1000 + trust/1.2);
	}
	if (moveD[98] == true) {
		mover2.x += abs(cos(98) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(98) / 1000 + trust/1.2);
	}
	if (moveD[99] == true) {
		mover2.x += abs(cos(99) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(99) / 1000 + trust/1.2);
	}
	if (moveD[100] == true) {
		mover2.x += abs(cos(100) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(100) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[101] == true) {
		mover2.x += abs(cos(101) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(101) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[102] == true) {
		mover2.x += abs(cos(102) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(102) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[103] == true) {
		mover2.x += abs(cos(103) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(103) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[104] == true) {
		mover2.x += abs(cos(104) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(104) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[105] == true) {
		mover2.x += abs(cos(105) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(105) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[106] == true) {
		mover2.x += abs(cos(106) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(106) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[107] == true) {
		mover2.x += abs(cos(107) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(107) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[108] == true) {
		mover2.x += abs(cos(108) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(108) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[109] == true) {
		mover2.x += abs(cos(109) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(109) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[110] == true) {
		mover2.x += abs(cos(110) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(110) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[111] == true) {
		mover2.x += abs(cos(111) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(111) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[112] == true) {
		mover2.x += abs(cos(112) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(112) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[113] == true) {
		mover2.x += abs(cos(113) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(113) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[114] == true) {
		mover2.x += abs(cos(114) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(114) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[115] == true) {
		mover2.x += abs(cos(115) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(115) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[116] == true) {
		mover2.x += abs(cos(116) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(116) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[117] == true) {
		mover2.x += abs(cos(117) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(117) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[118] == true) {
		mover2.x += abs(cos(118) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(118) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[119] == true) {
		mover2.x += abs(cos(119) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(119) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[120] == true) {
		mover2.x += abs(cos(120) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(120) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[121] == true) {
		mover2.x += abs(cos(121) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(121) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[122] == true) {
		mover2.x += abs(cos(122) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(122) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[123] == true) {
		mover2.x += abs(cos(123) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(123) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[124] == true) {
		mover2.x += abs(cos(124) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(124) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[125] == true) {
		mover2.x += abs(cos(125) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(125) / 1000 + trust/1.2);
	}
	if (moveD[126] == true) {
		mover2.x += abs(cos(126) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(126) / 1000 + trust/1.2);
	}
	if (moveD[127] == true) {
		mover2.x += abs(cos(127) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(127) / 1000 + trust/1.2);
	}
	if (moveD[128] == true) {
		mover2.x += abs(cos(128) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(128) / 1000 + trust/1.2);
	}
	if (moveD[129] == true) {
		mover2.x += abs(cos(129) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(129) / 1000 + trust/1.2);
	}
	if (moveD[130] == true) {
		mover2.x += abs(cos(130) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(130) / 1000 + trust/1.2);
	}
	if (moveD[131] == true) {
		mover2.x += abs(cos(131) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(131) / 1000 + trust/1.2);
	}
	if (moveD[132] == true) {
		mover2.x += trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[133] == true) {
		mover2.x += trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[134] == true) {
		mover2.x += trust*deltaTimeMP; mover2.y = mover2.x;
	}
	//move diganly right and down
	if (moveD[135] == true) { mover2.x += trust*deltaTimeMP; mover2.y = mover2.x; }
	if (moveD[136] == true) {
		mover2.x += trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[137] == true) {
		mover2.x += trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[138] == true) {
		mover2.x += abs(cos(138) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(138) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[139] == true) {
		mover2.x += abs(cos(139) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(139) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[140] == true) {
		mover2.x += abs(cos(140) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(140) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[141] == true) {
		mover2.x += abs(cos(141) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(141) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[142] == true) {
		mover2.x += abs(cos(142) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(142) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[143] == true) {
		mover2.x += abs(cos(143) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(143) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[144] == true) {
		mover2.x += abs(cos(144) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(144) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[145] == true) {
		mover2.x += abs(cos(145) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(145) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[146] == true) {
		mover2.x += abs(cos(146) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(146) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[147] == true) {
		mover2.x += abs(cos(147) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(147) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[148] == true) {
		mover2.x += abs(cos(148) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(148) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[149] == true) {
		mover2.x += abs(cos(149) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(149) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[150] == true) {
		mover2.x += abs(cos(150) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(150) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[151] == true) {
		mover2.x += abs(cos(151) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(151) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[152] == true) {
		mover2.x += abs(cos(152) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(152) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[153] == true) {
		mover2.x += abs(cos(153) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(153) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[154] == true) {
		mover2.x += abs(cos(154) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(154) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[155] == true) {
		mover2.x += abs(cos(155) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(155) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[156] == true) {
		mover2.x += abs(cos(156) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(156) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[157] == true) {
		mover2.x += abs(cos(157) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(157) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[158] == true) {
		mover2.x += abs(cos(158) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(158) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[159] == true) {
		mover2.x += abs(cos(159) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(159) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[160] == true) {
		mover2.x += abs(cos(160) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(160) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[161] == true) {
		mover2.x += abs(cos(161) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(161) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[162] == true) {
		mover2.x += abs(cos(162) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(162) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[163] == true) {
		mover2.x += abs(cos(163) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(163) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[164] == true) {
		mover2.x += abs(cos(164) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(164) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[165] == true) {
		mover2.x += abs(cos(165) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(165) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[166] == true) {
		mover2.x += abs(cos(166) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(166) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[167] == true) {
		mover2.x += abs(cos(167) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(167) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[168] == true) {
		mover2.x += abs(cos(168) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(168) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[169] == true) {
		mover2.x += abs(cos(169) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(169) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[170] == true) {
		mover2.x += abs(cos(170) / 1000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(170) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[171] == true) {
		mover2.x += abs(cos(171) / 1000 + trust/1.2);
		mover2.y += abs(sin(171) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[172] == true) {
		mover2.x += abs(cos(172) / 1000 + trust/1.2);
		mover2.y += abs(sin(172) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[173] == true) {
		mover2.x += abs(cos(173) / 1000 + trust/1.3);
		mover2.y += abs(sin(173) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[174] == true) {
		mover2.x += abs(cos(174) / 1000 + trust/1.3);
		mover2.y += abs(sin(174) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[175] == true) {
		mover2.x += abs(cos(175) / 1000 + trust/1.3);
		mover2.y += abs(sin(175) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[176] == true) {
		mover2.x += abs(cos(176) / 1000 + trust/1.3);
		mover2.y += abs(sin(176) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[177] == true) {
		mover2.x += abs(cos(177) / 1000 + trust/1.3);
		mover2.y += abs(sin(177) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[178] == true) {
		mover2.y += trust*deltaTimeMP;
	}
	if (moveD[179] == true) {
		mover2.y += trust*deltaTimeMP;
	}
	//moves down
	if (moveD[180] == true) { mover2.y += trust*deltaTimeMP; }
	if (moveD[181] == true) {
		mover2.y += trust*deltaTimeMP;
	}
	if (moveD[182] == true) {
		mover2.y += trust*deltaTimeMP;
	}
	if (moveD[183] == true) {
		mover2.y += trust*deltaTimeMP;
	}
	if (moveD[184] == true) {
		mover2.x -= abs(cos(184) / 1000 + trust/1.2);
		mover2.y += abs(sin(184) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[185] == true) {
		mover2.x -= abs(cos(185) / 1000 + trust/1.2);
		mover2.y += abs(sin(185) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[186] == true) {
		mover2.x -= abs(cos(186) / 1000 + trust/1.2);
		mover2.y += abs(sin(186) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[187] == true) {
		mover2.x -= abs(cos(187) / 1000 + trust/1.2);
		mover2.y += abs(sin(187) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[188] == true) {
		mover2.x -= abs(cos(188) / 1000 + trust/1.2);
		mover2.y += abs(sin(188) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[189] == true) {
		mover2.x -= abs(cos(189) / 1000 + trust/1.2);
		mover2.y += abs(sin(189) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[190] == true) {
		mover2.x -= abs(cos(190) / 1000 + trust/1.2);
		mover2.y += abs(sin(190) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[191] == true) {
		mover2.x -= abs(cos(191) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(191) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[192] == true) {
		mover2.x -= abs(cos(192) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(192) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[193] == true) {
		mover2.x -= abs(cos(193) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(193) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[194] == true) {
		mover2.x -= abs(cos(194) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(194) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[195] == true) {
		mover2.x -= abs(cos(195) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(195) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[196] == true) {
		mover2.x -= abs(cos(196) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(196) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[197] == true) {
		mover2.x -= abs(cos(197) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(197) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[198] == true) {
		mover2.x -= abs(cos(198) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(198) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[199] == true) {
		mover2.x -= abs(cos(199) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(199) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[200] == true) {
		mover2.x -= abs(cos(200) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(200) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[201] == true) {
		mover2.x -= abs(cos(201) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(201) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[202] == true) {
		mover2.x -= abs(cos(202) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(202) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[203] == true) {
		mover2.x -= abs(cos(203) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(203) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[204] == true) {
		mover2.x -= abs(cos(204) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(204) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[205] == true) {
		mover2.x -= abs(cos(205) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(205) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[206] == true) {
		mover2.x -= abs(cos(206) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(206) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[207] == true) {
		mover2.x -= abs(cos(207) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(207) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[208] == true) {
		mover2.x -= abs(cos(208) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(208) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[209] == true) {
		mover2.x -= abs(cos(209) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(209) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[210] == true) {
		mover2.x -= abs(cos(210) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(210) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[211] == true) {
		mover2.x -= abs(cos(211) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(211) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[212] == true) {
		mover2.x -= abs(cos(212) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(212) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[213] == true) {
		mover2.x -= abs(cos(213) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(213) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[214] == true) {
		mover2.x -= abs(cos(214) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(214) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[215] == true) {
		mover2.x -= abs(cos(215) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(215) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[216] == true) {
		mover2.x -= abs(cos(216) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(216) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[217] == true) {
		mover2.x -= abs(cos(217) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(217) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[218] == true) {
		mover2.x -= abs(cos(218) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(218) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[219] == true) {
		mover2.x -= abs(cos(219) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(219) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[220] == true) {
		mover2.x -= abs(cos(220) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(220) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[221] == true) {
		mover2.x -= abs(cos(221) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(221) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[222] == true) {
		mover2.x -= abs(cos(222) / 100000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(222) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[223] == true) {
		mover2.x -= cos(45) / 1000 + trust*deltaTimeMP;
		mover2.y += sin(45) / 1000 + trust*deltaTimeMP;
	}
	if (moveD[224] == true) {
		mover2.x -= cos(45) / 1000 + trust*deltaTimeMP;
		mover2.y += sin(45) / 1000 + trust*deltaTimeMP;
	}
	//turns left and down
	if (moveD[225] == true) {
		mover2.x -= cos(45) / 1000 + trust*deltaTimeMP;
		mover2.y += sin(45) / 1000 + trust*deltaTimeMP;
	}
	if (moveD[226] == true) {
		mover2.x -= cos(45) / 1000 + trust*deltaTimeMP;
		mover2.y += sin(45) / 1000 + trust*deltaTimeMP;
	}
	if (moveD[227] == true) {
		mover2.x -= cos(45) / 1000 + trust*deltaTimeMP;
		mover2.y += sin(45) / 1000 + trust*deltaTimeMP;
	}
	if (moveD[228] == true) {
		mover2.x -= abs(cos(228) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(228) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[229] == true) {
		mover2.x -= abs(cos(229) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(229) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[230] == true) {
		mover2.x -= abs(cos(230) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(230) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[231] == true) {
		mover2.x -= abs(cos(231) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(231) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[232] == true) {
		mover2.x -= abs(cos(232) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(232) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[233] == true) {
		mover2.x -= abs(cos(233) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(233) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[234] == true) {
		mover2.x -= abs(cos(234) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(234) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[235] == true) {
		mover2.x -= abs(cos(235) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(235) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[236] == true) {
		mover2.x -= abs(cos(236) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(236) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[237] == true) {
		mover2.x -= abs(cos(237) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(237) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[238] == true) {
		mover2.x -= abs(cos(238) / 10000 + trust)*deltaTimeMP;
		mover2.y += abs(sin(238) / 100 + trust)*deltaTimeMP;
	}
	if (moveD[239] == true) {
		mover2.x -= abs(cos(239) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(239) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[240] == true) {
		mover2.x -= abs(cos(240) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(240) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[241] == true) {
		mover2.x -= abs(cos(241) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(241) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[242] == true) {
		mover2.x -= abs(cos(242) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(242) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[243] == true) {
		mover2.x -= abs(cos(243) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(243) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[244] == true) {
		mover2.x -= abs(cos(244) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(244) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[245] == true) {
		mover2.x -= abs(cos(245) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(245) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[246] == true) {
		mover2.x -= abs(cos(246) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(246) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[247] == true) {
		mover2.x -= abs(cos(247) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(247) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[248] == true) {
		mover2.x -= abs(cos(248) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(248) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[249] == true) {
		mover2.x -= abs(cos(249) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(249) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[250] == true) {
		mover2.x -= abs(cos(250) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(250) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[251] == true) {
		mover2.x -= abs(cos(251) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(251) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[252] == true) {
		mover2.x -= abs(cos(252) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(252) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[253] == true) {
		mover2.x -= abs(cos(253) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(253) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[254] == true) {
		mover2.x -= abs(cos(254) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(254) / 10000 + trust/1.2);
	}
	if (moveD[255] == true) {
		mover2.x -= abs(cos(255) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(255) / 10000 + trust/1.2);
	}
	if (moveD[256] == true) {
		mover2.x -= abs(cos(256) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(256) / 10000 + trust/1.2);
	}
	if (moveD[257] == true) {
		mover2.x -= abs(cos(257) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(257) / 10000 + trust/1.2);
	}
	if (moveD[258] == true) {
		mover2.x -= abs(cos(258) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(258) / 10000 + trust/1.2);
	}
	if (moveD[259] == true) {
		mover2.x -= abs(cos(259) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(259) / 10000 + trust/1.2);
	}
	if (moveD[260] == true) {
		mover2.x -= abs(cos(260) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(260) / 10000 + trust/1.2);
	}
	if (moveD[261] == true) {
		mover2.x -= abs(cos(261) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(261) / 10000 + trust/1.2);
	}
	if (moveD[262] == true) {
		mover2.x -= abs(cos(262) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(262) / 10000 + trust/1.2);
	}
	if (moveD[263] == true) {
		mover2.x -= abs(cos(263) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(263) / 10000 + trust/1.2);
	}
	if (moveD[264] == true) {
		mover2.x -= abs(cos(264) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(264) / 10000 + trust/1.2);
	}
	if (moveD[265] == true) {
		mover2.x -= abs(cos(265) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(265) / 10000 + trust/1.2);
	}
	if (moveD[266] == true) {
		mover2.x -= abs(cos(266) / 100 + trust)*deltaTimeMP;
		mover2.y += abs(sin(266) / 10000 + trust/1.2);
	}
	if (moveD[267] == true) {
		mover2.x -= trust*deltaTimeMP;
	}
	if (moveD[268] == true) {
		mover2.x -= trust*deltaTimeMP;
	}
	if (moveD[269] == true) {
		mover2.x -= trust*deltaTimeMP;
	}
	//movesleft
	if (moveD[270] == true) { mover2.x -= trust*deltaTimeMP; }
	if (moveD[271] == true) {
		mover2.x -= trust*deltaTimeMP;
	}
	if (moveD[272] == true) {
		mover2.x -= trust*deltaTimeMP;
	}
	if (moveD[273] == true) {
		mover2.x -= abs(cos(273) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(273) / 10000 + trust/1.2);
	}
	if (moveD[274] == true) {
		mover2.x -= abs(cos(274) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(274) / 10000 + trust/1.2);
	}
	if (moveD[275] == true) {
		mover2.x -= abs(cos(275) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(275) / 10000 + trust/1.2);
	}
	if (moveD[276] == true) {
		mover2.x -= abs(cos(276) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(276) / 10000 + trust/1.2);
	}
	if (moveD[277] == true) {
		mover2.x -= abs(cos(277) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(277) / 10000 + trust/1.2);
	}
	if (moveD[278] == true) {
		mover2.x -= abs(cos(278) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(278) / 10000 + trust/1.2);
	}
	if (moveD[279] == true) {
		mover2.x -= abs(cos(279) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(279) / 10000 + trust/1.2);
	}
	if (moveD[280] == true) {
		mover2.x -= abs(cos(280) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(280) / 10000 + trust/1.2);
	}
	if (moveD[281] == true) {
		mover2.x -= abs(cos(281) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(281) / 10000 + trust/1.2);
	}
	if (moveD[282] == true) {
		mover2.x -= abs(cos(282) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(282) / 10000 + trust/1.2);
	}
	if (moveD[283] == true) {
		mover2.x -= abs(cos(283) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(283) / 10000 + trust/1.2);
	}
	if (moveD[284] == true) {
		mover2.x -= abs(cos(284) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(284) / 10000 + trust/1.2);
	}
	if (moveD[285] == true) {
		mover2.x -= abs(cos(285) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(285) / 100000 + trust/1.2);//wrid could cause glitch
	}
	if (moveD[286] == true) {
		mover2.x -= abs(cos(286) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(286) / 10000 + trust/1.2);
	}
	if (moveD[287] == true) {
		mover2.x -= abs(cos(287) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(287) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[288] == true) {
		mover2.x -= abs(cos(288) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(288) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[289] == true) {
		mover2.x -= abs(cos(289) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(289) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[290] == true) {
		mover2.x -= abs(cos(290) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(290) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[291] == true) {
		mover2.x -= abs(cos(291) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(291) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[292] == true) {
		mover2.x -= abs(cos(292) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(292) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[293] == true) {
		mover2.x -= abs(cos(293) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(293) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[294] == true) {
		mover2.x -= abs(cos(294) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(294) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[295] == true) {
		mover2.x -= abs(cos(295) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(295) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[296] == true) {
		mover2.x -= abs(cos(296) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(296) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[297] == true) {
		mover2.x -= abs(cos(297) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(297) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[298] == true) {
		mover2.x -= abs(cos(298) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(298) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[299] == true) {
		mover2.x -= abs(cos(299) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(299) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[300] == true) {
		mover2.x -= abs(cos(300) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(300) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[301] == true) {
		mover2.x -= abs(cos(301) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(301) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[302] == true) {
		mover2.x -= abs(cos(302) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(302) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[303] == true) {
		mover2.x -= abs(cos(303) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(303) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[304] == true) {
		mover2.x -= abs(cos(304) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(304) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[305] == true) {
		mover2.x -= abs(cos(305) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(305) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[306] == true) {
		mover2.x -= abs(cos(306) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(306) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[307] == true) {
		mover2.x -= abs(cos(307) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(307) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[308] == true) {
		mover2.x -= abs(cos(308) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(308) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[309] == true) {
		mover2.x -= abs(cos(309) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(309) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[310] == true) {
		mover2.x -= abs(cos(310) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(310) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[311] == true) {
		mover2.x -= abs(cos(311) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(311) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[312] == true) {
		mover2.x -= abs(cos(312) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(312) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[313] == true) {
		mover2.x -= trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[314] == true) {
		mover2.x -= trust*deltaTimeMP; mover2.y = mover2.x;
	}
	//moves up to the left
	if (moveD[315] == true) {
		mover2.x -= trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[316] == true) {
		mover2.x -= trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[317] == true) {
		mover2.x -= trust*deltaTimeMP; mover2.y = mover2.x;
	}
	if (moveD[318] == true) {
		mover2.x -= abs(cos(318) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(318) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[319] == true) {
		mover2.x -= abs(cos(319) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(319) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[320] == true) {
		mover2.x -= abs(cos(320) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(320) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[321] == true) {
		mover2.x -= abs(cos(321) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(321) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[322] == true) {
		mover2.x -= abs(cos(322) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(322) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[323] == true) {
		mover2.x -= abs(cos(323) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(323) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[324] == true) {
		mover2.x -= abs(cos(324) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(324) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[325] == true) {
		mover2.x -= abs(cos(325) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(325) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[326] == true) {
		mover2.x -= abs(cos(326) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(326) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[327] == true) {
		mover2.x -= abs(cos(327) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(327) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[328] == true) {
		mover2.x -= abs(cos(328) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(328) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[329] == true) {
		mover2.x -= abs(cos(329) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(329) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[330] == true) {
		mover2.x -= abs(cos(330) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(330) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[331] == true) {
		mover2.x -= abs(cos(331) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(331) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[332] == true) {
		mover2.x -= abs(cos(332) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(332) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[333] == true) {
		mover2.x -= abs(cos(333) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(333) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[334] == true) {
		mover2.x -= abs(cos(334) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(334) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[335] == true) {
		mover2.x -= abs(cos(335) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(335) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[336] == true) {
		mover2.x -= abs(cos(336) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(336) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[337] == true) {
		mover2.x -= abs(cos(337) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(337) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[338] == true) {
		mover2.x -= abs(cos(338) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(338) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[339] == true) {
		mover2.x -= abs(cos(339) / 100 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(339) / 10000 + trust)*deltaTimeMP;
	}
	if (moveD[340] == true) {
		mover2.x -= abs(cos(340) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(340) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[341] == true) {
		mover2.x -= abs(cos(341) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(341) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[342] == true) {
		mover2.x -= abs(cos(342) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(342) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[343] == true) {
		mover2.x -= abs(cos(343) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(343) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[344] == true) {
		mover2.x -= abs(cos(344) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(344) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[345] == true) {
		mover2.x -= abs(cos(345) / 1000 + trust)*deltaTimeMP;
		mover2.y -= abs(sin(345) / 1000 + trust/1.2);
	}
	if (moveD[346] == true) {
		mover2.x -= abs(cos(346) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(346) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[347] == true) {
		mover2.x -= abs(cos(347) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(347) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[348] == true) {
		mover2.x -= abs(cos(348) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(348) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[349] == true) {
		mover2.x -= abs(cos(349) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(349) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[350] == true) {
		mover2.x -= abs(cos(350) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(350) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[351] == true) {
		mover2.x -= abs(cos(351) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(351) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[352] == true) {
		mover2.x -= abs(cos(352) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(352) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[353] == true) {
		mover2.x -= abs(cos(353) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(353) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[354] == true) {
		mover2.x -= abs(cos(354) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(354) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[355] == true) {
		mover2.x -= abs(cos(355) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(355) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[356] == true) {
		mover2.x -= abs(cos(356) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(356) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[357] == true) {
		mover2.x -= abs(cos(357) / 1000 + trust / 1.2)*deltaTimeMP;
		mover2.y -= abs(sin(357) / 1000 + trust)*deltaTimeMP;
	}
	if (moveD[358] == true) {
		mover2.y -= sin(0) / 1000 + trust*deltaTimeMP;
	}
	if (moveD[359] == true) {
		mover2.y -= sin(0) / 1000 + trust*deltaTimeMP;
	}
	*/
	//cout << mover2.y << endl;
	//stops the ship 
	if (mover2.x >= -0.01 && mover2.x <= 0.01) {
		mover2.x = 0;
	}
	if (mover2.y >= -0.01 && mover2.y <= 0.01) {
		mover2.y = 0;
	}

	if (mover2.x > 0) {
		mover2.x -= trust/5 ;
	}
	 if (mover2.y > 0) {
		mover2.y -= trust /5 ;
	}
	if (mover2.x < 0) {
		mover2.x += trust /5 ;
	}
	 if (mover2.y < 0) {
		mover2.y += trust /5 ;
	}

	 
	// cout << mover2.y << endl;
}

void movement::rotateR(sf::Sprite &ship) {
	ship.rotate(+2*deltaTimeMP*100);//roate scales with delta time
}

void movement::rotateL(sf::Sprite &ship)
{
	ship.rotate(-2*deltaTimeMP*100);
}

void movement::cheakBounds(sf::Sprite &ship,sf::Vector2f &mov)//sees if ship is out of bounds and corrects it
{
	if (ship.getPosition().x >= 1150) {
		ship.setPosition(1149, ship.getPosition().y);
		//stops shit from moveing to redu accleration
		mov.x = 0;
		mov.y = 0;
	}
	else if (ship.getPosition().x <= 50) {
		ship.setPosition(51, ship.getPosition().y);
		mov.x = 0;
		mov.y = 0;
	}
	if (ship.getPosition().y >= 936) {
		ship.setPosition(ship.getPosition().x, 935);
		mov.x = 0;
		mov.y = 0;
	}
	else if (ship.getPosition().y <= 50) {
		ship.setPosition(ship.getPosition().x, 51);
		mov.x = 0;
		mov.y = 0;
	}

}

void movement::getDelta(float dt)
{
	deltaTimeMP = dt;
}
