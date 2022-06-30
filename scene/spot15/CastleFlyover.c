#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"

#include "CastleFlyover.h"

s32 CastleFlyover[] = {
	CS_BEGIN_CUTSCENE(4, 5000),
	CS_TERMINATOR(93, 260, 261),
	CS_TEXT_LIST(3),
		CS_TEXT_DISPLAY_TEXTBOX(0x00F90, 16, 90, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0F91, 101, 175, 0x0000, 0x0000, 0x0000),
		CS_TEXT_DISPLAY_TEXTBOX(0x0F92, 186, 260, 0x0000, 0x0000, 0x0000),
	CS_CAM_POS_LIST(0, 481),
		CS_CAM_POS(0, 0, 0, 0x42700000, 525, 1798, 4977, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 453, 2074, 4098, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 1900, 1504, 2559, 0),
		CS_CAM_POS(0, 0, 0, 0x42700000, 2111, 1760, 1698, 0),
		CS_CAM_POS(0, 0, 0, 0x42f00000, -623, 1726, 1235, 0),
		CS_CAM_POS(0, 0, 0, 0x42f00000, -1164, 2040, 1145, 0),
		CS_CAM_POS(0, 0, 0, 0x42f00000, -1331, 1941, 1056, 0),
		CS_CAM_POS(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_CAM_FOCUS_POINT_LIST(0, 550),
		CS_CAM_FOCUS_POINT(0, 0, 50, 0x42700000, 517, 1798, 4922, 0),
		CS_CAM_FOCUS_POINT(0, 0, 60, 0x42700000, 434, 2030, 4069, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42700000, 1851, 1504, 2587, 0),
		CS_CAM_FOCUS_POINT(0, 0, 90, 0x42700000, 2055, 1760, 1700, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42f00000, -605, 1756, 1192, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42f00000, -1120, 2021, 1115, 0),
		CS_CAM_FOCUS_POINT(0, 0, 70, 0x42f00000, -1278, 1922, 1052, 0),
		CS_CAM_FOCUS_POINT(-1, 0, 0, 0x0, 0, 0, 0, 0),
	CS_END(),
};
