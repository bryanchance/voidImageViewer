
// Copyright (C) 2017 David Carpenter
// 
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
// 
// See the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//
// load and sort ini files

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _ini_s ini_t;

ini_t *ini_open(const wchar_t *filename,const utf8_t *ascii_section);
void ini_get_int(ini_t *ini,const utf8_t *key,int *pint);
const utf8_t *ini_get_string(ini_t *ini,const utf8_t *key);
void ini_close(ini_t *ini);

#ifdef __cplusplus
}
#endif

