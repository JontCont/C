#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct status
{
    char chessboard[3][3];
    int deep;
    int f;
    struct status *parent;
} Item;

typedef struct node
{
    Item item;
    struct node *next;
} Node;

typedef Node *List;

void DFSearch(Item state, Item target, int maxDepth, FILE *fp)
{
    List openList;
    List closeList;
    InitializeList(&openList);
    if (ListIsFull(&openList))
    {
        fprintf(stderr, "No Memory available! Bye!\n\n");
        exit(EXIT_FAILURE);
    }
    InitializeList(&closeList);
    if (ListIsFull(&closeList))
    {
        fprintf(stderr, "No Memory available! Bye!\n\n");
        exit(EXIT_FAILURE);
    }

    if (AddItem(&state, &openList) == false)
        if (AddItem(&state, &openList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }

    while (ListIsEmpty(&openList) == false)
    {
        if (headInserted(&(openList->item), &closeList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }

        DeleteItem(&openList);

        if (closeList->item.deep <= maxDepth)
        {
            if (count(&(closeList->item), &target) == 0)
            {
                display(&(closeList->item), fp);
                break;
            }
            else
                Expand(&(closeList->item), &openList, &closeList, &target, DFS);
        }
    }
}

void BFSearch(Item state, Item target, FILE *fp)
{
    List openList;
    List closeList;

    InitializeList(&openList);
    if (ListIsFull(&openList))
    {
        fprintf(stderr, "No Memory available! Bye!\n\n");
        exit(EXIT_FAILURE);
    }
    InitializeList(&closeList);
    if (ListIsFull(&closeList))
    {
        fprintf(stderr, "No Memory available! Bye!\n\n");
        exit(EXIT_FAILURE);
    }

    if (AddItem(&state, &openList) == false)
        if (AddItem(&state, &openList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }

    while (ListIsEmpty(&openList) == false)
    {
        if (headInserted(&(openList->item), &closeList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }

        DeleteItem(&openList);

        if (count(&(closeList->item), &target) == 0)
        {
            display(&(closeList->item), fp);
            break;
        }
        else
            Expand(&(closeList->item), &openList, &closeList, &target, BFS);
    }

    /* clean up         */
    EmptyTheList(&openList);
    EmptyTheList(&closeList);
}