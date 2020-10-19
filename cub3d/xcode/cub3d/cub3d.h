#ifndef CUB3D_H
# define CUB3D_H

# include <mlx.h>
# include "game.h"
# include "libft.h"
# include "get_next_line.h"
# include "parse.h"
# include "validation.h"

typedef struct s_mlx {
	void *mlx_ptr;
	void *win_ptr;
	void *img_ptr;
	int *data;
	int bpp;
	int sl;
	int endian;
}t_mlx;

int set_cub(t_cub *cub, t_string_array *conf);

#endif
