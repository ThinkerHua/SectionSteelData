#include "GBData.h"
#include <string.h>

double search_AorW(char const *SecSteType, double const data[], int const AorW) {
	GBSectionSteel *pGBSecSte;
	
}

double *search_Data(char const *SecSteType, char const *Name) {

}

double *search_Data_ByPart(char const *SecSteType, double const partData[]) {

}

int compare_Arr_f(double *arr1[], double *arr2[]) {
	int i, len1, len2;
	len1 = sizeof(arr1), len2 = sizeof(arr2);
	if (len1 <= len2) {
		for(i = 0; i < len1; i++) {
			if ((arr1[i] - arr2[i]) != 0)
				return 0;
		}
		
	} else
		return -1;
}

GBSectionSteel GBSecSte_H[] = {{"100*100",{100,100,6,8},16.9,0.574,},
								{"125*125",{125,125,6.5,9},23.6,0.723,},
								{"150*150",{150,150,7,10},31.1,0.872,},
								{"175*175",{175,175,7.5,11},40.4,1.01,},
								{"200*200",{200,200,8,12},49.9,1.16,},
								{"",{200,204,12,12},56.2,1.17,},
								{"",{244,252,11,11},63.8,1.45,},
								{"250*250",{250,250,9,14},71.8,1.46,},
								{"",{250,255,14,14},81.6,1.47,},
								{"",{294,302,12,12},83.5,1.75,},
								{"300*300",{300,300,10,15},93,1.76,},
								{"",{300,305,15,15},105,1.77,},
								{"",{338,351,13,13},105,2.03,},
								{"",{344,348,10,16},113,2.04,},
								{"",{344,354,16,16},129,2.05,},
								{"350*350",{350,350,12,19},135,2.05,},
								{"",{350,357,19,19},154,2.07,},
								{"",{388,402,15,15},140,2.32,},
								{"",{394,398,11,18},147,2.32,},
								{"",{394,405,18,18},168,2.33,},
								{"400*400",{400,400,13,21},172,2.34,},
								{"",{400,408,21,21},197,2.35,},
								{"",{414,405,18,28},232,2.37,},
								{"",{428,407,20,35},283,2.41,},
								{"",{458,417,30,50},415,2.49,},
								{"",{498,432,45,70},604,2.6,},
								{"500*500",{492,465,15,20},202,2.78,},
								{"",{502,465,15,25},239,2.8,},
								{"",{502,470,20,25},259,2.81,},
								{"150*100",{148,100,6,9},20.7,0.67,},
								{"200*150",{194,150,6,9},29.9,0.962,},
								{"250*175",{244,175,7,11},43.6,1.15,},
								{"300*200",{294,200,8,12},55.8,1.35,},
								{"",{298,201,9,14},64.4,1.36,},
								{"350*250",{340,250,9,14},78.1,1.64,},
								{"400*300",{390,300,10,16},105,1.94,},
								{"450*300",{440,300,11,18},121,2.04,},
								{"",{482,300,11,15},111,2.12,},
								{"500*300",{488,300,11,18},125,2.13,},
								{"",{544,300,11,15},116,2.24,},
								{"550*300",{550,300,11,18},130,2.26,},
								{"",{582,300,12,17},133,2.32,},
								{"600*300",{588,300,12,20},147,2.33,},
								{"",{594,302,14,23},170,2.35,},
								{"100*50",{100,50,5,7},9.3,0.376,},
								{"125*60",{125,60,6,8},13.1,0.464,},
								{"150*75",{150,75,5,7},14,0.576,},
								{"175*90",{175,90,5,8},18,0.686,},
								{"",{198,99,4.5,7},17.8,0.769,},
								{"200*100",{200,100,5.5,8},20.9,0.775,},
								{"",{248,124,5,8},25.1,0.968,},
								{"250*125",{250,125,6,9},29,0.974,},
								{"",{298,149,5.5,8},32,1.16,},
								{"300*150",{300,150,6.5,9},36.7,1.16,},
								{"",{346,174,6,9},41.2,1.35,},
								{"350*175",{350,175,7,11},49.4,1.36,},
								{"400*150",{400,150,8,13},55.2,1.36,},
								{"",{396,199,7,11},56.1,1.55,},
								{"400*200",{400,200,8,13},65.4,1.56,},
								{"",{446,150,7,12},52.6,1.46,},
								{"450*150",{450,151,8,14},60.8,1.47,},
								{"",{446,199,8,12},65.1,1.65,},
								{"450*200",{450,200,9,14},74.9,1.66,},
								{"",{470,150,7,13},56.2,1.5,},
								{"",{475,151.5,8.5,15.5},67.6,1.52,},
								{"475*150",{482,153.5,10.5,19},83.5,1.53,},
								{"",{492,150,7,12},55.1,1.55,},
								{"",{500,152,9,16},72.4,1.57,},
								{"500*150",{504,153,10,18},81.1,1.58,},
								{"",{496,199,9,14},77.9,1.75,},
								{"500*200",{500,200,10,16},88.1,1.76,},
								{"",{506,201,11,19},102,1.77,},
								{"",{546,199,9,14},81.5,1.85,},
								{"550*200",{550,200,10,16},92,1.86,},
								{"",{596,199,10,15},92.4,1.95,},
								{"600*200",{600,200,11,17},103,1.96,},
								{"",{606,201,12,20},118,1.97,},
								{"",{625,198.5,13.5,17.5},118,1.99,},
								{"625*200",{630,200,15,20},133,2.01,},
								{"",{638,202,17,24},156,2.03,},
								{"",{646,299,12,18},144,2.43,},
								{"650*300",{650,300,13,20},159,2.44,},
								{"",{654,301,14,22},173,2.45,},
								{"",{692,300,13,20},163,2.53,},
								{"700*300",{700,300,13,24},182,2.54,},
								{"",{734,299,12,16},143,2.61,},
								{"",{742,300,13,20},168,2.63,},
								{"750*300",{750,300,13,24},187,2.64,},
								{"",{758,303,16,28},224,2.67,},
								{"",{792,300,14,22},188,2.73,},
								{"800*300",{800,300,14,26},207,2.74,},
								{"",{834,298,14,19},179,2.8,},
								{"",{842,299,15,23},204,2.82,},
								{"850*300",{850,300,16,27},229,2.84,},
								{"",{858,301,17,31},255,2.86,},
								{"",{890,299,15,23},210,2.92,},
								{"900*300",{900,300,16,28},240,2.94,},
								{"",{912,302,18,34},283,2.97,},
								{"",{970,297,16,21},217,3.07,},
								{"",{980,298,17,26},248,3.09,},
								{"",{990,298,17,31},271,3.11,},
								{"1000*300",{1000,300,19,36},310,3.13,},
								{"",{1008,302,21,40},345,3.15,}};
