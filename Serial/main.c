#include "stdio.h"
#include "stdlib.h"

int main() {

  const int GRID_WIDTH = 15;
  const int GRID_HEIGHT = 15;

  //Create 2D structure with malloc
  char **grid = malloc(GRID_HEIGHT * sizeof(*grid));
  int i;
  for (int i = 0; i < GRID_HEIGHT; i++) {
  	grid[i] = malloc(GRID_WIDTH * sizeof(*grid[i]));
	if (*grid == NULL) {
		printf("malloc failed to allocate memory\n");
		exit(1);
	}
  }

  if (grid == NULL) {
	printf("malloc failed to allocate memory\n");  
	exit(1);
  }

  //Initialise with - using nested-for loop
  

  int gen = 0;

  display(gen, grid, GRID_WIDTH, GRID_HEIGHT);

  //Deallocate memory
  for (i = 0; i < GRID_HEIGHT; i++) {
  	free(grid[i]);
  }
  free(grid);
  
}
