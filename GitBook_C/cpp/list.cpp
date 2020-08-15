#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include "list.h"
using namespace std;

int AstarCalculateSteps(Item state, Item target)
{
    int minimalSteps;
    if (calculateReverseOrder(&state) % 2 == calculateReverseOrder(&target) % 2)
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
                minimalSteps = closeList->item.deep;
                break;
            }
            else
                Expand(&(closeList->item), &openList, &closeList, &target, Astar);
        }

        /* clean up         */
        EmptyTheList(&openList);
        EmptyTheList(&closeList);
    }
    else
        minimalSteps = -1;

    return minimalSteps;
}

int AstarFindAllSolutions(Item state, Item target, int currentMethodNumber, FILE *fp)
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

    bool first = false;
    int minimalSteps = 0;

    while (ListIsEmpty(&openList) == false)
    {
        if (headInserted(&(openList->item), &closeList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }

        DeleteItem(&openList);

        if ((first == false) || (closeList->item.deep <= minimalSteps))
        {
            if (count(&(closeList->item), &target) == 0)
            {
                if (first == false)
                {
                    minimalSteps = closeList->item.deep;
                    first = true;
                }
                fprintf(fp, "Method %d: \n", currentMethodNumber);
                printf("Method %d: \n", currentMethodNumber++);
                display(&(closeList->item), fp);
            }
            else
                Expand(&(closeList->item), &openList, &closeList, &target, Astar);
        }
        else
            continue;
    }

    /* clean up         */
    EmptyTheList(&openList);
    EmptyTheList(&closeList);

    return currentMethodNumber;
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

    /* clean up         */
    EmptyTheList(&openList);
    EmptyTheList(&closeList);
}

bool Expand(Item *pItem, List *pOpenList, const List *pCloseList, const Item *pTarget, char method)
{
    bool boolFlag = false;
    char itemRow0, itemColumn0;
    getRowAndColumn(pItem, &itemRow0, &itemColumn0, 0);
    Item temp;
    if (itemRow0 - 1 >= 0)
    {
        temp = *pItem;
        temp.chessboard[itemRow0][itemColumn0] = temp.chessboard[itemRow0 - 1][itemColumn0];
        temp.chessboard[itemRow0 - 1][itemColumn0] = 0;
        temp.deep++;
        if (Traverse(pCloseList, &temp, count) == false)
        {
            boolFlag = true;
            update(&temp, pItem, pTarget, pOpenList, method);
        }
    }
    if (itemRow0 + 1 <= 2)
    {
        temp = *pItem;
        temp.chessboard[itemRow0][itemColumn0] = temp.chessboard[itemRow0 + 1][itemColumn0];
        temp.chessboard[itemRow0 + 1][itemColumn0] = 0;
        temp.deep++;
        if (Traverse(pCloseList, &temp, count) == false)
        {
            boolFlag = true;
            update(&temp, pItem, pTarget, pOpenList, method);
        }
    }
    if (itemColumn0 - 1 >= 0)
    {
        temp = *pItem;
        temp.chessboard[itemRow0][itemColumn0] = temp.chessboard[itemRow0][itemColumn0 - 1];
        temp.chessboard[itemRow0][itemColumn0 - 1] = 0;
        temp.deep++;
        if (Traverse(pCloseList, &temp, count) == false)
        {
            boolFlag = true;
            update(&temp, pItem, pTarget, pOpenList, method);
        }
    }
    if (itemColumn0 + 1 <= 2)
    {
        temp = *pItem;
        temp.chessboard[itemRow0][itemColumn0] = temp.chessboard[itemRow0][itemColumn0 + 1];
        temp.chessboard[itemRow0][itemColumn0 + 1] = 0;
        temp.deep++;
        if (Traverse(pCloseList, &temp, count) == false)
        {
            boolFlag = true;
            update(&temp, pItem, pTarget, pOpenList, method);
        }
    }
    return boolFlag;
}