GBSectionSteel GBSecSte_HT[] = {{"100*50",{95,48,3.2,4.5},5.98,0.362,},
								{"",{97,49,4,5.5},7.36,0.368,},
								{"100*100",{96,99,4.5,6},12.7,0.565,},
								{"125*60",{118,58,3.2,4.5},7.26,0.448,},
								{"",{120,59,4,5.5},8.94,0.454,},
								{"125*125",{119,123,4.5,6},15.8,0.707,},
								{"150*75",{145,73,3.2,4.5},9,0.562,},
								{"",{147,74,4,5.5},11.1,0.568,},
								{"150*100",{139,97,3.2,4.5},10.6,0.646,},
								{"",{142,99,4.5,6},14.3,0.657,},
								{"150*150",{144,148,5,7},21.8,0.856,},
								{"",{147,149,6,8.5},26.4,0.864,},
								{"175*90",{168,88,3.2,4.5},10.6,0.668,},
								{"",{171,89,4,6},13.8,0.676,},
								{"175*175",{167,173,5,7},26.2,0.994,},
								{"",{172,175,6.5,9.5},35,1.01,},
								{"200*100",{193,98,3.2,4.5},12,0.758,},
								{"",{196,99,4,6},15.5,0.766,},
								{"200*150",{188,149,4.5,6},20.7,0.949,},
								{"200*200",{192,198,6,8},34.3,1.14,},
								{"250*125",{244,124,4.5,6},20.3,0.961,},
								{"250*175",{238,173,4.5,8},30.7,1.14,},
								{"300*150",{294,148,4.5,6},25,1.15,},
								{"300*200",{286,198,6,8},38.7,1.33,},
								{"350*175",{340,173,4.5,6},29,1.34,},
								{"400*150",{390,148,6,8},37.3,1.34,},
								{"400*200",{390,198,6,8},43.6,1.54,}};
