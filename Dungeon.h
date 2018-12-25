#include "stdfx.h"






struct Rect
{
	int x, y;
	int width, height;
};

class Dungeon
{
public:
	enum Tile
	{
		Unused = ' ',
		Floor = '.',
		Corridor = ',',
		Wall = '|',
		ClosedDoor = '+',
		OpenDoor = '-',
		UpStairs = '<',
		DownStairs = '>'
	};

	enum Direction
	{
		North,
		South,
		West,
		East,
		DirectionCount
	};

public:
	Dungeon(int width, int height)
		: _width(width)
		, _height(height)
		, _tiles(width * height, Unused)
		, _rooms()
		, _exits()
	{
	}

	void generate(int maxFeatures);
	

	void print(std::ostream& out);
	

private:
	char getTile(int x, int y) const;


	void setTile(int x, int y, char tile);

	bool createFeature();
	
		
	

	bool createFeature(int x, int y, Direction dir);

	bool makeRoom(int x, int y, Direction dir, bool firstRoom);

	bool makeCorridor(int x, int y, Direction dir);

	bool placeRect(const Rect& rect, char tile)	;

	bool placeObject(char tile);

private:
	int _width, _height;
	std::vector<char> _tiles;
	std::vector<Rect> _rooms; // комнаты для лестниц или монстров
	std::vector<Rect> _exits; // 4 стены комнаты

};