char calculateReverseOrder(Item *pItem) //?ºâ°f§Ç©M
{
    char i, j, k, index, number, temp[8];
    k = number = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (pItem->chessboard[i][j] != 0)
            {
                temp[k] = pItem->chessboard[i][j];
                for (index = 0; index < k; index++)
                {
                    if (temp[index] > temp[k])
                        number++;
                }
                k++;
            }
        }
    }
    return number;
}

void update(Item *pItem, Item *father, const Item *pTarget, List *pOpenList, char method)
{
    setF(pItem, pTarget);
    pItem->parent = father;

    if (method == Astar)
    {
        if (AddItem(pItem, pOpenList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }
    }
    else if (method == BFS)
    {
        if (tailInserted(pItem, pOpenList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }
    }
    else if (method == DFS)
    {
        if (headInserted(pItem, pOpenList) == false)
        {
            fprintf(stderr, "Problem allocating memory\n\n");
            exit(EXIT_FAILURE);
        }
    }
}

char setF(Item *pItem, const Item *pTarget)
{
    char itemRow0, itemColumn0, targetRow0, targetColumn0, w;
    getRowAndColumn(pItem, &itemRow0, &itemColumn0, 0);
    getRowAndColumn(pTarget, &targetRow0, &targetColumn0, 0);
#if ValueFunction == 1
    w = count(pItem, pTarget);
    if (itemRow0 != targetRow0 || itemColumn0 != targetColumn0)
        w--;
#elif ValueFunction == 2
    char i, j, row, column;
    w = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (pItem->chessboard[i][j] != 0)
            {
                getRowAndColumn(pTarget, &row, &column, pItem->chessboard[i][j]);
                w += DIFF(row, i) + DIFF(column, j);
            }
        }
    }
#endif
    pItem->f = pItem->deep + w;
    return pItem->f;
}

char count(const Item *pItem, const Item *pTarget)
{
    char number = 0, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (pItem->chessboard[i][j] != pTarget->chessboard[i][j])
                number++;
        }
    }
    return number;
}

void getRowAndColumn(const Item *pItem, char *pRow0, char *pColumn0, char index)
{
    char i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (pItem->chessboard[i][j] == index)
            {
                *pRow0 = i;
                *pColumn0 = j;
            }
        }
    }
}

void display(const Item *pItem, FILE *fp)
{
    static int step;

    if (pItem->parent == NULL)
    {
        step = 0;
        printf("\tStep %d: \n", step);
        fprintf(fp, "\tStep %d: \n", step);
        showItem(pItem, fp);
        return;
    }
    if (pItem->parent->parent == NULL)
    {
        step = 1;
        printf("\tStep %d: \n", step);
        fprintf(fp, "\tStep %d: \n", step);
        showItem(pItem, fp);
        return;
    }
    else
    {
        display(pItem->parent, fp);
        printf("\tStep %d: \n", ++step);
        fprintf(fp, "\tStep %d: \n", step);
        showItem(pItem, fp);
        return;
    }
}

void showItem(const Item *pItem, FILE *fp)
{
    char i, j;

    for (i = 0; i < 3; i++) // ™]¥X¨ì©R¥O¦æ
    {
        putchar('\t');
        putchar('\t');
        for (j = 0; j < 3; j++)
            printf(" %1d", pItem->chessboard[i][j]);
        putchar('\n');
    }
    putchar('\n');

    for (i = 0; i < 3; i++) // ™]¥X¨ì¤å¥ó
    {
        putc('\t', fp);
        putc('\t', fp);
        for (j = 0; j < 3; j++)
            fprintf(fp, " %1d", pItem->chessboard[i][j]);
        putc('\n', fp);
    }
    putc('\n', fp);
}

bool input(Item *pItem)
{
    char index = 0, i, j, k;
    int ch[9];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &ch[index]);
            if (ch[index] >= 0 && ch[index] <= 8)
            {
                for (k = 0; k < index; k++)
                {
                    if (ch[k] == ch[index])
                    {
                        while (getchar() != '\n')
                            continue;
                        return false;
                    }
                }
                pItem->chessboard[i][j] = (char)ch[index];
                index++;
            }
            else
                return false;
        }
    }
    pItem->deep = 0;
    pItem->f = 0;
    pItem->parent = NULL;

    return true;
}
