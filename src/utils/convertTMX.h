////TODO: WRITE A TMX LOADER, THAT READS A TMX FILE AND SEPERATES IT INTO 20x15 (300) TILE SECTIONS.
//// THIS ASSUMES A 32x32 FOR USE WITH A 640x480 RESOLUTION.
//// DIRECTORY LIST

#ifndef CONVERT_TMX
#define CONVERT_TMX

class convert_tmx{
public:
	struct TMXMap {
		std::string version;
		std::string orientation;
		std::string render-order;
		int width-in-tiles;
		int height-in-tiles;
		int tilewidth;
		int tileheight;
		std::string backgroundcolor;
	};
}

#endif /* CONVERT_TMX */