GBSectionSteel GBSecSte_T[] = {{"50*100",{50,100,6,8},8.47,0.293,},
								{"62.5*125",{62.5,125,6.5,9},11.8,0.368,},
								{"75*150",{75,150,7,10},15.6,0.443,},
								{"87.5*175",{87.5,175,7.5,11},20.2,0.514,},
								{"100*200",{100,200,8,12},24.9,0.589,},
								{"",{100,204,12,12},28.1,0.597,},
								{"125*250",{125,250,9,14},35.9,0.739,},
								{"",{125,255,14,14},40.8,0.749,},
								{"",{147,302,12,12},41.7,0.887,},
								{"150*300",{150,300,10,15},46.5,0.889,},
								{"",{150,305,15,15},52.4,0.899,},
								{"",{172,348,10,16},56.5,1.03,},
								{"175*350",{175,350,12,19},67.5,1.04,},
								{"",{194,402,15,15},70,1.17,},
								{"",{197,398,11,18},73.3,1.17,},
								{"200*400",{200,400,13,21},85.8,1.18,},
								{"",{200,408,21,21},98.4,1.2,},
								{"",{207,405,18,28},116,1.21,},
								{"",{214,407,20,35},142,1.22,},
								{"75*100",{74,100,6,9},10.3,0.341,},
								{"100*150",{97,150,6,9},15,0.487,},
								{"125*175",{122,175,7,11},21.8,0.583,},
								{"150*200",{147,200,8,12},27.9,0.683,},
								{"",{149,201,9,14},32.2,0.689,},
								{"175*250",{170,250,9,14},39.1,0.829,},
								{"200*300",{195,300,10,16},52.3,0.979,},
								{"225*300",{220,300,11,18},60.4,1.03,},
								{"250*300",{241,300,11,15},55.4,1.07,},
								{"",{244,300,11,18},62.5,1.08,},
								{"",{272,300,11,15},58.1,1.13,},
								{"275*300",{275,300,11,18},65.2,1.14,},
								{"300*300",{291,300,12,17},66.4,1.17,},
								{"",{294,300,12,20},73.5,1.18,},
								{"",{297,302,14,23},85.2,1.19,},
								{"50*50",{50,50,5,7},4.65,0.193,},
								{"62.5*60",{62.5,60,6,8},6.55,0.238,},
								{"75*75",{75,75,5,7},7,0.293,},
								{"",{85.5,89,4,6},6.9,0.342,},
								{"87.5*90",{87.5,90,5,8},8.98,0.348,},
								{"",{99,99,4.5,7},8.9,0.389,},
								{"100*100",{100,100,5.5,8},10.5,0.393,},
								{"",{124,124,5,8},12.6,0.489,},
								{"125*125",{125,125,6,9},14.5,0.493,},
								{"",{149,149,5.5,8},16,0.585,},
								{"150*150",{150,150,6.5,9},18.4,0.589,},
								{"",{173,174,6,9},20.6,0.683,},
								{"175*175",{175,175,7,11},24.7,0.689,},
								{"",{198,199,7,11},28,0.783,},
								{"200*200",{200,200,8,13},32.7,0.789,},
								{"225*150",{223,150,7,12},26.3,0.735,},
								{"",{225,151,8,14},30.4,0.741,},
								{"",{223,199,8,12},32.6,0.833,},
								{"225*200",{225,200,9,14},37.5,0.839,},
								{"237.5*150",{235,150,7,13},28.1,0.759,},
								{"",{237.5,151.5,8.5,15.5},33.8,0.767,},
								{"",{241,153.5,10.5,19},41.8,0.778,},
								{"250*150",{246,150,7,12},27.6,0.781,},
								{"",{250,152,9,16},36.2,0.793,},
								{"",{252,153,10,18},40.6,0.799,},
								{"",{248,199,9,14},39,0.883,},
								{"250*200",{250,200,10,16},44.1,0.889,},
								{"",{253,201,11,19},50.8,0.897,},
								{"",{273,199,9,14},40.7,0.933,},
								{"275*200",{275,200,10,16},46,0.939,},
								{"",{298,199,10,15},46.2,0.983,},
								{"300*200",{300,200,11,17},51.7,0.989,},
								{"",{303,201,12,20},58.8,0.997,},
								{"312.5*200",{312.5,198.5,13.5,17.5},59.1,1.01,},
								{"",{315,200,15,20},66.7,1.02,},
								{"",{319,202,17,24},78,1.03,},
								{"",{323,299,12,18},72.1,1.23,},
								{"325*300",{325,300,13,20},79.3,1.23,},
								{"",{327,301,14,22},86.59,1.24,},
								{"",{346,300,13,20},81.5,1.28,},
								{"350*300",{350,300,13,24},90.9,1.28,},
								{"",{396,300,14,22},94,1.38,},
								{"400*300",{400,300,14,26},103,1.38,},
								{"",{445,299,15,23},105,1.47,},
								{"450*300",{450,300,16,28},120,1.48,},
								{"",{456,302,18,34},141,1.5,}};
