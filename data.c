/*****************************************
  NAAGTRO version 2

  data.c   Static program data

  (C) March 5, 2023  M. Feliks
*****************************************/

unsigned char naaglogo[] = 
{
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0xfc,  0x00,  0x00,  0x00,  0x00,  0x1f,  0xfe,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x03,  0xff,  0xc0,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x01,  0xff,  0xf8,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x07,  0xfe,  0x00,  0x00,
0x00,  0x00,  0x3f,  0xff,  0xe0,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x07,  0xff,  0xfe,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x1f,  0xff,
0xff,  0xf8,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x0c,  0x00,  0x00,
0x00,  0x00,  0x03,  0xff,  0xfe,  0x00,  0x00,  0x00,  0x00,  0x7f,  0xff,
0xff,  0xfc,  0x00,  0x00,  0x00,  0x00,  0x00,  0x0f,  0xff,  0xff,  0xff,
0x80,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xe0,  0x00,
0x00,  0x00,  0x00,  0x00,  0x7f,  0x80,  0x00,  0x00,  0x03,  0xff,  0xff,
0xfe,  0x00,  0x00,  0x00,  0x00,  0xf8,  0x03,  0xff,  0xfe,  0x00,  0x00,
0x00,  0x00,  0x00,  0x1f,  0x80,  0x7f,  0xff,  0xc0,  0x00,  0x00,  0x00,
0x07,  0xff,  0xc0,  0x07,  0xff,  0xf0,  0x00,  0x00,  0x00,  0x00,  0x03,
0xff,  0xc0,  0x00,  0x00,  0x1f,  0xff,  0xf8,  0xfe,  0x00,  0x00,  0x00,
0x00,  0xf8,  0x00,  0x1f,  0xfe,  0x00,  0x00,  0x00,  0x00,  0x00,  0x1f,
0x80,  0x01,  0xff,  0xc0,  0x00,  0x00,  0x00,  0x0f,  0xfc,  0x00,  0x00,
0x1f,  0xf0,  0x00,  0x00,  0x00,  0x00,  0x1f,  0xff,  0xe0,  0x00,  0x00,
0x1f,  0xfe,  0x00,  0xfe,  0x00,  0x00,  0x00,  0x07,  0xe0,  0x00,  0x00,
0xfe,  0x00,  0x00,  0x00,  0x00,  0x00,  0x7c,  0x00,  0x00,  0x1f,  0xc0,
0x00,  0x00,  0x00,  0xff,  0xf0,  0x00,  0x00,  0x07,  0xf0,  0x00,  0x00,
0x00,  0x00,  0x7f,  0xff,  0xf0,  0x00,  0x00,  0x1f,  0xf0,  0x00,  0xfe,
0x00,  0x00,  0x00,  0x07,  0xe0,  0x00,  0x00,  0xfe,  0x00,  0x00,  0x00,
0x00,  0x00,  0x7c,  0x00,  0x00,  0x1f,  0xc0,  0x00,  0x00,  0x01,  0xff,
0xc0,  0x00,  0x00,  0x07,  0xe0,  0x00,  0x00,  0x00,  0x07,  0xff,  0xe7,
0xfe,  0x00,  0x00,  0x1f,  0xf0,  0x00,  0xfe,  0x00,  0x00,  0x00,  0x0f,
0xe0,  0x00,  0x00,  0x7e,  0x00,  0x00,  0x00,  0x00,  0x01,  0xfc,  0x00,
0x00,  0x0f,  0xc0,  0x00,  0x00,  0x03,  0xff,  0x00,  0x00,  0x00,  0x1f,
0xe0,  0x00,  0x00,  0x00,  0x1f,  0xff,  0x03,  0xfe,  0x00,  0x00,  0x1f,
0xf0,  0x00,  0xfe,  0x00,  0x00,  0x00,  0x0f,  0xc0,  0x00,  0x00,  0x7e,
0x00,  0x00,  0x00,  0x00,  0x01,  0xf8,  0x00,  0x00,  0x0f,  0xc0,  0x00,
0x00,  0x07,  0xfc,  0x00,  0x00,  0x00,  0x1f,  0xe0,  0x00,  0x00,  0x00,
0x3f,  0xf8,  0x00,  0x7f,  0x00,  0x00,  0x1f,  0xf0,  0x00,  0xfe,  0x00,
0x00,  0x00,  0x1f,  0xc0,  0x00,  0x00,  0x7e,  0x00,  0x00,  0x00,  0x00,
0x03,  0xf8,  0x00,  0x00,  0x0f,  0xc0,  0x00,  0x00,  0x3f,  0xf0,  0x00,
0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0x00,  0x3f,  0xc0,  0x00,  0x3f,
0x80,  0x00,  0x1f,  0xf0,  0x00,  0xfe,  0x00,  0x00,  0x00,  0x1f,  0x80,
0x00,  0x00,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x03,  0xf0,  0x00,  0x00,
0x0f,  0xe0,  0x00,  0x00,  0x7f,  0xe0,  0x00,  0x3f,  0xe0,  0x3f,  0x80,
0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x3f,  0x80,  0x00,  0x1f,  0xf0,
0x00,  0xfe,  0x00,  0x00,  0x00,  0x1f,  0x80,  0x00,  0x00,  0x7f,  0x00,
0x00,  0x00,  0x00,  0x03,  0xf0,  0x00,  0x00,  0x0f,  0xe0,  0x00,  0x01,
0xff,  0x00,  0x03,  0xff,  0xf8,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x3f,
0x80,  0x00,  0x1f,  0xc0,  0x00,  0x1f,  0xf0,  0x00,  0xfe,  0x00,  0x00,
0x00,  0x3f,  0x00,  0x00,  0x00,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x07,
0xe0,  0x00,  0x00,  0x0f,  0xe0,  0x00,  0x01,  0xfe,  0x00,  0x0f,  0xff,
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x0f,  0xf0,
0x00,  0x1f,  0xf0,  0x00,  0xfe,  0x00,  0x00,  0x00,  0x3f,  0x00,  0x00,
0x00,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x07,  0xe0,  0x00,  0x00,  0x0f,
0xe0,  0x00,  0x07,  0xfc,  0x00,  0x3f,  0xf8,  0x00,  0x7f,  0x00,  0x00,
0x00,  0x00,  0x3f,  0x80,  0x00,  0x0f,  0xf0,  0x00,  0x1f,  0xf0,  0x00,
0xfe,  0x00,  0x00,  0x00,  0xff,  0x00,  0x00,  0x00,  0x3f,  0x00,  0x00,
0x00,  0x00,  0x1f,  0xe0,  0x00,  0x00,  0x03,  0xe0,  0x00,  0x07,  0xf8,
0x00,  0xff,  0xc0,  0x00,  0x1f,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x80,
0x00,  0x01,  0xfc,  0x00,  0x1f,  0xf0,  0x00,  0xfe,  0x00,  0x00,  0x00,
0xf8,  0x00,  0x00,  0x00,  0x3f,  0x00,  0x00,  0x00,  0x00,  0x1f,  0x80,
0x00,  0x00,  0x03,  0xe0,  0x00,  0x0f,  0xf8,  0x00,  0xff,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0xfe,  0x00,
0x1f,  0xf0,  0x00,  0xfe,  0x00,  0x00,  0x03,  0xf8,  0x00,  0x00,  0x00,
0x3f,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0x03,  0xe0,
0x00,  0x0f,  0xc0,  0x03,  0xfe,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x3f,  0x80,  0x00,  0x00,  0xfe,  0x00,  0x1f,  0xf0,  0x00,  0xfc,
0x00,  0x00,  0x03,  0xf0,  0x00,  0x00,  0x00,  0x3f,  0x00,  0x00,  0x00,
0x00,  0x3e,  0x00,  0x00,  0x00,  0x03,  0xe0,  0x00,  0x0f,  0xc0,  0x03,
0xfc,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,
0x00,  0x7f,  0x00,  0x1f,  0xf0,  0x01,  0xfc,  0x00,  0x00,  0x03,  0xf0,
0x00,  0x00,  0x00,  0x3f,  0xc0,  0x00,  0x00,  0x00,  0x3e,  0x00,  0x00,
0x00,  0x03,  0xfc,  0x00,  0x0f,  0xc0,  0x07,  0xfc,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0x3f,  0x00,  0x1f,
0xf0,  0x01,  0xfc,  0x00,  0x00,  0x07,  0xf0,  0x00,  0x00,  0x00,  0x3f,
0xc0,  0x00,  0x00,  0x00,  0xfe,  0x00,  0x00,  0x00,  0x03,  0xfc,  0x00,
0x3f,  0x80,  0x07,  0xf0,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x3f,  0x80,  0x00,  0x00,  0x3f,  0xc0,  0x1f,  0xf0,  0x01,  0xfc,  0x00,
0x00,  0x07,  0xe0,  0x00,  0x00,  0x00,  0x07,  0xc0,  0x00,  0x00,  0x00,
0xfc,  0x00,  0x00,  0x00,  0x00,  0xfc,  0x00,  0x3f,  0x80,  0x07,  0xf0,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,
0x0f,  0xe0,  0x1f,  0xf0,  0x01,  0xfc,  0x00,  0x00,  0x0f,  0xe0,  0x00,
0x00,  0x00,  0x07,  0xc0,  0x00,  0x00,  0x01,  0xfc,  0x00,  0x00,  0x00,
0x00,  0xfc,  0x00,  0x3f,  0x80,  0x07,  0xf0,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0x03,  0xe0,  0x3f,  0xf0,
0x01,  0xfc,  0x00,  0x00,  0x0f,  0xc0,  0x00,  0x00,  0x00,  0x07,  0xc0,
0x00,  0x00,  0x01,  0xf8,  0x00,  0x00,  0x00,  0x00,  0xfc,  0x00,  0x7f,
0x80,  0x0f,  0xe3,  0xff,  0xff,  0xff,  0xff,  0x80,  0x00,  0x00,  0x3f,
0x80,  0x00,  0x00,  0x03,  0xf0,  0x3f,  0x80,  0x01,  0xfc,  0x00,  0x00,
0x0f,  0xc0,  0x00,  0x00,  0x00,  0x07,  0xf0,  0x00,  0x00,  0x01,  0xf8,
0x00,  0x00,  0x00,  0x00,  0xfe,  0x00,  0x7f,  0x00,  0x0f,  0xe3,  0xff,
0xff,  0xff,  0xff,  0xc0,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0x01,
0xfc,  0x3f,  0x80,  0x01,  0xfc,  0x00,  0x00,  0x3f,  0x00,  0x00,  0x00,
0x00,  0x07,  0xf0,  0x00,  0x00,  0x07,  0xe0,  0x00,  0x00,  0x00,  0x00,
0xfe,  0x00,  0x7f,  0x00,  0x0f,  0xe3,  0xff,  0xff,  0xff,  0xff,  0xc0,
0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0x00,  0xfc,  0x3f,  0x80,  0x01,
0xfc,  0x00,  0x00,  0x3f,  0x00,  0x00,  0x00,  0x00,  0x03,  0xf0,  0x00,
0x00,  0x07,  0xe0,  0x00,  0x00,  0x00,  0x00,  0x7e,  0x00,  0x7f,  0x00,
0x0f,  0xe3,  0xfc,  0x00,  0x00,  0x0f,  0xc0,  0x00,  0x00,  0x3f,  0x80,
0x00,  0x00,  0x00,  0xff,  0x3f,  0x80,  0x01,  0xfc,  0x00,  0x00,  0x7f,
0x00,  0x00,  0x00,  0x00,  0x03,  0xf0,  0x00,  0x00,  0x0f,  0xe0,  0x00,
0x00,  0x00,  0x00,  0x7e,  0x00,  0x7f,  0x00,  0x0f,  0xe3,  0xf0,  0x00,
0x00,  0x0f,  0xc0,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x00,  0x00,  0x3f,
0x3f,  0x80,  0x01,  0xfc,  0x00,  0x00,  0x7c,  0x00,  0x00,  0x00,  0x00,
0x03,  0xf8,  0x00,  0x00,  0x0f,  0xc0,  0x00,  0x00,  0x00,  0x00,  0x7f,
0x01,  0xfe,  0x00,  0x0f,  0xe3,  0xf0,  0x00,  0x00,  0x0f,  0xc0,  0x00,
0x00,  0x3f,  0x80,  0x00,  0x00,  0x00,  0x3f,  0xbf,  0x80,  0x01,  0xfc,
0x00,  0x00,  0x7c,  0x00,  0x00,  0x00,  0x00,  0x03,  0xf8,  0x00,  0x00,
0x0f,  0xc0,  0x00,  0x00,  0x00,  0x00,  0x7f,  0x01,  0xfe,  0x00,  0x0f,
0xe3,  0xf0,  0x00,  0x00,  0x0f,  0xe0,  0x00,  0x00,  0x1f,  0x80,  0x00,
0x00,  0x00,  0x1f,  0xbf,  0x80,  0x01,  0xfc,  0x00,  0x01,  0xf8,  0x00,
0x00,  0x00,  0x00,  0x01,  0xf8,  0x00,  0x00,  0x1f,  0x00,  0x00,  0x00,
0x00,  0x00,  0x3f,  0x01,  0xfe,  0x00,  0x0f,  0xe3,  0xf0,  0x00,  0x00,
0x07,  0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x00,  0x00,  0x00,  0x0f,  0xff,
0x80,  0x01,  0xfc,  0x00,  0x01,  0xf8,  0x00,  0x00,  0x00,  0x00,  0x01,
0xf8,  0x00,  0x00,  0x1f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x01,
0xfe,  0x00,  0x0f,  0xef,  0xf0,  0x00,  0x00,  0x07,  0xe0,  0x00,  0x00,
0x1f,  0xc0,  0x00,  0x7e,  0x00,  0x0f,  0xff,  0x80,  0x01,  0xfc,  0x00,
0x03,  0xf8,  0x00,  0x00,  0x00,  0x00,  0x01,  0xf8,  0x00,  0x00,  0x3f,
0x00,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x01,  0xfe,  0x00,  0x0f,  0xef,
0xf0,  0x00,  0x00,  0x07,  0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x03,  0xff,
0x00,  0x03,  0xff,  0x80,  0x01,  0xfc,  0x00,  0x03,  0xf0,  0x00,  0x00,
0x00,  0x00,  0x01,  0xfc,  0x00,  0x00,  0x3e,  0x00,  0x00,  0x00,  0x00,
0x00,  0x3f,  0x81,  0xfe,  0x00,  0x0f,  0xef,  0xfc,  0x00,  0x00,  0x07,
0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x03,  0xff,  0x00,  0x00,  0xff,  0x80,
0x01,  0xfc,  0x00,  0x03,  0xf0,  0x00,  0x00,  0x00,  0x00,  0x01,  0xfc,
0x00,  0x00,  0x3e,  0x00,  0x00,  0x00,  0x00,  0x00,  0x3f,  0x81,  0xfe,
0x00,  0x0f,  0xef,  0xff,  0xff,  0x00,  0x07,  0xe0,  0x00,  0x00,  0x1f,
0xc0,  0x03,  0xff,  0x80,  0x00,  0xff,  0x80,  0x01,  0xfc,  0x00,  0x0f,
0xf0,  0x00,  0x00,  0x00,  0x00,  0x00,  0xfc,  0x00,  0x01,  0xfe,  0x00,
0x00,  0x00,  0x00,  0x00,  0x1f,  0x81,  0xfe,  0x00,  0x0f,  0xff,  0xff,
0xff,  0x80,  0x07,  0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x03,  0xff,  0xc0,
0x00,  0x7f,  0x80,  0x01,  0xfc,  0x00,  0x0f,  0xc0,  0x00,  0x00,  0x00,
0x00,  0x00,  0xfc,  0x00,  0x01,  0xf8,  0x00,  0x00,  0x00,  0x00,  0x00,
0x1f,  0x81,  0xfe,  0x00,  0x0f,  0xf0,  0x00,  0x3f,  0x80,  0x07,  0xe0,
0x00,  0x00,  0x1f,  0xc0,  0x03,  0xff,  0xf0,  0x00,  0x7f,  0x80,  0x01,
0xfc,  0x00,  0x0f,  0xc0,  0x00,  0x00,  0x00,  0x00,  0x00,  0xfc,  0x00,
0x01,  0xf8,  0x00,  0x00,  0x00,  0x00,  0x00,  0x1f,  0x81,  0xff,  0x00,
0x07,  0xf0,  0x00,  0x3f,  0x80,  0x07,  0xe0,  0x00,  0x00,  0x1f,  0xc0,
0x03,  0xff,  0xf0,  0x00,  0x3f,  0x80,  0x01,  0xfc,  0x00,  0x1f,  0xc0,
0x00,  0x00,  0x7e,  0x00,  0x00,  0xff,  0x00,  0x03,  0xf8,  0x00,  0x00,
0x0f,  0xc0,  0x00,  0x1f,  0xe0,  0x7f,  0x00,  0x07,  0xf0,  0x00,  0x3f,
0x80,  0x07,  0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x03,  0xfe,  0xfc,  0x00,
0x1f,  0xf0,  0x01,  0xfc,  0x00,  0x1f,  0x80,  0x00,  0x07,  0xfe,  0x00,
0x00,  0xff,  0x00,  0x03,  0xf0,  0x00,  0x00,  0x7f,  0xc0,  0x00,  0x1f,
0xe0,  0x7f,  0x00,  0x07,  0xfc,  0x00,  0x3f,  0x80,  0x07,  0xe0,  0x00,
0x00,  0x1f,  0xc0,  0x03,  0xfe,  0x7e,  0x00,  0x1f,  0x80,  0x01,  0xfc,
0x00,  0x1f,  0x80,  0x00,  0xff,  0xfe,  0x00,  0x00,  0xff,  0x00,  0x03,
0xf0,  0x00,  0x1f,  0xff,  0xc0,  0x00,  0x1f,  0xe0,  0x7f,  0x00,  0x03,
0xfc,  0x00,  0x3f,  0x80,  0x07,  0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x03,
0xfe,  0x7f,  0x00,  0x00,  0x00,  0x01,  0xfc,  0x00,  0x3e,  0x00,  0x00,
0xff,  0xff,  0x80,  0x00,  0x3f,  0x00,  0x07,  0xe0,  0x00,  0x1f,  0xff,
0xf0,  0x00,  0x03,  0xe0,  0x3f,  0x80,  0x03,  0xfe,  0x00,  0x3f,  0x80,
0x07,  0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x03,  0xfe,  0x3f,  0xc0,  0x00,
0x00,  0x01,  0xfc,  0x00,  0x3e,  0x00,  0x07,  0xf8,  0x7f,  0x80,  0x00,
0x3f,  0x00,  0x07,  0xe0,  0x00,  0x7f,  0x8f,  0xf0,  0x00,  0x03,  0xe0,
0x3f,  0x80,  0x00,  0xff,  0xc0,  0x3f,  0x80,  0x07,  0xe0,  0x00,  0x00,
0x1f,  0xc0,  0x03,  0xfe,  0x0f,  0xc0,  0x00,  0x00,  0x01,  0xfc,  0x00,
0xfc,  0x00,  0x07,  0xe0,  0x1f,  0x80,  0x00,  0x3f,  0x00,  0x0f,  0xc0,
0x00,  0x7c,  0x03,  0xf0,  0x00,  0x03,  0xe0,  0x3f,  0xc0,  0x00,  0x3f,
0xf1,  0xff,  0x80,  0x07,  0xf0,  0x00,  0x00,  0x1f,  0xc0,  0x03,  0xfe,
0x03,  0xe0,  0x00,  0x00,  0x01,  0xfc,  0x00,  0xfc,  0x00,  0x07,  0xe0,
0x1f,  0x80,  0x00,  0x3f,  0x00,  0x0f,  0xc0,  0x00,  0x7c,  0x03,  0xf0,
0x00,  0x03,  0xe0,  0x0f,  0xc0,  0x00,  0x1f,  0xff,  0xff,  0x80,  0x01,
0xf0,  0x00,  0x00,  0x1f,  0xc0,  0x03,  0xfe,  0x03,  0xf0,  0x00,  0x00,
0x01,  0xfc,  0x03,  0xfc,  0x00,  0x0f,  0xe0,  0x1f,  0xc0,  0x00,  0x3f,
0x80,  0x7f,  0xc0,  0x01,  0xfc,  0x03,  0xf8,  0x00,  0x03,  0xf8,  0x0f,
0xf8,  0x00,  0x03,  0xff,  0xff,  0x80,  0x01,  0xf0,  0x00,  0x00,  0x1f,
0xc0,  0x03,  0xfe,  0x01,  0xfc,  0x00,  0x00,  0x01,  0xfc,  0x03,  0xf0,
0x00,  0x0f,  0xc0,  0x0f,  0xc0,  0x00,  0x3f,  0x80,  0x7e,  0x00,  0x01,
0xf8,  0x00,  0xf8,  0x00,  0x03,  0xf8,  0x07,  0xf8,  0x00,  0x00,  0x07,
0xff,  0x80,  0x01,  0xf0,  0x00,  0x00,  0x1f,  0xc0,  0x00,  0x7e,  0x00,
0xff,  0x00,  0x00,  0x01,  0xfc,  0x07,  0xf0,  0x00,  0x0f,  0xc0,  0x0f,
0xc0,  0x00,  0x0f,  0x80,  0xfe,  0x00,  0x01,  0xf8,  0x00,  0xf8,  0x00,
0x01,  0xf8,  0x01,  0xfc,  0x00,  0x00,  0x00,  0x00,  0x00,  0x07,  0xf0,
0x00,  0x00,  0x1f,  0xc0,  0x00,  0x7f,  0x00,  0x3f,  0x80,  0x00,  0x01,
0xfc,  0x07,  0xe0,  0x00,  0x1f,  0xc0,  0x0f,  0xc0,  0x00,  0x0f,  0xc0,
0xfc,  0x00,  0x03,  0xf8,  0x00,  0xf8,  0x00,  0x01,  0xfc,  0x01,  0xfe,
0x00,  0x00,  0x00,  0x00,  0x00,  0x0f,  0xf0,  0x00,  0x00,  0x1f,  0xc0,
0x00,  0x7f,  0x00,  0x1f,  0xc0,  0x00,  0x01,  0xfc,  0x0f,  0xe0,  0x00,
0x1f,  0x80,  0x0f,  0xc0,  0x00,  0x0f,  0xc1,  0xfc,  0x00,  0x03,  0xf0,
0x00,  0xf8,  0x00,  0x01,  0xfc,  0x00,  0xff,  0x00,  0x00,  0x00,  0x00,
0x00,  0x1f,  0xe0,  0x00,  0x00,  0x1f,  0xc0,  0x00,  0x7f,  0x00,  0x0f,
0xc0,  0x00,  0x01,  0xfc,  0x0f,  0xc0,  0x00,  0x3f,  0x80,  0x0f,  0xc0,
0x00,  0x07,  0xf1,  0xf8,  0x00,  0x07,  0xf0,  0x00,  0xf8,  0x00,  0x00,
0xfe,  0x00,  0x7f,  0xe0,  0x00,  0x00,  0x00,  0x00,  0x1f,  0xc0,  0x00,
0x00,  0x1f,  0xc0,  0x00,  0x7f,  0x00,  0x03,  0xe0,  0x00,  0x01,  0xfc,
0x1f,  0xc0,  0x00,  0x3f,  0x00,  0x03,  0xe0,  0x00,  0x3f,  0xf3,  0xf8,
0x00,  0x07,  0xe0,  0x00,  0x7e,  0x00,  0x03,  0xfe,  0x00,  0x3f,  0xf0,
0x00,  0x00,  0x00,  0x00,  0x7f,  0x80,  0x00,  0x00,  0x1f,  0xc0,  0x00,
0x7f,  0x00,  0x00,  0xfc,  0x00,  0x0f,  0xfc,  0x1f,  0xfe,  0x00,  0x3f,
0x00,  0x03,  0xe0,  0x01,  0xff,  0xc3,  0xff,  0xe0,  0x07,  0xe0,  0x00,
0x7e,  0x00,  0x3f,  0xfc,  0x00,  0x07,  0xf8,  0x00,  0x00,  0x00,  0x00,
0xfe,  0x00,  0x00,  0x00,  0x1f,  0xc0,  0x00,  0x3f,  0x00,  0x00,  0x7e,
0x00,  0x7f,  0xfc,  0x0f,  0xff,  0xfc,  0xff,  0x00,  0x03,  0xe0,  0x3f,
0xf0,  0x01,  0xff,  0xff,  0xdf,  0xe0,  0x00,  0x7e,  0x03,  0xfe,  0x00,
0x00,  0x03,  0xff,  0x00,  0x00,  0x00,  0x03,  0xf8,  0x00,  0x00,  0x00,
0x1f,  0xff,  0xff,  0xff,  0x00,  0x00,  0x3f,  0x07,  0xff,  0x00,  0x00,
0xff,  0xff,  0xff,  0x00,  0x03,  0xf0,  0xff,  0x00,  0x00,  0x0f,  0xff,
0xff,  0xe0,  0x00,  0x7f,  0x1f,  0xe0,  0x00,  0x00,  0x01,  0xff,  0xc0,
0x00,  0x00,  0x03,  0xf8,  0x00,  0x00,  0x00,  0x1f,  0xff,  0xff,  0xff,
0x80,  0x00,  0x3f,  0xff,  0xf0,  0x00,  0x00,  0x00,  0x3f,  0xf8,  0x00,
0x01,  0xff,  0xfc,  0x00,  0x00,  0x00,  0x07,  0xff,  0x80,  0x00,  0x3f,
0xff,  0x80,  0x00,  0x00,  0x00,  0xff,  0xfc,  0x00,  0x00,  0x7f,  0xf0,
0x00,  0x00,  0x00,  0x1f,  0xff,  0xff,  0xff,  0x00,  0x00,  0x1f,  0xff,
0x80,  0x00,  0x00,  0x00,  0x03,  0xf8,  0x00,  0x01,  0xff,  0xc0,  0x00,
0x00,  0x00,  0x00,  0x3f,  0x80,  0x00,  0x3f,  0xfc,  0x00,  0x00,  0x00,
0x00,  0x0f,  0xff,  0xff,  0xff,  0xff,  0xf0,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x03,  0xfe,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x01,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x3f,  0xe0,  0x00,  0x00,  0x00,  0x00,  0x03,  0xff,  0xff,
0xff,  0xff,  0xe0,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x03,  0xf8,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x7e,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x0f,  0xc0,
0x00,  0x00,  0x00,  0x00,  0x00,  0x0f,  0xff,  0xff,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
};

