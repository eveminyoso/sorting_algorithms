#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - Enumeration of card suits
 * @SPADE: Spade suits
 * #HEARTS: Hearts suits
 * @CLUB: Clubs suits
 * @DIAMOND: Diamond suits
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;
/**
 * struct card_s - playing card
 *
 * @value: value of the card
 * From "ACE" to "KING"
 * @kind: kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;
/**
 * struct deck_node_s -  Deck of the card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
