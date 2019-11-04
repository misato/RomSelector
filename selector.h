#ifndef _SELECTOR_H_
#define _SELECTOR_H_

#define CENTER 1
#define MAX_ROM_LIST 10
#define CONFIG_ROMS_DIR 0
#define CONFIG_EXTENSION_1 1
#define CONFIG_EXTENSION_2 2
#define CONFIG_EMULATOR 3
#define FILE_CONFIG "selector.cfg"
#define LINE_MAX 256

char** readConfig();
char* uppercase (char * cadena);
void drawSprite(SDL_Surface* imageSurface, SDL_Surface* screenSurface, int srcX, int srcY, int dstX, int dstY, int width, int height);
void drawText (SDL_Surface *image, SDL_Surface *screen, int x, int y, char *texto, int center);
void deleteArray(char listaRoms[MAX_ROM_LIST][256], int numRomList);
void drawRomNames(SDL_Surface *screen, SDL_Surface *font, char listaroms[MAX_ROM_LIST][256], int numRomList);
void drawArrow(SDL_Surface *screen, SDL_Surface *arrow, int x, int y);
int isRom(const struct dirent *nombre); //filter function


#endif
