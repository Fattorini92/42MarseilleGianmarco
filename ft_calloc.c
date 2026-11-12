/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:13:16 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:13:17 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

In order to implement the two following functions, you will use malloc()

Depending on your current operating system, the calloc man page and the
function’s behavior may differ. The following instruction supersedes what
you can find in the man page: If nmemb or size is 0, then calloc() returns a
unique pointer value that can later be successfully passed to free()

SYNOPSIS
       #include <stdlib.h>

       void *malloc(size_t size);
       void free(void *_Nullable ptr);
       void *calloc(size_t n, size_t size);
       void *realloc(void *_Nullable ptr, size_t size);
       void *reallocarray(void *_Nullable ptr, size_t n, size_t size);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       reallocarray():
           Since glibc 2.29:
               _DEFAULT_SOURCE
           glibc 2.28 and earlier:
               _GNU_SOURCE

DESCRIPTION
   malloc()
       The  malloc()  function allocates size bytes and returns a pointer to the allocated memory.  The memory is not initialized.  If size
       is 0, then malloc() returns a unique pointer value that can later be successfully passed to free().  (See "Nonportable behavior" for
       portability issues.)

   free()
       The free() function frees the memory space pointed to by ptr, which must have been returned by a previous call to  malloc()  or  re‐
       lated  functions.   Otherwise,  or  if  ptr has already been freed, undefined behavior occurs.  If ptr is NULL, no operation is per‐
       formed.

   calloc()
       The calloc() function allocates memory for an array of n elements of size bytes each and returns a pointer to the allocated  memory.
       The memory is set to zero.  If n or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to
       free().

       If the multiplication of n and size would result in integer overflow, then calloc() returns an error.  By contrast, an integer over‐
       flow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be al‐
       located:

           malloc(n * size);

RETURN VALUE
       The  malloc(), calloc(), realloc(), and reallocarray() functions return a pointer to the allocated memory, which is suitably aligned
       for any type that fits into the requested size or less.  On error, these functions return NULL and set errno.  Attempting  to  allo‐
       cate more than PTRDIFF_MAX bytes is considered an error, as an object that large could cause later pointer subtraction to overflow.

       The free() function returns no value, and preserves errno.

       The  realloc() and reallocarray() functions return NULL if ptr is not NULL and the requested size is zero; this is not considered an
       error.  (See "Nonportable behavior" for portability issues.)  Otherwise, the returned pointer may be the same as ptr if the  alloca‐
       tion  was not moved (e.g., there was room to expand the allocation in-place), or different from ptr if the allocation was moved to a
       new address.  If these functions fail, the original block is left untouched; it is not freed or moved.