unsigned char naagpal[] =
{
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,
0x02,  0x00,  0x01,  0x02,  0x02,  0x01,  0x02,  0x02,  0x02,  0x04,  0x02,
0x02,  0x04,  0x02,  0x03,  0x04,  0x04,  0x03,  0x06,  0x04,  0x03,  0x06,
0x04,  0x04,  0x08,  0x04,  0x04,  0x08,  0x04,  0x05,  0x08,  0x06,  0x05,
0x0a,  0x06,  0x05,  0x0a,  0x06,  0x06,  0x0a,  0x06,  0x06,  0x0c,  0x06,
0x06,  0x0c,  0x08,  0x07,  0x0c,  0x08,  0x07,  0x0e,  0x08,  0x08,  0x0e,
0x08,  0x08,  0x0e,  0x08,  0x08,  0x10,  0x0a,  0x09,  0x10,  0x0a,  0x09,
0x10,  0x0a,  0x09,  0x12,  0x0a,  0x0a,  0x12,  0x0a,  0x0a,  0x12,  0x0c,
0x0a,  0x14,  0x0c,  0x0b,  0x14,  0x0c,  0x0b,  0x16,  0x0c,  0x0c,  0x16,
0x0c,  0x0c,  0x18,  0x0e,  0x0d,  0x18,  0x0e,  0x0d,  0x1a,  0x0e,  0x0e,
0x1c,  0x10,  0x0f,  0x1e,  0x10,  0x10,  0x20,  0x12,  0x11,  0x22,  0x12,
0x12,  0x24,  0x14,  0x13,  0x26,  0x14,  0x14,  0x2a,  0x16,  0x16,  0x2e,
0x16,  0x18,  0x30,  0x18,  0x19,  0x34,  0x1a,  0x1b,  0x3a,  0x1c,  0x1d,
0x3e,  0x1e,  0x1f,  0x3e,  0x20,  0x21,  0x3e,  0x20,  0x24,  0x3e,  0x22,
0x26,  0x3e,  0x24,  0x28,  0x3e,  0x26,  0x2a,  0x3e,  0x28,  0x2d,  0x3e,
0x2a,  0x2f,  0x3e,  0x2c,  0x31,  0x3e,  0x2c,  0x32,  0x3e,  0x2e,  0x34,
0x3e,  0x30,  0x35,  0x3e,  0x30,  0x36,  0x3e,  0x30,  0x37,  0x3e,  0x30,
0x37,  0x3e,  0x32,  0x38,  0x3e,  0x9f,  0x9f,  0x9f,  0xa2,  0xa2,  0xa2,
0xa5,  0xa5,  0xa5,  0xa8,  0xa8,  0xa8,  0xab,  0xab,  0xab,  0xae,  0xae,
0xae,  0xb1,  0xb1,  0xb1,  0xb4,  0xb4,  0xb4,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
};

