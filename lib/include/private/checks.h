/*
 * Copyright (C) 2014 Trevor Drake
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * file : lib/include/private/checks.h
 *
 */

#ifndef _a4d5d442_7d15_11e4_9366_5404a601fa9d
#define _a4d5d442_7d15_11e4_9366_5404a601fa9d
#include <private/api.h>
#include <private/bootimage.h>
#include <archive.h>
__LIBBOOTIMAGE_PRIVATE_API__ int check_output_name(char* name);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_structure(struct bootimage* bi);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_header(struct bootimage* bi);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_file_stat_size(struct bootimage* bi ,char* file_name);
__LIBBOOTIMAGE_PRIVATE_API__ int check_file_name(char* file_name);
__LIBBOOTIMAGE_PRIVATE_API__ int check_ramdisk_entryname( char* entry_name);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_ramdisk(struct bootimage* bi);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_kernel(struct bootimage* bi);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_file_read_magic(struct bootimage* bi,char* file_name);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_utils_structure(struct bootimage_utils* biu);
__LIBBOOTIMAGE_PRIVATE_API__ int check_bootimage_utils_file_read(struct bootimage_utils* biu,char* file_name);
__LIBBOOTIMAGE_PRIVATE_API__  int check_bootimage_utils_file_type(struct bootimage_utils* biu);
#define CPIO_FILE_NAME_MAX 1024
#endif
