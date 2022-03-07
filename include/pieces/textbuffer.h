/* textbuffer.h */
#ifndef PIECES_TEXTBUFFER_H
#define PIECES_TEXTBUFFER_H

/* Standard Library */
#include <stddef.h>
#include <stdint.h>

/* Local */
#include "piecetable.h"


typedef struct TextBuffer {
  PieceTable table;
} TextBuffer;

typedef struct TextBufferOpt {
  uint8_t normalize_line_endings;
  char const *line_ending;
} TextBufferOpt;

typedef struct TextBufferPos {
  size_t row;
  size_t col;
} TextBufferPos;

typedef struct TextBufferSpan {
  size_t offset;
  size_t length;
} TextBufferSpan;

/* Text buffer helpers */
int getPosOffset(size_t *const, TextBuffer const *const, TextBufferPos);
int getOffsetPos(TextBufferPos *const, TextBuffer const *const, size_t);

/* Create a text buffer */
TextBuffer *allocTextBuffer(TextBufferOpt const, char const *const);
int initTextBuffer(TextBuffer **const, TextBufferOpt const, char const *const);

/* Destroy a text buffer */
void freeTextBuffer(TextBuffer *const);
int deinitTextBuffer(TextBuffer **const);

/* Modify text buffer */
int insertText(TextBuffer *const, size_t, char const *const);
int deleteText(TextBuffer *const, TextBufferSpan);

/* Modify text buffer state */
int undo(TextBuffer *const);
int redo(TextBuffer *const);

/* Read text buffer */
int findText(
    size_t *const,
    TextBuffer const *const,
    TextBufferSpan,
    char const *const
);
int getText(char *const, size_t, TextBuffer const *const);
int getTextLine(char *const, size_t, TextBuffer const *const, size_t);
int getTextSpan(char *const, size_t, TextBuffer const *const, TextBufferSpan);


#endif /* PIECES_TEXTBUFFER_H */
