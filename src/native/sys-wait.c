/*
 * <sys/wait.h> wrapper functions.
 *
 * Authors:
 *   Jonathan Pryor (jonpryor@vt.edu)
 *
 * Copyright (C) 2004 Jonathan Pryor
 */

#include <sys/types.h>
#include <sys/wait.h>

#include <glib.h>

#include "mph.h"
#include "map.h"

G_BEGIN_DECLS

int32_t
Mono_Posix_Syscall_WIFEXITED (int32_t status)
{
	return WIFEXITED (status);
}

int32_t
Mono_Posix_Syscall_WEXITSTATUS (int32_t status)
{
	return WEXITSTATUS (status);
}

int32_t
Mono_Posix_Syscall_WIFSIGNALED (int32_t status)
{
	return WIFSIGNALED (status);
}

int32_t
Mono_Posix_Syscall_WTERMSIG (int32_t status)
{
	return WTERMSIG (status);
}

int32_t
Mono_Posix_Syscall_WIFSTOPPED (int32_t status)
{
	return WIFSTOPPED (status);
}

int32_t
Mono_Posix_Syscall_WSTOPSIG (int32_t status)
{
	return WSTOPSIG (status);
}

G_END_DECLS

/*
 * vim: noexpandtab
 */