GBSectionSteel GBSecSte_I[] = {{"10",{100,68,4.5,7.6},11.3,0.432,},
								{"12",{120,74,5,8.4},14,0.493,},
								{"12.6",{126,74,5,8.4},14.2,0.505,},
								{"14",{140,80,5.5,9.1},16.9,0.553,},
								{"16",{160,88,6,9.9},20.5,0.621,},
								{"18",{180,94,6.5,10.7},24.1,0.681,},
								{"20a",{200,100,7,11.4},27.9,0.742,},
								{"20b",{200,102,9,11.4},31.1,0.746,},
								{"22a",{220,110,7.5,12.3},33.1,0.817,},
								{"22b",{220,112,9.5,12.3},36.5,0.821,},
								{"24a",{240,116,8,13},37.5,0.878,},
								{"24b",{240,118,10,13},41.2,0.882,},
								{"25a",{250,116,8,13},38.1,0.898,},
								{"25b",{250,118,10,13},42,0.902,},
								{"27a",{270,122,8.5,13.7},42.8,0.958,},
								{"27b",{270,124,10.5,13.7},47,0.962,},
								{"28a",{280,122,8.5,13.7},43.5,0.978,},
								{"28b",{280,124,10.5,13.7},47.9,0.982,},
								{"30a",{300,126,9,14.4},48.1,1.031,},
								{"30b",{300,128,11,14.4},52.8,1.035,},
								{"30c",{300,130,13,14.4},57.5,1.039,},
								{"32a",{320,130,9.5,15},52.7,1.084,},
								{"32b",{320,132,11.5,15},57.7,1.088,},
								{"32c",{320,134,13.5,15},62.7,1.092,},
								{"36a",{360,136,10,15.8},60,1.185,},
								{"36b",{360,138,12,15.8},65.7,1.189,},
								{"36c",{360,140,14,15.8},71.3,1.193,},
								{"40a",{400,142,10.5,16.5},67.6,1.285,},
								{"40b",{400,144,12.5,16.5},73.8,1.289,},
								{"40c",{400,146,14.5,16.5},80.1,1.293,},
								{"45a",{450,150,11.5,18},80.4,1.411,},
								{"45b",{450,152,13.5,18},87.4,1.415,},
								{"45c",{450,154,15.5,18},94.5,1.419,},
								{"50a",{500,158,12,20},93.6,1.539,},
								{"50b",{500,160,14,20},101,1.543,},
								{"50c",{500,162,16,20},109,1.547,},
								{"55a",{550,166,12.5,21},105,1.667,},
								{"55b",{550,168,14.5,21},114,1.671,},
								{"55c",{550,170,16.5,21},123,1.675,},
								{"56a",{560,166,12.5,21},106,1.687,},
								{"56b",{560,168,14.5,21},115,1.691,},
								{"56c",{560,170,16.5,21},124,1.695,},
								{"63a",{630,176,13,22},121,1.862,},
								{"63b",{630,178,15,22},131,1.866,},
								{"63c",{630,180,17,22},141,1.87,}};
