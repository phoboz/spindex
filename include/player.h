#ifndef _PLAYER_H
#define _PLAYER_H

#include "character.h"
#include "enemy.h"
#include "bullet.h"

#define PLAYER_HEIGHT			14
#define PLAYER_WIDTH			13
#define PLAYER_SCALE			0x40
#define PLAYER_SPEED			4
#define PLAYER_ANIM_TRESHOLD	2
#define PLAYER_MAX_FRAMES		2

#define PLAYER_BULLET_HEIGHT	8
#define PLAYER_BULLET_WIDTH		8
#define PLAYER_MAX_BULLETS		3
#define PLAYER_FIRE_THRESHOLD	8
#define PLAYER_BULLET_SPEED		5


struct player
{
	struct character ch;
	unsigned int fire_dir;
	unsigned int counter;
	struct bullet bullet[PLAYER_MAX_BULLETS];
};


void init_player(
	struct player *player,
	signed int y,
	signed int x
	);

void set_dir_player(
	struct player *player,
	unsigned int dir
	);

void move_player(
	struct player *player
	);

unsigned int interaction_enemies_player(
	struct player *player,
	unsigned int num_enemies,
	struct enemy *enemies
	);

void draw_player(
	struct player *player
	);

#endif
