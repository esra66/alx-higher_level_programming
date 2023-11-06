#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <python3.4/Python.h>
#include <python3.4/object.h>
#include <python3.4/listobject.h>
#define PY_SSIZE_T_CLEAN

/**
 *  * print_python_list_info - Prints some info
 *   * @list_obj: A pointer
 */
void print_python_list_info(PyObject *list_obj)
{
	int index;
	int list_length = (int)PyList_Size(list_obj);

	printf("[*] Size of the Python List = %d\n", list_length);
	printf("[*] Allocated = %d\n", (int)((PyListObject *)list_obj)->allocated);
	for (index = 0; index < list_length; index++)
	{
		printf("Element %d: %s\n", index,
				Py_TYPE(PyList_GetItem(list_obj, index))->tp_name);
	}
}