GBSectionSteel GBSecSte_Chan[] = {{"5",{50,37,4.5,7},5.44,0.226,},
									{"6.3",{63,40,4.8,7.5},6.63,0.262,},
									{"6.5",{65,40,4.3,7.5},6.51,0.267,},
									{"8",{80,43,5,8},8.04,0.307,},
									{"10",{100,48,5.3,8.5},10,0.365,},
									{"12",{120,53,5.5,9},12.1,0.423,},
									{"12.6",{126,53,5.5,9},12.3,0.435,},
									{"14a",{140,58,6,9.5},14.5,0.48,},
									{"14b",{140,60,8,9.5},16.7,0.484,},
									{"16a",{160,63,6.5,10},17.2,0.538,},
									{"16b",{160,65,8.5,10},19.8,0.542,},
									{"18a",{180,68,7,10.5},20.2,0.596,},
									{"18b",{180,70,9,10.5},23,0.6,},
									{"20a",{200,73,7,11},22.6,0.654,},
									{"20b",{200,75,9,11},25.8,0.658,},
									{"22a",{220,77,7,11.5},25,0.709,},
									{"22b",{220,79,9,11.5},28.5,0.713,},
									{"24a",{240,78,7,12},26.9,0.752,},
									{"24b",{240,80,9,12},30.6,0.756,},
									{"24c",{240,82,11,12},34.4,0.76,},
									{"25a",{250,78,7,12},27.4,0.722,},
									{"25b",{250,80,9,12},31.3,0.776,},
									{"25c",{250,82,11,12},35.3,0.78,},
									{"27a",{270,82,7.5,12.5},30.8,0.826,},
									{"27b",{270,84,9.5,12.5},35.1,0.83,},
									{"27c",{270,86,11.5,12.5},39.3,0.834,},
									{"28a",{280,82,7.5,12.5},31.4,0.846,},
									{"28b",{280,84,9.5,12.5},35.8,0.85,},
									{"28c",{280,86,11.5,12.5},40.2,0.854,},
									{"30a",{300,85,7.5,13.5},34.5,0.897,},
									{"30b",{300,87,9.5,13.5},39.2,0.901,},
									{"30c",{300,89,11.5,13.5},43.9,0.905,},
									{"32a",{320,88,8,14},38.1,0.947,},
									{"32b",{320,90,10,14},43.1,0.951,},
									{"32c",{320,92,12,14},48.1,0.955,},
									{"36a",{360,96,9,16},47.8,1.053,},
									{"36b",{360,98,11,16},53.5,1.057,},
									{"36c",{360,100,13,16},59.1,1.061,},
									{"40a",{400,100,10.5,18},58.9,1.144,},
									{"40b",{400,102,12.5,18},65.2,1.148,},
									{"40c",{400,104,14.5,18},71.5,1.152,}};