unsigned char chardata[] = 
{
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x18,  0x18,  0x18,
0x18,  0x08,  0x00,  0x18,  0x00,  0x28,  0x28,  0x28,  0x00,  0x00,  0x00,
0x00,  0x00,  0x28,  0x7c,  0x28,  0x28,  0x28,  0x7c,  0x28,  0x00,  0x10,
0x7e,  0x40,  0x7e,  0x86,  0xfe,  0x10,  0x00,  0xe2,  0xa4,  0xe8,  0x10,
0x2e,  0x4a,  0x8e,  0x00,  0x38,  0x28,  0x7c,  0x44,  0xc4,  0xce,  0xfc,
0x00,  0x10,  0x10,  0x10,  0x00,  0x00,  0x00,  0x00,  0x00,  0x02,  0x04,
0x0c,  0x08,  0x0c,  0x04,  0x02,  0x00,  0x80,  0x40,  0x60,  0x20,  0x60,
0x40,  0x80,  0x00,  0x00,  0x54,  0x38,  0x6c,  0x38,  0x54,  0x00,  0x00,
0x00,  0x10,  0x10,  0x7c,  0x10,  0x10,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x18,  0x08,  0x00,  0x00,  0x00,  0x00,  0x38,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x18,  0x00,  0x04,
0x04,  0x08,  0x10,  0x20,  0x40,  0x40,  0x00,  0x7e,  0x42,  0x42,  0xc2,
0xc6,  0xc6,  0xfe,  0x00,  0x38,  0x00,  0x08,  0x18,  0x18,  0x18,  0x18,
0x00,  0x7c,  0x04,  0x7c,  0xc0,  0xc0,  0xc6,  0xfe,  0x00,  0x7e,  0x02,
0x1e,  0x06,  0x06,  0xc6,  0xfe,  0x00,  0x26,  0x22,  0x3e,  0x06,  0x06,
0x06,  0x06,  0x00,  0x7c,  0x40,  0x7c,  0x06,  0x06,  0xc6,  0xfe,  0x00,
0x78,  0x40,  0x7e,  0x46,  0xc6,  0xc6,  0xfe,  0x00,  0xfe,  0x86,  0x0c,
0x0c,  0x18,  0x18,  0x18,  0x00,  0x3c,  0x24,  0x7e,  0x42,  0xc2,  0xc6,
0xfe,  0x00,  0x7e,  0x42,  0x7e,  0x02,  0x06,  0xc6,  0xfe,  0x00,  0x00,
0x00,  0x18,  0x00,  0x18,  0x00,  0x00,  0x00,  0x00,  0x00,  0x18,  0x00,
0x18,  0x08,  0x00,  0x00,  0x0c,  0x18,  0x30,  0x60,  0x30,  0x18,  0x0c,
0x00,  0x00,  0x00,  0x7c,  0x00,  0x7c,  0x00,  0x00,  0x00,  0x60,  0x30,
0x18,  0x0c,  0x18,  0x30,  0x60,  0x00,  0x1c,  0x36,  0x66,  0x0c,  0x18,
0x00,  0x18,  0x00,  0x7c,  0x42,  0x1a,  0x2a,  0x2a,  0x2a,  0x1c,  0x00,
0x3c,  0x26,  0x7e,  0x42,  0xc2,  0xc6,  0xc6,  0x00,  0x78,  0x4c,  0x78,
0xcc,  0xc6,  0xc6,  0xfc,  0x00,  0x7e,  0x42,  0xc0,  0xc0,  0xc0,  0xc6,
0xfe,  0x00,  0x78,  0x4c,  0x42,  0xc2,  0xc6,  0xce,  0xfc,  0x00,  0x7e,
0x42,  0x40,  0xf0,  0xc0,  0xc6,  0xfe,  0x00,  0x7e,  0x42,  0x40,  0xf0,
0xc0,  0xc0,  0xc0,  0x00,  0x7e,  0x46,  0x40,  0xc0,  0xce,  0xc6,  0xfe,
0x00,  0x42,  0x42,  0x7e,  0xc2,  0xc2,  0xc2,  0xc6,  0x00,  0x08,  0x08,
0x08,  0x18,  0x18,  0x18,  0x18,  0x00,  0x02,  0x06,  0x06,  0x06,  0xc6,
0xc6,  0xfe,  0x00,  0x48,  0x50,  0x70,  0xd8,  0xcc,  0xc6,  0xc6,  0x00,
0x40,  0x40,  0x40,  0xc0,  0xc0,  0xc6,  0xfe,  0x00,  0x42,  0x66,  0x7e,
0xda,  0xc2,  0xc2,  0xc6,  0x00,  0x62,  0x62,  0x52,  0xda,  0xce,  0xc6,
0xc6,  0x00,  0x7e,  0x42,  0x42,  0xc2,  0xc6,  0xc6,  0xfe,  0x00,  0x7c,
0x42,  0x42,  0xfc,  0xc0,  0xc0,  0xc0,  0x00,  0x7e,  0x42,  0x42,  0xc2,
0xce,  0xc6,  0xfe,  0x00,  0x7c,  0x46,  0x7c,  0xd8,  0xc8,  0xce,  0xc6,
0x00,  0x7e,  0x40,  0x7e,  0x06,  0x06,  0xc6,  0xfe,  0x00,  0x7e,  0x08,
0x08,  0x18,  0x18,  0x18,  0x18,  0x00,  0x46,  0x46,  0xc2,  0xc2,  0xc2,
0xc2,  0xfe,  0x00,  0x46,  0x46,  0x62,  0x32,  0x36,  0x1c,  0x1c,  0x00,
0x46,  0x46,  0xc2,  0xd2,  0xfe,  0xee,  0xc6,  0x00,  0xc6,  0x6c,  0x38,
0x10,  0x38,  0x6c,  0xc6,  0x00,  0x46,  0x46,  0x7c,  0x38,  0x18,  0x18,
0x18,  0x00,  0x7e,  0x06,  0x3c,  0x30,  0xe0,  0xe6,  0xfe,  0x00,  0x38,
0x20,  0x20,  0x20,  0x20,  0x20,  0x38,  0x00,  0x40,  0x40,  0x20,  0x10,
0x08,  0x04,  0x04,  0x00,  0x38,  0x08,  0x08,  0x08,  0x08,  0x08,  0x38,
0x00,  0x10,  0x28,  0x28,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
0x00,  0x00,  0x00,  0x00,  0xfe,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,
0xff,  0xff,  0xff,  0x00,  
};
