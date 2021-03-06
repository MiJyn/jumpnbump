/*
 * io.h
 * Copyright (C) 2016 "Anonymous Meerkat" <meerkatanonymous@gmail.com>
 *
 * This file is part of Jump'n'Bump.
 *
 * Jump'n'Bump is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Jump'n'Bump is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __JNB__IO_H__
#define __JNB__IO_H__

#include <stddef.h> /* size_t */

/* Compatibility */
#ifndef _MSC_VER
int filelength(int handle);
#endif

#ifndef   O_BINARY
#  define O_BINARY 0
#endif

#define JNB_IO_EXISTS_FILE  1
#define JNB_IO_EXISTS_DIR   2
#define JNB_IO_EXISTS_OTHER 3

int jnb_io_exists(char* filename);
int jnb_io_read(char* in_filename, char** out_data);

int jnb_io_write(char* filename, char* data, size_t data_size);
int jnb_io_mkdir(char* filename);


#endif
