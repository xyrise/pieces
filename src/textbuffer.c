/* textbuffer.c */
#include "textbuffer.h"


/* Text buffer helpers */
int getPosOffset(
    size_t *const dest,
    TextBuffer const *const tb,
    TextBufferPos pos
) {
  // TODO
  return 0;
}

int getOffsetPos(
    TextBufferPos *const dest,
    TextBuffer const *const tb,
    size_t offset
) {
  // TODO
  return 0;
}

/* Create a text buffer */
TextBuffer *allocTextBuffer(
    TextBufferOpt const options,
    char const *const init_text
) {
  // TODO
  TextBuffer *result;
  return result;
}

int initTextBuffer(
    TextBuffer **const dest,
    TextBufferOpt const options,
    char const *const init_text
) {
  // TODO
  return 0;
}

/* Destroy a text buffer */
void freeTextBuffer(TextBuffer *const tb) {
  // TODO
}

int deinitTextBuffer(TextBuffer **const tb) {
  // TODO
  return 0;
}

/* Modify text buffer */
int insertText(
    TextBuffer *const tb,
    size_t offset,
    char const *const text
) {
  // TODO
  return 0;
}

int deleteText(TextBuffer *const tb, TextBufferSpan span) {
  // TODO
  return 0;
}

/* Modify text buffer state */
int undo(TextBuffer *const tb) {
  // TODO
  return 0;
}

int redo(TextBuffer *const tb) {
  // TODO
  return 0;
}

/* Read text buffer */
int findText(
    size_t *const dest,
    TextBuffer const *const tb,
    TextBufferSpan span,
    char const *const text
) {
  // TODO
  return 0;
}

int getText(char *const dest, size_t destsz, TextBuffer const *const tb) {
  // TODO
  return 0;
}

int getTextLine(
    char *const dest,
    size_t destsz,
    TextBuffer const *const tb,
    size_t line
) {
  // TODO
  return 0;
}

int getTextSpan(
    char *const dest,
    size_t destsz,
    TextBuffer const *const tb,
    TextBufferSpan span
) {
  // TODO
  return 0;
}
