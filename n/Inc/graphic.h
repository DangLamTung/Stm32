char mari [] = {
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x7f, 0xfe, 0xbe, 0xbe,
		0xbf, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf3, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x7f, 0xff, 0xff, 0x9f, 0xe7, 0xff, 0xff, 0xcf,
		0xcf, 0xcf, 0xcf, 0xcf, 0xdf, 0x9f, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xf3, 0xf3, 0xf3, 0xf7, 0xe7, 0xe7, 0x0f, 0x1f, 0x1f, 0x1d, 0x3f, 0x1f, 0x7f, 0x7f, 0xf7,
		0xff, 0x5f, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xcf, 0xdf, 0xdf, 0x9f, 0x9f, 0x9f, 0x3f,
		0x3f, 0xff, 0xff, 0xff, 0xfd, 0xf9, 0xf9, 0xf3, 0xe3, 0xe7, 0xef, 0xfd, 0x00, 0x00, 0x00, 0x00,
		0xc0, 0x00, 0x00, 0x08, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x9f, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f,
		0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x03, 0x11, 0x1c, 0x1c, 0x1c, 0x1d, 0x1f, 0x3b,
		0x33, 0x63, 0xc3, 0x07, 0x0f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x07, 0x01, 0x00,
		0x00, 0x00, 0x00, 0x06, 0x01, 0x80, 0xc0, 0x80, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0xbf, 0xfc,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0x77, 0xf0, 0xe0, 0xc2, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf0, 0xf2, 0xf6, 0xfe,
		0xee, 0xe4, 0xe4, 0xc4, 0xc0, 0xe0, 0xe0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0x77, 0x81, 0x01, 0x03, 0x01,
		0x80, 0xe0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xe6, 0xff, 0xff, 0xff, 0xfe, 0xd8, 0xf0, 0xff, 0xff, 0x87, 0x07, 0x0f,
		0x0f, 0x0f, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07,
		0x01, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x01, 0x00, 0x00, 0x8c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