GBSectionSteel GBSecSte_L[] = {{"2",{20,20,3},0.889,0.078,},
								{"",{20,20,4},1.15,0.077,},
								{"2.5",{25,25,3},1.12,0.098,},
								{"",{25,25,4},1.46,0.097,},
								{"3",{30,30,3},1.37,0.117,},
								{"",{30,30,4},1.79,0.117,},
								{"3.6",{36,36,3},1.66,0.141,},
								{"",{36,36,4},2.16,0.141,},
								{"",{36,36,5},2.65,0.141,},
								{"4",{40,40,3},1.85,0.157,},
								{"",{40,40,4},2.42,0.157,},
								{"",{40,40,5},2.98,0.156,},
								{"4.5",{45,45,3},2.09,0.177,},
								{"",{45,45,4},2.74,0.177,},
								{"",{45,45,5},3.37,0.176,},
								{"",{45,45,6},3.99,0.176,},
								{"5",{50,50,3},2.33,0.197,},
								{"",{50,50,4},3.06,0.197,},
								{"",{50,50,5},3.77,0.196,},
								{"",{50,50,6},4.46,0.196,},
								{"5.6",{56,56,3},2.624,0.221,},
								{"",{56,56,4},3.446,0.22,},
								{"",{56,56,5},4.251,0.22,},
								{"",{56,56,6},5.04,0.22,},
								{"",{56,56,7},5.81,0.219,},
								{"",{56,56,8},6.568,0.219,},
								{"6",{60,60,5},4.58,0.236,},
								{"",{60,60,6},5.43,0.235,},
								{"",{60,60,7},6.26,0.235,},
								{"",{60,60,8},7.08,0.235,},
								{"6.3",{63,63,4},3.91,0.248,},
								{"",{63,63,5},4.82,0.248,},
								{"",{63,63,6},5.72,0.247,},
								{"",{63,63,7},6.6,0.247,},
								{"",{63,63,8},7.47,0.247,},
								{"",{63,63,10},9.15,0.246,},
								{"7",{70,70,4},4.37,0.275,},
								{"",{70,70,5},5.4,0.275,},
								{"",{70,70,6},6.41,0.275,},
								{"",{70,70,7},7.4,0.275,},
								{"",{70,70,8},8.37,0.274,},
								{"7.5",{75,75,5},5.82,0.295,},
								{"",{75,75,6},6.91,0.294,},
								{"",{75,75,7},7.98,0.294,},
								{"",{75,75,8},9.03,0.294,},
								{"",{75,75,9},10.1,0.294,},
								{"",{75,75,10},11.1,0.293,},
								{"8",{80,80,5},6.21,0.315,},
								{"",{80,80,6},7.38,0.314,},
								{"",{80,80,7},8.53,0.314,},
								{"",{80,80,8},9.66,0.314,},
								{"",{80,80,9},10.8,0.314,},
								{"",{80,80,10},11.9,0.313,},
								{"9",{90,90,6},8.35,0.354,},
								{"",{90,90,7},9.66,0.354,},
								{"",{90,90,8},10.9,0.353,},
								{"",{90,90,9},12.2,0.353,},
								{"",{90,90,10},13.5,0.353,},
								{"",{90,90,12},15.9,0.352,},
								{"10",{100,100,6},9.37,0.393,},
								{"",{100,100,7},10.8,0.393,},
								{"",{100,100,8},12.3,0.393,},
								{"",{100,100,9},13.7,0.392,},
								{"",{100,100,10},15.1,0.392,},
								{"",{100,100,12},17.9,0.391,},
								{"",{100,100,14},20.6,0.391,},
								{"",{100,100,16},23.3,0.39,},
								{"11",{110,110,7},11.9,0.433,},
								{"",{110,110,8},13.5,0.433,},
								{"",{110,110,10},16.7,0.432,},
								{"",{110,110,12},19.8,0.431,},
								{"",{110,110,14},22.8,0.431,},
								{"12.5",{125,125,8},15.5,0.492,},
								{"",{125,125,10},19.1,0.491,},
								{"",{125,125,12},22.7,0.491,},
								{"",{125,125,14},26.2,0.49,},
								{"",{125,125,16},29.6,0.489,},
								{"14",{140,140,10},21.5,0.551,},
								{"",{140,140,12},25.5,0.551,},
								{"",{140,140,14},29.5,0.55,},
								{"",{140,140,16},33.4,0.549,},
								{"15",{150,150,8},18.6,0.592,},
								{"",{150,150,10},23.1,0.591,},
								{"",{150,150,12},27.4,0.591,},
								{"",{150,150,14},31.7,0.59,},
								{"",{150,150,15},33.8,0.59,},
								{"",{150,150,16},35.9,0.589,},
								{"16",{160,160,10},24.7,0.63,},
								{"",{160,160,12},29.4,0.63,},
								{"",{160,160,14},34,0.629,},
								{"",{160,160,16},38.5,0.629,},
								{"18",{180,180,12},33.2,0.71,},
								{"",{180,180,14},38.4,0.709,},
								{"",{180,180,16},43.5,0.709,},
								{"",{180,180,18},48.6,0.708,},
								{"20",{200,200,14},42.9,0.788,},
								{"",{200,200,16},48.7,0.788,},
								{"",{200,200,18},54.4,0.787,},
								{"",{200,200,20},60.1,0.787,},
								{"",{200,200,24},71.2,0.785,},
								{"22",{220,220,16},53.9,0.866,},
								{"",{220,220,18},60.3,0.866,},
								{"",{220,220,20},66.5,0.865,},
								{"",{220,220,22},72.8,0.865,},
								{"",{220,220,24},78.9,0.864,},
								{"",{220,220,26},85,0.864,},
								{"25",{250,250,18},69,0.985,},
								{"",{250,250,20},76.2,0.984,},
								{"",{250,250,22},83.3,0.983,},
								{"",{250,250,24},90.4,0.983,},
								{"",{250,250,26},97.5,0.982,},
								{"",{250,250,28},104,0.982,},
								{"",{250,250,30},111,0.981,},
								{"",{250,250,32},118,0.981,},
								{"",{250,250,35},128,0.98,},
								{"2.5/1.6",{25,16,3},0.91,0.08,},
								{"",{25,16,4},1.18,0.079,},
								{"3.2/2",{32,20,3},1.17,0.102,},
								{"",{32,20,4},1.52,0.101,},
								{"4/2.5",{40,25,3},1.48,0.127,},
								{"",{40,25,4},1.94,0.127,},
								{"4.5/2.8",{45,28,3},1.69,0.143,},
								{"",{45,28,4},2.2,0.143,},
								{"5/3.2",{50,32,3},1.91,0.161,},
								{"",{50,32,4},2.49,0.16,},
								{"5.6/3.6",{56,36,3},2.15,0.181,},
								{"",{56,36,4},2.82,0.18,},
								{"",{56,36,5},3.47,0.18,},
								{"6.3/4",{63,40,4},3.19,0.202,},
								{"",{63,40,5},3.92,0.202,},
								{"",{63,40,6},4.64,0.201,},
								{"",{63,40,7},5.34,0.201,},
								{"7/4.5",{70,45,4},3.57,0.226,},
								{"",{70,45,5},4.4,0.225,},
								{"",{70,45,6},5.22,0.225,},
								{"",{70,45,7},6.01,0.225,},
								{"7.5/5",{75,50,5},4.81,0.245,},
								{"",{75,50,6},5.7,0.245,},
								{"",{75,50,8},7.43,0.244,},
								{"",{75,50,10},9.1,0.244,},
								{"8/5",{80,50,5},5,0.255,},
								{"",{80,50,6},5.93,0.255,},
								{"",{80,50,7},6.85,0.255,},
								{"",{80,50,8},7.75,0.254,},
								{"9/5.6",{90,56,5},5.66,0.287,},
								{"",{90,56,6},6.72,0.286,},
								{"",{90,56,7},7.76,0.286,},
								{"",{90,56,8},8.78,0.286,},
								{"10/6.3",{100,63,6},7.55,0.32,},
								{"",{100,63,7},8.72,0.32,},
								{"",{100,63,8},9.88,0.319,},
								{"",{100,63,10},12.1,0.319,},
								{"10/8",{100,80,6},8.35,0.354,},
								{"",{100,80,7},9.66,0.354,},
								{"",{100,80,8},10.9,0.353,},
								{"",{100,80,10},13.5,0.353,},
								{"11/7",{110,70,6},8.35,0.354,},
								{"",{110,70,7},9.66,0.354,},
								{"",{110,70,8},10.9,0.353,},
								{"",{110,70,10},13.5,0.353,},
								{"12.5/8",{125,80,7},11.1,0.403,},
								{"",{125,80,8},12.6,0.403,},
								{"",{125,80,10},15.5,0.402,},
								{"",{125,80,12},18.3,0.402,},
								{"14/9",{140,90,8},14.2,0.453,},
								{"",{140,90,10},17.5,0.452,},
								{"",{140,90,12},20.7,0.451,},
								{"",{140,90,14},23.9,0.451,},
								{"15/9",{150,90,8},14.8,0.473,},
								{"",{150,90,10},18.3,0.472,},
								{"",{150,90,12},21.7,0.471,},
								{"",{150,90,14},25,0.471,},
								{"",{150,90,15},25.7,0.471,},
								{"",{150,90,16},28.3,0.47,},
								{"16/10",{160,100,10},19.9,0.512,},
								{"",{160,100,12},23.6,0.511,},
								{"",{160,100,14},27.2,0.51,},
								{"",{160,100,16},30.8,0.51,},
								{"18/11",{180,110,10},22.3,0.571,},
								{"",{180,110,12},26.5,0.571,},
								{"",{180,110,14},30.6,0.57,},
								{"",{180,110,16},34.6,0.569,},
								{"20/12.5",{200,125,12},29.8,0.641,},
								{"",{200,125,14},34.4,0.64,},
								{"",{200,125,16},39,0.639,},
								{"",{200,125,18},43.6,0.639,}};
