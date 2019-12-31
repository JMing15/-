#include <vector>
using namespace std;

bool searchWord(vector<vector<char>>& board, string word, int index, int x, int y, vector<vector<bool>> &visited);

vector<vector<int>> dir = {
	{ -1,0 },
	{ 0,1 },
	{ 1,0 },
	{ 0,-1 }
};

bool exist(vector<vector<char>>& board, string word) {
	vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),false));

	for (int row = 0; row < board.size(); row++)
	{
		for (int col = 0; col < board[row].size(); col++)
		{
			if (searchWord(board, word, 0, row, col, visited))
				return true;
		}
	}
	return false;
}

bool isInBoard(vector<vector<char>>& board, int x, int y)
{
	return x >= 0 && x < board.size() && y >= 0 && y < board[x].size();
}

bool searchWord(vector<vector<char>>& board, string word, int index, int x, int y, vector<vector<bool>> &visited)
{
	if (index == word.length() - 1)
	{
		return board[x][y] == word[index];
	}

	if (board[x][y] == word[index])
	{
		visited[x][y] = true;
		for (int i = 0; i < 4; i++)
		{
			int dx = x + dir[i][0];
			int dy = y + dir[i][1];
			if (isInBoard(board, dx, dy) && !visited[dx][dy] && searchWord(board, word, index + 1, dx, dy, visited))
			{
				return true;
			}

		}
		visited[x][y] = false;
	}
	return false;
}

void main()
{
	vector<vector<char>> board = {
		{'A','B','C','E' },
		{'S','F','C','S' },
		{'A','D','E','E' }
	};
	bool res = exist(board, "ABCB");
}