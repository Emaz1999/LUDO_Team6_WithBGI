#pragma once
#include "Enums.h"
#include "box.h"
#include "Piece.h"
//#include "board.h"
class Player
{
private:

class Board;

class Player
{
private:
	LUDOCOLORS color;
	Box	*Ladder;
	Piece pieces[4];
  bool hasKilled;
	Board * m_board;
public:
	bool NoSix();
	bool hasNoInitialisedPiece();
	void CheckTurn();
	void move();
	bool hasInitilizedPiece();
	bool hasOnlyOnePieceOnBoard();
	bool isHomePieceSelected();
	void initilizePiece();
	void move();
	bool isPlayerWon();
	~Player()
	{

	}
};
