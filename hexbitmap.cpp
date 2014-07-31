#include <iostream>

/*

Challenge #171 [Easy] Hex to 8x8 Bitmap

Today we will be making some simple 8x8 bitmap pictures. 
You will be given 8 hex values that can be 0-255 in decimal value (so 1 byte). 
Each value represents a row. So 8 rows of 8 bits so a 8x8 bitmap picture.

*/

std::string GetBinaryStringFromHexString (std::string sHex){

	std::string sReturn = "";

		for (int i = 0; i < sHex.length (); ++i){
			switch (sHex [i])
			{
				case '0': sReturn.append ("0000"); break;
				case '1': sReturn.append ("0001"); break;
				case '2': sReturn.append ("0010"); break;
				case '3': sReturn.append ("0011"); break;
				case '4': sReturn.append ("0100"); break;
				case '5': sReturn.append ("0101"); break;
				case '6': sReturn.append ("0110"); break;
				case '7': sReturn.append ("0111"); break;
				case '8': sReturn.append ("1000"); break;
				case '9': sReturn.append ("1001"); break;
				case 'A': sReturn.append ("1010"); break;
				case 'B': sReturn.append ("1011"); break;
				case 'C': sReturn.append ("1100"); break;
				case 'D': sReturn.append ("1101"); break;
				case 'E': sReturn.append ("1110"); break;
				case 'F': sReturn.append ("1111"); break;
			}
		}

	return sReturn;

}

int main(){

	char grid[8][8];
	for (int i = 0; i < 8; i++){
		std::string hexIn;
		std::cin >> hexIn;
		std::string binOut = GetBinaryStringFromHexString(hexIn);
		for (int j = 0; j < 8; j++){
			if (binOut[j] == '1')
				grid[i][j] = 'X';
			else
				grid[i][j] = ' ';
		}
	}

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			std::cout << grid[i][j];
		}
		std::cout << std::endl;
	}

}