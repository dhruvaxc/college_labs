#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int movecount = 1;
int g = 1, c;
struct board
{
    char box[3][3];
};
typedef struct board board;
void grid(board *b);
void move(board *b, int m);
int wincheck(board *b, int c);
int p2p();
int p2c_easy();
int computer_move_easy(board *b);
void grid_intialize(board *b);
int computer_move_hard(board *b);
int evaluate(board *b);
int minimax(board *b, int depth, int isComputer);
int p2c_hard();
int main()
{
    int i = 1, difficulty;
    while (i)
    {
        printf("Welcome to Tic Tac Toe!\n");
        printf("\nChoose Game Mode:\n1. Player vs Player\n2. Player vs Computer\nEnter choice (1 or 2): ");
        scanf("%d", &c);
        if (c == 2)
        {
            printf("\nChoose Difficulty Level:\n1. Easy\n2. Hard\nEnter choice (1 or 2): ");
            scanf("%d", &difficulty);
            if (difficulty == 1)
            {
                srand(time(0));
                p2c_easy();
            }
            else
                p2c_hard();
        }
        else
            p2p();
        printf("Do you want to play again? (1 for Yes / 0 for No): ");
        scanf("%d", &i);
        if (i == 1)
        {
            movecount = 1;
            g = 1, c;
        }
    }
    return 0;
}
void grid_intialize(board *b)
{
    int i, j, k = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b->box[i][j] = k + '0';
            k++;
        }
    }
    g = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", b->box[i][j]);
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("---+---+---\n");
    }
    printf("\n");
}
void grid(board *b)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %c ", b->box[i][j]);
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("---+---+---\n");
    }
    printf("\n");
}
void move(board *b, int m)
{
    int valid = 0;
    while (!valid)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (b->box[i][j] == m + '0')
                {
                    if (movecount % 2 != 0)
                        b->box[i][j] = '#';
                    else
                        b->box[i][j] = '@';
                    movecount++;
                    valid = 1;
                    return;
                }
            }
        }
        if (!valid)
        {
            printf("Invalid move! Try again.\n");
            if (movecount % 2 != 0)
                printf("Player 1's turn (#)\n");
            else
                printf("Player 2's turn (@)\n");
            scanf("%d", &m);
        }
    }
}
int wincheck(board *b, int d)
{
    char ch[9];
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ch[k] = b->box[i][j];
            k++;
        }
    }
    if ((ch[0] == ch[1] && ch[1] == ch[2] && ch[0] == '#') || (ch[3] == ch[4] && ch[4] == ch[5] && ch[3] == '#') || (ch[6] == ch[7] && ch[7] == ch[8] && ch[6] == '#') || (ch[0] == ch[3] && ch[3] == ch[6] && ch[0] == '#') || (ch[1] == ch[4] && ch[4] == ch[7] && ch[1] == '#') || (ch[2] == ch[5] && ch[5] == ch[8] && ch[2] == '#') || (ch[0] == ch[4] && ch[4] == ch[8] && ch[0] == '#') || (ch[2] == ch[4] && ch[4] == ch[6] && ch[2] == '#'))
    {
        if (d)
        {
            printf("Player 1 (#) wins!\n");
            return 1;
        }
        else
            return 1;
    }
    else if ((ch[0] == ch[1] && ch[1] == ch[2] && ch[0] == '@') || (ch[3] == ch[4] && ch[4] == ch[5] && ch[3] == '@') || (ch[6] == ch[7] && ch[7] == ch[8] && ch[6] == '@') || (ch[0] == ch[3] && ch[3] == ch[6] && ch[0] == '@') || (ch[1] == ch[4] && ch[4] == ch[7] && ch[1] == '@') || (ch[2] == ch[5] && ch[5] == ch[8] && ch[2] == '@') || (ch[0] == ch[4] && ch[4] == ch[8] && ch[0] == '@') || (ch[2] == ch[4] && ch[4] == ch[6] && ch[2] == '@'))
    {
        if (d)
        {
            if (c == 2)
                printf("Computer (@) wins!\n");
            else
                printf("Player 2 (@) wins!\n");
            return 1;
        }
        else
            return 2;
    }
    else if (movecount > 9)
    {
        if (d)
        {
            printf("It's a draw!\n");
            return 1;
        }
        else
            return 0;
    }
    return 0;
}
int p2p()
{
    board b;
    int m;
    grid_intialize(&b);
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
            printf("Player 1's turn (#)\n");
        else
            printf("Player 2's turn (@)\n");
        printf("Enter your move: ");
        scanf("%d", &m);
        move(&b, m);
        grid(&b);
        if (i > 5)
        {
            int w = wincheck(&b, 1);
            if (w)
                break;
        }
    }
    return 0;
}
int computer_move_easy(board *b)
{
    do
    {
        int n = rand() % 9 + 1, check = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (b->box[i][j] == n + '0')
                {
                    return n;
                }
            }
        }
    } while (1);
}
int p2c_easy()
{
    board b;
    int m;
    grid_intialize(&b);
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            printf("Player 1's turn (#)\n Enter your move: ");
            scanf("%d", &m);
        }
        else
        {
            m = computer_move_easy(&b);
        }
        move(&b, m);
        grid(&b);
        if (movecount >= 5)
        {
            int w = wincheck(&b, 1);
            if (w)
                break;
        }
    }
    return 0;
}
int evaluate(board *b)
{
    int result = wincheck(b, 0);
    if (result == 2)
        return +1;
    if (result == 1)
        return -1;
    return 0;
}
int minimax(board *b, int depth, int isComputer)
{
    int score = evaluate(b);
    if (score != 0 || movecount > 9)
        return score;
    if (isComputer)
    {
        int best = -999;
        for (int move = 1; move <= 9; move++)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (b->box[i][j] == move + '0')
                    {
                        b->box[i][j] = '@';
                        movecount++;
                        int val = minimax(b, depth + 1, 0);
                        b->box[i][j] = move + '0';
                        movecount--;
                        if (val > best)
                            best = val;
                    }
                }
            }
        }
        return best;
    }
    else
    {
        int best = 999;
        for (int move = 1; move <= 9; move++)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (b->box[i][j] == move + '0')
                    {
                        b->box[i][j] = '#';
                        movecount++;
                        int val = minimax(b, depth + 1, 1);
                        b->box[i][j] = move + '0';
                        movecount--;
                        if (val < best)
                            best = val;
                    }
                }
            }
        }
        return best;
    }
}
int computer_move_hard(board *b)
{
    int bestVal = -999;
    int bestMove = -1;
    for (int move = 1; move <= 9; move++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (b->box[i][j] == move + '0')
                {
                    b->box[i][j] = '@';
                    movecount++;
                    int moveVal = minimax(b, 0, 0);
                    b->box[i][j] = move + '0';
                    movecount--;
                    if (moveVal > bestVal)
                    {
                        bestMove = move;
                        bestVal = moveVal;
                    }
                }
            }
        }
    }
    return bestMove;
}
int p2c_hard()
{
    board b;
    int m;
    grid_intialize(&b);
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            printf("Player 1's turn (#)\n Enter your move: ");
            scanf("%d", &m);
        }
        else
        {
            m = computer_move_hard(&b);
        }
        move(&b, m);
        grid(&b);
        if (movecount >= 5)
        {
            int w = wincheck(&b, 1);
            if (w)
                break;
        }
    }
    return 0;
}