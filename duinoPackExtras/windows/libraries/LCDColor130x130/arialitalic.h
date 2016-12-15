/*

Arial Italic Font definition for Graphic class
Federico Lanza for Robotgroup

Apr, 2012

*/

#ifndef ARIALITALIC_H
#define ARIALITALIC_H

#include "fontdef.h"

#define ARIALITALIC_HEIGHT    12

uint8_t ArialItalic_Charmap[] = 
{
  0x00, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x50, 0x50, 0xF8, 0x50, 0xA0, 0xF8, 0xA0, 0xA0, 0x00, 0x00, 0x00, 
  0x08, 0x38, 0x54, 0x50, 0x30, 0x18, 0x28, 0xA8, 0x70, 0x20, 0x00, 0x00, 
  0x00, 0x64, 0xA4, 0xA8, 0xD0, 0x16, 0x2A, 0x2A, 0x4C, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x28, 0x28, 0x30, 0x50, 0x94, 0x88, 0x74, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 
  0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x80, 0x00, 
  0x00, 0x40, 0xE0, 0x40, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x20, 0xF8, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x50, 0x90, 0x90, 0x90, 0x90, 0xA0, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x60, 0xA0, 0x20, 0x20, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x10, 0x20, 0x40, 0x80, 0x80, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x50, 0x10, 0x20, 0x10, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x08, 0x10, 0x30, 0x50, 0x90, 0xF8, 0x20, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x70, 0x40, 0x60, 0x90, 0x10, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x70, 0x40, 0xA0, 0xD0, 0x90, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x50, 0x50, 0x60, 0x90, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x90, 0x90, 0x90, 0x70, 0x20, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x60, 0x80, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x10, 0x20, 0x40, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x3C, 0x62, 0x5D, 0xB5, 0xA5, 0xA5, 0xAE, 0x9E, 0xC1, 0x63, 0x3C, 
  0x00, 0x08, 0x14, 0x14, 0x24, 0x24, 0x7C, 0x44, 0x84, 0x00, 0x00, 0x00, 
  0x00, 0x70, 0x48, 0x48, 0x70, 0x88, 0x88, 0x88, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x44, 0x80, 0x80, 0x80, 0x84, 0x88, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x78, 0x44, 0x44, 0x44, 0x84, 0x84, 0x88, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x7C, 0x40, 0x40, 0x78, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 0x00, 
  0x00, 0x78, 0x40, 0x40, 0x78, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x44, 0x80, 0x80, 0x98, 0x88, 0x88, 0x78, 0x00, 0x00, 0x00, 
  0x00, 0x44, 0x44, 0x44, 0x7C, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0xA0, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x44, 0x48, 0x50, 0xA0, 0xE0, 0x90, 0x90, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x21, 0x23, 0x63, 0x55, 0x55, 0x5A, 0x9A, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x44, 0x44, 0x64, 0xA4, 0x94, 0x98, 0x88, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x44, 0x84, 0x84, 0x84, 0x84, 0x88, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x78, 0x48, 0x48, 0x88, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x44, 0x84, 0x84, 0x84, 0x84, 0x98, 0x78, 0x08, 0x00, 0x00, 
  0x00, 0x7C, 0x44, 0x44, 0x78, 0x90, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x48, 0x40, 0x20, 0x10, 0x88, 0x88, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x44, 0x44, 0x44, 0x44, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x84, 0x88, 0x88, 0x90, 0x90, 0xA0, 0xA0, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x88, 0x80, 0x99, 0x00, 0x99, 0x00, 0xAA, 0x00, 0xAA, 0x00, 0xCC, 0x00, 0xCC, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x42, 0x24, 0x28, 0x10, 0x10, 0x28, 0x48, 0x84, 0x00, 0x00, 0x00, 
  0x00, 0x84, 0x88, 0x50, 0x50, 0x60, 0x20, 0x40, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x7C, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0xF8, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0x00, 
  0x00, 0x80, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0x00, 
  0x00, 0x40, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x48, 0x08, 0x70, 0x90, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x40, 0x70, 0x48, 0x88, 0x88, 0xD0, 0xA0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 0x90, 0x80, 0x80, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x08, 0x08, 0x28, 0x58, 0x88, 0x90, 0x90, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x90, 0xF0, 0x80, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x40, 0xE0, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x58, 0x88, 0x90, 0x90, 0x70, 0x10, 0xE0, 0x00, 
  0x00, 0x40, 0x40, 0x58, 0x68, 0x48, 0x48, 0x90, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x00, 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x00, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0x00, 
  0x00, 0x40, 0x40, 0x48, 0x50, 0xA0, 0xE0, 0x90, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x76, 0x49, 0x49, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x78, 0x48, 0x48, 0x48, 0x90, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x48, 0x88, 0x88, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 0x48, 0x88, 0x88, 0xD0, 0xA0, 0x80, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x58, 0x88, 0x88, 0x90, 0x70, 0x10, 0x10, 0x00, 
  0x00, 0x00, 0x00, 0x50, 0x60, 0x40, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x48, 0x60, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0xE0, 0x40, 0x40, 0x40, 0x80, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x48, 0x48, 0x90, 0x90, 0x90, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x90, 0x90, 0x90, 0xA0, 0xA0, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x94, 0xB4, 0xB4, 0xD8, 0xD8, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x48, 0x50, 0x20, 0x20, 0x50, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x48, 0x48, 0x50, 0x50, 0x50, 0x20, 0x20, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x78, 0x08, 0x10, 0x20, 0x40, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x20, 0x20, 0x40, 0x80, 0x40, 0x40, 0x40, 0x40, 0x60, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 
  0x00, 0x60, 0x20, 0x20, 0x20, 0x10, 0x20, 0x20, 0x20, 0x40, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE8, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

struct CharDescriptor ArialItalic_Descriptors[] =
{
  {2, 0}, {3, 12}, {5, 24}, {6, 36}, {7, 48}, {6, 60},
  {1, 72}, {3, 84}, {3, 96}, {3, 108}, {5, 120}, {2, 132},
  {3, 144}, {1, 156}, {4, 168}, {4, 180}, {3, 192}, {4, 204},
  {4, 216}, {5, 228}, {4, 240}, {4, 252}, {4, 264}, {4, 276},
  {4, 288}, {2, 300}, {3, 312}, {4, 324}, {3, 336}, {4, 348},
  {4, 360}, {8, 372}, {6, 384}, {5, 396}, {6, 408}, {6, 420},
  {6, 432}, {5, 444}, {6, 456}, {6, 468}, {2, 480}, {4, 492},
  {6, 504}, {4, 516}, {8, 528}, {6, 540}, {6, 552}, {5, 564},
  {6, 576}, {6, 588}, {5, 600}, {5, 612}, {6, 624}, {6, 636},
  {9, 648}, {7, 672}, {6, 684}, {6, 696}, {3, 708}, {3, 720},
  {3, 732}, {3, 744}, {5, 756}, {1, 768}, {5, 780}, {5, 792},
  {4, 804}, {5, 816}, {4, 828}, {3, 840}, {5, 852}, {5, 864},
  {2, 876}, {3, 888}, {5, 900}, {2, 912}, {8, 924}, {5, 936},
  {5, 948}, {5, 960}, {5, 972}, {4, 984}, {5, 996}, {3, 1008},
  {5, 1020}, {4, 1032}, {6, 1044}, {5, 1056}, {5, 1068}, {5, 1080},
  {4, 1092}, {1, 1104}, {4, 1116}, {5, 1128}
};

#endif