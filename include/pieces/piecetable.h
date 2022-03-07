/* piecetable.h */
#ifndef PIECES_PIECETABLE_H
#define PIECES_PIECETABLE_H

/* Local */
#include "piece.h"


typedef struct PieceTable {
  Piece *head;
  Piece *tail;
} PieceTable;


#endif /* PIECES_PIECETABLE_H */