GBSectionSteel GBSecSte_C[] = {{"60*30*10*2.5",{60,30,10,2.5},2.363,0,},
								{"60*30*10*3.0",{60,30,10,3},2.743,0,},
								{"80*40*15*2.0",{80,40,15,2},2.72,0,},
								{"100*50*15*2.5",{100,50,15,2.5},4.11,0,},
								{"100*50*20*2.5",{100,50,20,2.5},4.325,0,},
								{"100*50*20*3.0",{100,50,20,3},5.098,0,},
								{"120*50*20*2.5",{120,50,20,2.5},4.7,0,},
								{"120*60*20*3.0",{120,60,20,3},6.01,0,},
								{"140*50*20*2.0",{140,50,20,2},4.14,0,},
								{"140*50*20*2.5",{140,50,20,2.5},5.09,0,},
								{"140*60*20*2.5",{140,60,20,2.5},5.503,0,},
								{"140*60*20*3.0",{140,60,20,3},6.511,0,},
								{"160*60*20*2.0",{160,60,20,2},4.76,0,},
								{"160*60*20*2.5",{160,60,20,2.5},5.87,0,},
								{"160*70*20*3.0",{160,70,20,3},7.42,0,},
								{"180*60*20*3.0",{180,60,20,3},7.453,0,},
								{"180*70*20*3.0",{180,70,20,3},7.924,0,},
								{"180*70*20*2.0",{180,70,20,2},5.39,0,},
								{"180*70*20*2.5",{180,70,20,2.5},6.66,0,},
								{"200*60*20*3.0",{200,60,20,3},7.924,0,},
								{"200*70*20*2.0",{200,70,20,2},5.71,0,},
								{"200*70*20*2.5",{200,70,20,2.5},7.05,0,},
								{"200*70*20*3.0",{200,70,20,3},8.395,0,},
								{"220*75*20*2.0",{220,75,20,2},6.18,0,},
								{"220*75*20*2.5",{220,75,20,2.5},7.64,0,},
								{"250*40*15*3.0",{250,40,15,3},7.924,0,},
								{"300*40*15*3.0",{300,40,15,3},9.102,0,},
								{"400*50*15*3.0",{400,50,15,3},11.928,0,},
								{"450*70*30*6.0",{450,70,30,6},28.092,0,},
								{"450*70*30*8.0",{450,70,30,8},36.421,0,},
								{"500*100*40*6.0",{500,100,40,6},34.176,0,},
								{"500*100*40*8.0",{500,100,40,8},44.533,0,},
								{"500*100*40*10",{500,100,40,10},54.372,0,},
								{"550*120*50*8.0",{550,120,50,8},51.397,0,},
								{"550*120*50*10",{550,120,50,10},62.952,0,},
								{"550*120*50*12",{550,120,50,12},73.99,0,},
								{"600*150*60*12",{600,150,60,12},86.158,0,},
								{"600*150*60*14",{600,150,60,14},97.395,0,},
								{"600*150*60*16",{600,150,60,16},109.025,0,}};
