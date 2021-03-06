#include "oled_port.h"
#include "oled.h"

uint8 oledAscii[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// space
	0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,// !
	0x00, 0x00, 0x07, 0x00, 0x07, 0x00,// "
	0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,// #
	0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,// $
	0x00, 0x62, 0x64, 0x08, 0x13, 0x23,// %
	0x00, 0x36, 0x49, 0x55, 0x22, 0x50,// &
	0x00, 0x00, 0x05, 0x03, 0x00, 0x00,// '
	0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,// (
	0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,// )
	0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,// *
	0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,// +
	0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,// ,
	0x00, 0x08, 0x08, 0x08, 0x08, 0x08,// -
	0x00, 0x00, 0x60, 0x60, 0x00, 0x00,// .
	0x00, 0x20, 0x10, 0x08, 0x04, 0x02,// /
	0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
	0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,// 1
	0x00, 0x42, 0x61, 0x51, 0x49, 0x46,// 2
	0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,// 3
	0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,// 4
	0x00, 0x27, 0x45, 0x45, 0x45, 0x39,// 5
	0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
	0x00, 0x01, 0x71, 0x09, 0x05, 0x03,// 7
	0x00, 0x36, 0x49, 0x49, 0x49, 0x36,// 8
	0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,// 9
	0x00, 0x00, 0x36, 0x36, 0x00, 0x00,// :
	0x00, 0x00, 0x56, 0x36, 0x00, 0x00,// ;
	0x00, 0x08, 0x14, 0x22, 0x41, 0x00,// <
	0x00, 0x14, 0x14, 0x14, 0x14, 0x14,// =
	0x00, 0x00, 0x41, 0x22, 0x14, 0x08,// >
	0x00, 0x02, 0x01, 0x51, 0x09, 0x06,// ?
	0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,// @
	0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,// A
	0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,// B
	0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,// C
	0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,// D
	0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,// E
	0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,// F
	0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,// G
	0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,// H
	0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,// I
	0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,// J
	0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,// K
	0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,// L
	0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,// M
	0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,// N
	0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,// O
	0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,// P
	0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,// Q
	0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,// R
	0x00, 0x46, 0x49, 0x49, 0x49, 0x31,// S
	0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,// T
	0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,// U
	0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,// V
	0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,// W
	0x00, 0x63, 0x14, 0x08, 0x14, 0x63,// X
	0x00, 0x07, 0x08, 0x70, 0x08, 0x07,// Y
	0x00, 0x61, 0x51, 0x49, 0x45, 0x43,// Z
	0x00, 0x00, 0x7F, 0x41, 0x41, 0x00,// [
	0x00, 0x55, 0x2A, 0x55, 0x2A, 0x55,// 55
	0x00, 0x00, 0x41, 0x41, 0x7F, 0x00,// ]
	0x00, 0x04, 0x02, 0x01, 0x02, 0x04,// ^
	0x00, 0x40, 0x40, 0x40, 0x40, 0x40,// _
	0x00, 0x00, 0x01, 0x02, 0x04, 0x00,// '
	0x00, 0x20, 0x54, 0x54, 0x54, 0x78,// a
	0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,// b
	0x00, 0x38, 0x44, 0x44, 0x44, 0x20,// c
	0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,// d
	0x00, 0x38, 0x54, 0x54, 0x54, 0x18,// e
	0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,// f
	0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,// g
	0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,// h
	0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,// i
	0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,// j
	0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,// k
	0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,// l
	0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,// m
	0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,// n
	0x00, 0x38, 0x44, 0x44, 0x44, 0x38,// o
	0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,// p
	0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,// q
	0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,// r
	0x00, 0x48, 0x54, 0x54, 0x54, 0x20,// s
	0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,// t
	0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,// u
	0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,// v
	0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,// w
	0x00, 0x44, 0x28, 0x10, 0x28, 0x44,// x
	0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,// y
	0x00, 0x44, 0x64, 0x54, 0x4C, 0x44,// z
	0x08, 0x36, 0x41, 0x00, 0x00, 0x00,// {
	0x00, 0x7F, 0x00, 0x00, 0x00, 0x00,// |
	0x41, 0x36, 0x08, 0x00, 0x00, 0x00,// }
	0x02, 0x01, 0x01, 0x02, 0x01, 0x00 // ~
};

