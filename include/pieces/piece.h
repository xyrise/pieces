/* piece.h */
#ifndef PIECES_PIECE_H
#define PIECES_PIECE_H

/* Standard Library */
#include <stddef.h>
#include <stdint.h>


typedef struct Piece {
  struct Piece *prev;
  struct Piece *next;
  size_t start;
  size_t length;
  size_t linebreaks;
  uint8_t buffer_index;
} Piece;


#endif /* PIECES_PIECE_H */
