#ifndef _WAVE_H
#define _WAVE_H	

#include "enemy.h"

#define MAX_WAVES		1

struct path_element
{
	unsigned int num_steps;
	const struct enemy_path *path;
};

struct wave_element
{
	unsigned int treshold;
	signed int y;
	signed int x;
	unsigned int race_index;
	unsigned int path_index;
};

struct wave_def
{
	unsigned int num_elements;
	const struct wave_element *elements;
};

struct wave
{
	unsigned int wave_index;
	unsigned int counter;
	unsigned int element_index;
	unsigned int retry;
};

void init_wave(
	struct wave *wave
	);

unsigned int move_wave(
	struct wave *wave,
	unsigned int num_enemies,
	struct enemy *enemies
	);

extern const struct path_element enemy_paths[];
extern const struct wave_def waves[];

#endif