GBSectionSteel GBSecSte_Z[] = {{"100*40*20*2.0",{100,40,20,2},3.208,0,},
								{"100*40*20*2.5",{100,40,20,2.5},3.933,0,},
								{"120*50*20*2.0",{120,50,20,2},3.82,0,},
								{"120*50*20*2.5",{120,50,20,2.5},4.7,0,},
								{"120*50*20*3.0",{120,50,20,3},5.54,0,},
								{"140*50*20*2.5",{140,50,20,2.5},5.11,0,},
								{"140*50*20*3.0",{140,50,20,3},6.04,0,},
								{"160*60*20*2.5",{160,60,20,2.5},5.87,0,},
								{"160*60*20*3.0",{160,60,20,3},6.95,0,},
								{"160*70*20*2.5",{160,70,20,2.5},6.27,0,},
								{"160*70*20*3.0",{160,70,20,3},7.42,0,},
								{"180*70*20*2.5",{180,70,20,2.5},6.68,0,},
								{"180*70*20*3.0",{180,70,20,3},7.924,0,},
								{"230*75*25*3.0",{230,75,25,3},9.573,0,},
								{"230*75*25*4.0",{230,75,25,4},12.518,0,},
								{"250*75*25*3.0",{250,75,25,3},10.044,0,},
								{"250*75*25*4.0",{250,75,25,4},13.146,0,},
								{"300*100*30*4.0",{300,100,30,4},16.545,0,},
								{"300*100*30*6.0",{300,100,30,6},23.88,0,},
								{"400*120*40*8.0",{400,120,40,8},40.789,0,},
								{"400*120*40*10",{400,120,40,10},49.692,0,}};
