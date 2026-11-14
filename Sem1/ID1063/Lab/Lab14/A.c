#include <stdio.h>
#include <string.h>

int func(int n_rows, char M[n_rows][21], char* w)
{
	int len = strlen(w);
	int dr[4] = {0, 0, 1, -1};
	int dc[4] = {1, -1, 0, 0};

	for(int d = 0; d < 4; d++)
	{
		for(int r = 0; r < n_rows; r++)
		{
			for(int c = 0; c < 20; c++)
			{
				int k = 0;

				while(k<len)
				{
					int rr = r + k*dr[d];
					int cc = c + k*dc[d];

					if(rr < 0 || rr >= n_rows || cc < 0 || cc >= 20) break;

					if(M[rr][cc] != w[k]) break;

					k++;
				}

				if(k == len)
				{
					printf("%d %d %d %d\n", r+1, c+1, r+1+(len-1)*dr[d], c + 1+(len-1)*dc[d]);
					return 1;
				}
			}
		}
	}

	printf("-1\n");
	return 0; 
}

int main()
{
    char w[100];
    scanf(" %s", w);
    
    char filename[100];
    scanf(" %99[^\n]", filename);
    
    FILE* fp = fopen(filename, "r");
    
    char M[100][21];
    
    char line[22];
	int n_rows = 0;
    while(fgets(line, sizeof(line), fp) != NULL)
    {
        line[strcspn(line, "\n")] = '\0';

		sscanf(line, "%20s", M[n_rows++]);
    }
    
    func(n_rows, M, w);
    
    fclose(fp);
    return 0;
}

