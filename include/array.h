#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  void *data;
  size_t length;
  size_t capacity;
  size_t element_size;
} DynamicArray;

static int da_init(DynamicArray *array, size_t element_size,
                   size_t initial_capacity) {
  if (element_size == 0)
    return 0;

  array->data = malloc(element_size * initial_capacity);
  if (!array->data)
    return 0;

  array->length = 0;
  array->capacity = initial_capacity;
  array->element_size = element_size;

  return 1;
}

static void da_free(DynamicArray *array) {
  free(array->data);

  array->data = NULL;
  array->length = 0;
  array->capacity = 0;
  array->element_size = 0;
}

static int da_resize(DynamicArray *array, size_t new_capacity) {
  void *new_data = realloc(array->data, new_capacity * array->element_size);

  if (!new_data)
    return 0;

  array->data = new_data;
  array->capacity = new_capacity;

  return 1;
}

static int da_push(DynamicArray *array, const void *element) {
  if (array->length >= array->capacity) {
    size_t new_capacity = array->capacity == 0 ? 8 : array->capacity * 2;

    if (!da_resize(array, new_capacity))
      return 0;
  }

  memcpy((char *)array->data + array->length * array->element_size, element,
         array->element_size);

  array->length++;

  return 1;
}

static void *da_get(DynamicArray *array, size_t index) {
  if (index >= array->length)
    return NULL;

  return (char *)array->data + index * array->element_size;
}
