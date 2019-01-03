// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char web[]=
{	(signed char) +1, +18, +90, // sync and move to y, x
	(signed char) -1, -14, -75, // draw, y, x
	(signed char) +0, -8, +0, // mode, y, x
	(signed char) -1, -14, +75, // draw, y, x
	(signed char) +0, -94, -23, // mode, y, x
	(signed char) -1, +102, -63, // draw, y, x
	(signed char) +0, +0, -8, // mode, y, x
	(signed char) -1, -104, -63, // draw, y, x
	(signed char) +0, +96, -23, // mode, y, x
	(signed char) -1, +36, +0, // draw, y, x
	(signed char) +0, -14, +75, // mode, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) +0, +40, +35, // mode, y, x
	(signed char) +1, +36, +20, // sync and move to y, x
	(signed char) -1, +0, -40, // draw, y, x
	(signed char) -1, -28, -16, // draw, y, x
	(signed char) -1, -16, +0, // draw, y, x
	(signed char) -1, -28, +16, // draw, y, x
	(signed char) -1, +0, +40, // draw, y, x
	(signed char) -1, +28, +16, // draw, y, x
	(signed char) -1, +16, +0, // draw, y, x
	(signed char) -1, +28, -16, // draw, y, x
	(signed char) +0, +27, +16, // mode, y, x
	(signed char) -1, +0, -72, // draw, y, x
	(signed char) -1, -50, -27, // draw, y, x
	(signed char) -1, -26, +0, // draw, y, x
	(signed char) +1, -13, -63, // sync and move to y, x
	(signed char) -1, -50, +27, // draw, y, x
	(signed char) -1, +0, +72, // draw, y, x
	(signed char) -1, +50, +27, // draw, y, x
	(signed char) -1, +26, +0, // draw, y, x
	(signed char) -1, +50, -27, // draw, y, x
	(signed char) +0, +46, +28, // mode, y, x
	(signed char) -1, -99, -60, // draw, y, x
	(signed char) +0, +0, -8, // mode, y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) -1, -6, +11, // draw, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) -1, -6, -11, // draw, y, x
	(signed char) +1, -10, +4, // sync and move to y, x
	(signed char) -1, +0, -8, // draw, y, x
	(signed char) -1, +6, -11, // draw, y, x
	(signed char) -1, -14, -75, // draw, y, x
	(signed char) -1, -72, +37, // draw, y, x
	(signed char) -1, +0, +106, // draw, y, x
	(signed char) -1, +72, +37, // draw, y, x
	(signed char) -1, +36, +0, // draw, y, x
	(signed char) -1, +72, -37, // draw, y, x
	(signed char) -1, +0, -106, // draw, y, x
	(signed char) -1, -72, -37, // draw, y, x
	(signed char) -1, -14, +75, // draw, y, x
	(signed char) -1, +6, +11, // draw, y, x
	(signed char) -1, +102, -63, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char web_wall_1_1[]=
{
	-10, +4, // move to y, x
	+0, -8, // draw to y, x
};

const signed char web_wall_1_2[]=
{
	-4, +15, // move to y, x
	-6, -11, // draw to y, x
};

// -4,  15
// -10, 4
const signed char web_wall_coords_1_2[]=
{
	-10	,	4	,
	-9	,	5	,
	-8	,	6	,
	-8	,	7	,
	-7	,	8	,
	-7	,	9	,
	-6	,	10	,
	-6	,	11	,
	-5	,	12	,
	-5	,	13	,
	-4	,	14	,
	-4	,	15	,
	127	/* terminator */
};

const signed char web_wall_1_3[]=
{
	+4, +15, // move to y, x
	-8, +0, // draw to y, x
};

const signed char web_wall_1_4[]=
{
	+10, +4, // move to y, x
	-6, +11, // draw to y, x
};

// 10,  4
//  4, 15
const signed char web_wall_coords_1_4[]=
{
	10	,	4	,
	9	,	5	,
	8	,	6	,
	8	,	7	,
	7	,	8	,
	7	,	9	,
	6	,	10	,
	6	,	11	,
	5	,	12	,
	5	,	13	,
	4	,	14	,
	4	,	15	,
	127	/* terminator */
};

const signed char web_wall_1_5[]=
{
	+10, -4, // move to y, x
	+0, +8, // draw to y, x
};

const signed char web_wall_1_6[]=
{
	+4, -15, // move to y, x
	+6, +11, // draw to y, x
};

// 4, -15
// 10, -4
const signed char web_wall_coords_1_6[]=
{
	4	,	-15	,
	4	,	-14	,
	5	,	-13	,
	5	,	-12	,
	6	,	-11	,
	6	,	-10	,
	7	,	-9	,
	7	,	-8	,
	8	,	-7	,
	8	,	-6	,
	9	,	-5	,
	10	,	-4	,
	127	/* terminator */
};

const signed char web_wall_1_7[]=
{
	-4, -15, // move to y, x
	+8, +0, // draw to y, x
};

const signed char web_wall_1_8[]=
{
	-10, -4, // move to y, x
	+6, -11, // draw to y, x
};

// -10, -4
// -4, -15
const signed char web_wall_coords_1_8[]=
{
	-4	,	-15	,
	-4	,	-14	,
	-5	,	-13	,
	-5	,	-12	,
	-6	,	-11	,
	-6	,	-10	,
	-7	,	-9	,
	-7	,	-8	,
	-8	,	-7	,
	-8	,	-6	,
	-9	,	-5	,
	-10	,	-4	,
	127	/* terminator */
};

const signed char web_wall_2_1[]=
{
	-36, -20, // move to y, x
	+0, +40, // draw to y, x
};

const signed char web_wall_2_2[]=
{
	-36, +20, // move to y, x
	+28, +16, // draw to y, x
};

// -36,  20
//  -8,  36
const signed char web_wall_coords_2_2[]=
{
	-36	,	20	,
	-35	,	21	,
	-33	,	22	,
	-31	,	23	,
	-29	,	24	,
	-28	,	25	,
	-26	,	26	,
	-24	,	27	,
	-22	,	28	,
	-21	,	29	,
	-19	,	30	,
	-17	,	31	,
	-15	,	32	,
	-14	,	33	,
	-12	,	34	,
	-10	,	35	,
	-8	,	36	,
	127	/* terminator */
};

const signed char web_wall_2_3[]=
{
	-8, +37, // move to y, x
	+16, +0, // draw to y, x
};

const signed char web_wall_2_4[]=
{
	+8, +36, // move to y, x
	+28, -16, // draw to y, x
};

//  8, 36
// 36, 20
const signed char web_wall_coords_2_4[]=
{
	36	,	20	,
	35	,	21	,
	33	,	22	,
	31	,	23	,
	29	,	24	,
	28	,	25	,
	26	,	26	,
	24	,	27	,
	22	,	28	,
	21	,	29	,
	19	,	30	,
	17	,	31	,
	15	,	32	,
	14	,	33	,
	12	,	34	,
	10	,	35	,
	8	,	36	,
	127	/* terminator */
};

const signed char web_wall_2_5[]=
{
	+36, +20, // move to y, x
	+0, -40, // draw to y, x
};

const signed char web_wall_2_6[]=
{
	+36, -20, // move to y, x
	-28, -16, // draw to y, x
};

// 36, -20
//  8, -36
const signed char web_wall_coords_2_6[]=
{
	8	,	-36	,
	10	,	-35	,
	12	,	-34	,
	14	,	-33	,
	15	,	-32	,
	17	,	-31	,
	19	,	-30	,
	21	,	-29	,
	22	,	-28	,
	24	,	-27	,
	26	,	-26	,
	28	,	-25	,
	29	,	-24	,
	31	,	-23	,
	33	,	-22	,
	35	,	-21	,
	36	,	-20	,
	127	/* terminator */
};

const signed char web_wall_2_7[]=
{
	+8, -36, // move to y, x
	-16, +0, // draw to y, x
};

const signed char web_wall_2_8[]=
{
	-8, -36, // move to y, x
	-28, +16, // draw to y, x
};

//  -8, -36
// -36, -20
const signed char web_wall_coords_2_8[]=
{
	-8	,	-36	,
	-10	,	-35	,
	-12	,	-34	,
	-14	,	-33	,
	-15	,	-32	,
	-17	,	-31	,
	-19	,	-30	,
	-21	,	-29	,
	-22	,	-28	,
	-24	,	-27	,
	-26	,	-26	,
	-28	,	-25	,
	-29	,	-24	,
	-31	,	-23	,
	-33	,	-22	,
	-35	,	-21	,
	-36	,	-20	,
	127	/* terminator */
};

const signed char web_wall_3_1[]=
{
	-63, -36, // move to y, x
	+0, +73, // draw to y, x
};

const signed char web_wall_3_2[]=
{
	-63, +36, // move to y, x
	+50, +27, // draw to y, x
};

// -63, 36
// -13, 63
const signed char web_wall_coords_3_2[]=
{
	-63	,	36	,
	-61	,	37	,
	-59	,	38	,
	-57	,	39	,
	-55	,	40	,
	-53	,	41	,
	-51	,	42	,
	-50	,	43	,
	-48	,	44	,
	-46	,	45	,
	-44	,	46	,
	-42	,	47	,
	-40	,	48	,
	-38	,	49	,
	-37	,	50	,
	-35	,	51	,
	-33	,	52	,
	-31	,	53	,
	-29	,	54	,
	-27	,	55	,
	-25	,	56	,
	-24	,	57	,
	-22	,	58	,
	-20	,	59	,
	-18	,	60	,
	-16	,	61	,
	-14	,	62	,
	-13	,	63	,
	127	/* terminator */
};

const signed char web_wall_3_3[]=
{
	-13, +63, // move to y, x
	+26, +0, // draw to y, x
};

const signed char web_wall_3_4[]=
{
	+13, +63, // move to y, x
	+50, -27, // draw to y, x
};

// 13, 63
// 63, 36
const signed char web_wall_coords_3_4[]=
{
	63	,	36	,
	61	,	37	,
	59	,	38	,
	57	,	39	,
	55	,	40	,
	53	,	41	,
	51	,	42	,
	50	,	43	,
	48	,	44	,
	46	,	45	,
	44	,	46	,
	42	,	47	,
	40	,	48	,
	38	,	49	,
	37	,	50	,
	35	,	51	,
	33	,	52	,
	31	,	53	,
	29	,	54	,
	27	,	55	,
	25	,	56	,
	24	,	57	,
	22	,	58	,
	20	,	59	,
	18	,	60	,
	16	,	61	,
	14	,	62	,
	13	,	63	,
	127	/* terminator */
};

const signed char web_wall_3_5[]=
{
	+63, +36, // move to y, x
	+0, -73, // draw to y, x
};

const signed char web_wall_3_6[]=
{
	+63, -36, // move to y, x
	-50, -27, // draw to y, x
};

// 63, -36
// 13, -63
const signed char web_wall_coords_3_6[]=
{
	13	,	-63	,
	14	,	-62	,
	16	,	-61	,
	18	,	-60	,
	20	,	-59	,
	22	,	-58	,
	24	,	-57	,
	25	,	-56	,
	27	,	-55	,
	29	,	-54	,
	31	,	-53	,
	33	,	-52	,
	35	,	-51	,
	37	,	-50	,
	38	,	-49	,
	40	,	-48	,
	42	,	-47	,
	44	,	-46	,
	46	,	-45	,
	48	,	-44	,
	50	,	-43	,
	51	,	-42	,
	53	,	-41	,
	55	,	-40	,
	57	,	-39	,
	59	,	-38	,
	61	,	-37	,
	63	,	-36	,
	127	/* terminator */
};

const signed char web_wall_3_7[]=
{
	+12, -60, // move to y, x
	-24, +0, // draw to y, x
};

const signed char web_wall_3_8[]=
{
	-13, -63, // move to y, x
	-50, +27, // draw to y, x
};

// -13, -63
// -63, -36
const signed char web_wall_coords_3_8[]=
{
	-13	,	-63	,
	-14	,	-62	,
	-16	,	-61	,
	-18	,	-60	,
	-20	,	-59	,
	-22	,	-58	,
	-24	,	-57	,
	-25	,	-56	,
	-27	,	-55	,
	-29	,	-54	,
	-31	,	-53	,
	-33	,	-52	,
	-35	,	-51	,
	-37	,	-50	,
	-38	,	-49	,
	-40	,	-48	,
	-42	,	-47	,
	-44	,	-46	,
	-46	,	-45	,
	-48	,	-44	,
	-50	,	-43	,
	-51	,	-42	,
	-53	,	-41	,
	-55	,	-40	,
	-57	,	-39	,
	-59	,	-38	,
	-61	,	-37	,
	-63	,	-36	,
	127	/* terminator */
};

const signed char web_wall_4_1[]=
{
	-90, -52, // move to y, x
	+0, +105, // draw to y, x
};

const signed char web_wall_4_2[]=
{
	-90, +53, // move to y, x
	+72, +37, // draw to y, x
};

//-90, 53
//-18, 90
const signed char web_wall_coords_4_2[]=
{
	-90	,	53	,
	-89	,	54	,
	-87	,	55	,
	-85	,	56	,
	-83	,	57	,
	-81	,	58	,
	-79	,	59	,
	-77	,	60	,
	-75	,	61	,
	-73	,	62	,
	-71	,	63	,
	-69	,	64	,
	-67	,	65	,
	-65	,	66	,
	-63	,	67	,
	-61	,	68	,
	-59	,	69	,
	-57	,	70	,
	-55	,	71	,
	-54	,	72	,
	-52	,	73	,
	-50	,	74	,
	-48	,	75	,
	-46	,	76	,
	-44	,	77	,
	-42	,	78	,
	-40	,	79	,
	-38	,	80	,
	-36	,	81	,
	-34	,	82	,
	-32	,	83	,
	-30	,	84	,
	-28	,	85	,
	-26	,	86	,
	-24	,	87	,
	-22	,	88	,
	-20	,	89	,
	-18	,	90	,
	127	/* terminator */
};

const signed char web_wall_4_3[]=
{
	-18, +90, // move to y, x
	+36, +0, // draw to y, x
};

const signed char web_wall_4_4[]=
{
	+18, +90, // move to y, x
	+72, -37, // draw to y, x
};

// 18, 90
// 90, 53
const signed char web_wall_coords_4_4[]=
{
	90	,	53	,
	89	,	54	,
	87	,	55	,
	85	,	56	,
	83	,	57	,
	81	,	58	,
	79	,	59	,
	77	,	60	,
	75	,	61	,
	73	,	62	,
	71	,	63	,
	69	,	64	,
	67	,	65	,
	65	,	66	,
	63	,	67	,
	61	,	68	,
	59	,	69	,
	57	,	70	,
	55	,	71	,
	54	,	72	,
	52	,	73	,
	50	,	74	,
	48	,	75	,
	46	,	76	,
	44	,	77	,
	42	,	78	,
	40	,	79	,
	38	,	80	,
	36	,	81	,
	34	,	82	,
	32	,	83	,
	30	,	84	,
	28	,	85	,
	26	,	86	,
	24	,	87	,
	22	,	88	,
	20	,	89	,
	18	,	90	,
	127	/* terminator */
};

const signed char web_wall_4_5[]=
{
	+90, +53, // move to y, x
	+0, -106, // draw to y, x
};

const signed char web_wall_4_6[]=
{
	+90, -53, // move to y, x
	-72, -37, // draw to y, x
};

// 90, -53
// 18, -90
const signed char web_wall_coords_4_6[]=
{
	18	,	-90	,
	20	,	-89	,
	22	,	-88	,
	24	,	-87	,
	26	,	-86	,
	28	,	-85	,
	30	,	-84	,
	32	,	-83	,
	34	,	-82	,
	36	,	-81	,
	38	,	-80	,
	40	,	-79	,
	42	,	-78	,
	44	,	-77	,
	46	,	-76	,
	48	,	-75	,
	50	,	-74	,
	52	,	-73	,
	54	,	-72	,
	55	,	-71	,
	57	,	-70	,
	59	,	-69	,
	61	,	-68	,
	63	,	-67	,
	65	,	-66	,
	67	,	-65	,
	69	,	-64	,
	71	,	-63	,
	73	,	-62	,
	75	,	-61	,
	77	,	-60	,
	79	,	-59	,
	81	,	-58	,
	83	,	-57	,
	85	,	-56	,
	87	,	-55	,
	89	,	-54	,
	90	,	-53	,
	127	/* terminator */
};

const signed char web_wall_4_7[]=
{
	+18, -90, // move to y, x
	-36, +0, // draw to y, x
};

const signed char web_wall_4_8[]=
{
	-18, -90, // move to y, x
	-72, +37, // draw to y, x
};

// -18, -90
// -90, -53
const signed char web_wall_coords_4_8[]=
{
	-18	,	-90	,
	-20	,	-89	,
	-22	,	-88	,
	-24	,	-87	,
	-26	,	-86	,
	-28	,	-85	,
	-30	,	-84	,
	-32	,	-83	,
	-34	,	-82	,
	-36	,	-81	,
	-38	,	-80	,
	-40	,	-79	,
	-42	,	-78	,
	-44	,	-77	,
	-46	,	-76	,
	-48	,	-75	,
	-50	,	-74	,
	-52	,	-73	,
	-54	,	-72	,
	-55	,	-71	,
	-57	,	-70	,
	-59	,	-69	,
	-61	,	-68	,
	-63	,	-67	,
	-65	,	-66	,
	-67	,	-65	,
	-69	,	-64	,
	-71	,	-63	,
	-73	,	-62	,
	-75	,	-61	,
	-77	,	-60	,
	-79	,	-59	,
	-81	,	-58	,
	-83	,	-57	,
	-85	,	-56	,
	-87	,	-55	,
	-89	,	-54	,
	-90	,	-53	,
	127	/* terminator */
};

const signed char* const web_walls[]=
{
	web_wall_1_1,
	web_wall_1_2,
	web_wall_1_3,
	web_wall_1_4,
	web_wall_1_5,
	web_wall_1_6,
	web_wall_1_7,
	web_wall_1_8,
	web_wall_2_1,
	web_wall_2_2,
	web_wall_2_3,
	web_wall_2_4,
	web_wall_2_5,
	web_wall_2_6,
	web_wall_2_7,
	web_wall_2_8,
	web_wall_3_1,
	web_wall_3_2,
	web_wall_3_3,
	web_wall_3_4,
	web_wall_3_5,
	web_wall_3_6,
	web_wall_3_7,
	web_wall_3_8,
	web_wall_4_1,
	web_wall_4_2,
	web_wall_4_3,
	web_wall_4_4,
	web_wall_4_5,
	web_wall_4_6,
	web_wall_4_7,
	web_wall_4_8
};

const signed char* const web_wall_coords[]=
{
	0,
	web_wall_coords_1_2,
	0,
	web_wall_coords_1_4,
	0,
	web_wall_coords_1_6,
	0,
	web_wall_coords_1_8,
	0,
	web_wall_coords_2_2,
	0,
	web_wall_coords_2_4,
	0,
	web_wall_coords_2_6,
	0,
	web_wall_coords_2_8,
	0,
	web_wall_coords_3_2,
	0,
	web_wall_coords_3_4,
	0,
	web_wall_coords_3_6,
	0,
	web_wall_coords_3_8,
	0,
	web_wall_coords_4_2,
	0,
	web_wall_coords_4_4,
	0,
	web_wall_coords_4_6,
	0,
	web_wall_coords_4_8
};

// ***************************************************************************
// end of file
// ***************************************************************************