char hexTable[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void oledSetColumnStartAddress(uint8 address)
{
	oledCmdW0(OLED_SET_LOWER_COLUMN_START_ADDRESS | (address & 0x0F));
	address = address >> 4;
	address &= 0x0F;
	oledCmdW0(OLED_SET_HIGHER_COLUMN_START_ADDRESS | address);
}

void oledSetMemoryAddressingMode(uint8 mode)
{
	mode &= 0x03;
	oledCmdW1(OLED_SET_MEMORY_ADDRESSING_MODE, mode);
}

void oledSetDisplayStartLine(uint8 line)
{
	line &= 0x3F;
	oledCmdW0(OLED_SET_DISPLAY_START_LINE | line);
}

void oledSetContrastControl(uint8 contrast)
{
	oledCmdW1(OLED_SET_CONTRAST_CONTROL, contrast);
}

void oledChargePumpSetting(boolean enable)
{
	if (enable == TRUE) {
		oledCmdW1(OLED_CHARGE_PUMP_SETTING, 0x14);
	} else {
		oledCmdW1(OLED_CHARGE_PUMP_SETTING, 0x10);
	}
}

void oledSetSegmentRemap(boolean remap)
{
	if (remap == TRUE) {
		oledCmdW0(OLED_SET_SEGMENT_REMAP | 0x01);
	} else {
		oledCmdW0(OLED_SET_SEGMENT_REMAP);
	}
}

void oledEntireDisplayOn(boolean on)
{
	if (on == TRUE) {
		oledCmdW0(OLED_ENTIRE_DISPLAY_ON | 0x01);
	} else {
		oledCmdW0(OLED_ENTIRE_DISPLAY_ON);
	}
}

void oledSetNormalInverseDisplay(boolean inverse)
{
	if (inverse == TRUE) {
		oledCmdW0(OLED_SET_NORMAL_INVERSE_DISPLAY | 0x01);
	} else {
		oledCmdW0(OLED_SET_NORMAL_INVERSE_DISPLAY);
	}
}

void oledSetMulitplexRatio(uint8 ratio)
{
	ratio &= 0x3F;
	oledCmdW1(OLED_SET_NORMAL_INVERSE_DISPLAY, ratio);
}

void oledSetDisplayOnOff(boolean on)
{
	if (on == TRUE) {
		oledCmdW0(OLED_SET_DISPLAY_ON_OFF | 0x01);
	} else {
		oledCmdW0(OLED_SET_DISPLAY_ON_OFF);
	}
}

void oledSetPageStartAddress(uint8 page)
{
	page &= 0x07;
	oledCmdW0(OLED_SET_PAGE_START_ADDRESS + page);
}

void oledSetComOutPutScanDirection(boolean remap)
{
	if (remap == TRUE) {
		oledCmdW0(OLED_SET_COM_OUTPUT_SCAN_DIRECTION | 0x08);
	} else {
		oledCmdW0(OLED_SET_COM_OUTPUT_SCAN_DIRECTION);
	}
}

void oledSetDisplayOffset(uint8 offset)
{
	offset &= 0x3F;
	oledCmdW1(OLED_SET_DISPLAY_OFFSET, offset);
}

void oledSetDisplayClockDivideRatio(uint8 ratio)
{
	oledCmdW1(OLED_SET_DISPLAY_CLOCK_DIVIDE_RATIO, ratio);
}

void oledSetPrechargePeriod(uint8 period)
{
	oledCmdW1(OLED_SET_PRECHARGE_PERIOD, period);
}

void oledSetComPinsHardwareConfiguration(uint8 config)
{
	config = config << 4;
	config &= 0x30;
	config |= 0x02;
	oledCmdW1(OLED_SET_COM_PINS_HARDWARE_CONFIGURATION, config);
}

void oledSetVcomhDeselectLevel(uint8 level)
{
	level = level << 4;
	level &= 0x70;
	oledCmdW1(OLED_SET_VCOMH_DESELECT_LEVEL, level);
}

static uint8 *oledGetCharPtr(char c)
{
	uint16 index;
	
	index = ((uint8)c - 32) * 6;
	return &oledAscii[index];
}

void oledInitFromTask(void)
{
	oledSetDisplayOnOff(FALSE);
	oledSetMemoryAddressingMode(0x02);
	oledSetPageStartAddress(0x00);
	oledSetComOutPutScanDirection(TRUE);//
	oledSetColumnStartAddress(0x00);
	oledSetDisplayStartLine(0x00);
	oledSetContrastControl(0xFF);
	oledSetSegmentRemap(TRUE);//
	oledSetNormalInverseDisplay(FALSE);
	oledSetMulitplexRatio(0x3F);
	oledEntireDisplayOn(FALSE);
	oledSetDisplayOffset(0x00);
	oledSetDisplayClockDivideRatio(0xF0);
	oledSetPrechargePeriod(0x22);
	oledSetComPinsHardwareConfiguration(0x01);
	oledSetVcomhDeselectLevel(0x02);
	oledChargePumpSetting(TRUE);
	oledSetDisplayOnOff(TRUE);
}

void oledFillPage(uint8 page, uint8 fill)
{
	uint8 i;

	oledSetPageStartAddress(page);
	oledSetColumnStartAddress(0x00);
	for(i = 0; i < 128; i++) {
		oledDataByteW(fill);
	}
}

void oledClearScreen(void)
{
	oledFillPage(0, 0x00);
	oledFillPage(1, 0x00);
	oledFillPage(2, 0x00);
	oledFillPage(3, 0x00);
	oledFillPage(4, 0x00);
	oledFillPage(5, 0x00);
	oledFillPage(6, 0x00);
	oledFillPage(7, 0x00);
}

void oledPrint(uint8 page, uint8 column, char *str)
{
	char temp;
	uint8 i;
	
	i = 0;
	oledSetPageStartAddress(page);
	oledSetColumnStartAddress(column);
	temp = str[0];
	while (temp != '\0') {
		oledDataBufW(oledGetCharPtr(temp), 6);
		i++;
		temp = str[i];
	}
}

void oledHex8(uint8 page, uint8 column, uint8 hex8)
{
	char buffer[5];

	buffer[0] = '0';
	buffer[1] = 'x';
	buffer[2] = hexTable[(hex8>>4)&0x0F];
	buffer[3] = hexTable[hex8&0x0F];
	buffer[4] = '\0';
	oledPrint(page, column, buffer);
}

void oledHex16(uint8 page, uint8 column, uint16 hex16)
{
	char buffer[7];

	buffer[0] = '0';
	buffer[1] = 'x';
	buffer[2] = hexTable[(hex16>>12)&0x0F];
	buffer[3] = hexTable[(hex16>>8)&0x0F];
	buffer[4] = hexTable[(hex16>>4)&0x0F];
	buffer[5] = hexTable[hex16&0x0F];
	buffer[6] = '\0';
	oledPrint(page, column, buffer);
}

void oledHex32(uint8 page, uint8 column, uint32 hex32)
{
	char buffer[11];

	buffer[0] = '0';
	buffer[1] = 'x';
	buffer[2] = hexTable[(hex32>>28)&0x0F];
	buffer[3] = hexTable[(hex32>>24)&0x0F];
	buffer[4] = hexTable[(hex32>>20)&0x0F];
	buffer[5] = hexTable[(hex32>>16)&0x0F];
	buffer[6] = hexTable[(hex32>>12)&0x0F];
	buffer[7] = hexTable[(hex32>>8)&0x0F];
	buffer[8] = hexTable[(hex32>>4)&0x0F];
	buffer[9] = hexTable[hex32&0x0F];
	buffer[10] = '\0';
	oledPrint(page, column, buffer);
}

void oledLongInt(uint8 page, uint8 column, uint32 x)
{
	char digit[11];
	uint8 i;

	digit[10] = '\0';
	i = 9;
	do {
		digit[i] = '0' + x%10;
		x /= 10;
		i--;
	} while (x != 0);
	i++;
	oledPrint(page, column, &digit[i]);
}

void oledLoadPicture(uint8 page, uint8 column, uint8 pageSize, uint8 columnSize, uint8 *picture)
{
	uint8 pageCnt;
	uint16 i;
	
	i = 0;
	for (pageCnt = page; pageCnt < page + pageSize; pageCnt++) {
		oledSetPageStartAddress(pageCnt);
		oledSetColumnStartAddress(column);
		oledDataBufW(&picture[i], columnSize);
		i += columnSize;
	}
}
