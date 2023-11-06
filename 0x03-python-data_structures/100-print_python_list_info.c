#include <Python.h>
#include <stdio.h>
#include <object.h>
#include <listobject.h>

/**
 *  * print_py_list_info - function that prints basic info about Python lists
 *   * @list_obj: PyObject list
 *    *
 *     * Return: nothing
 */
void print_py_list_info(PyObject *list_obj)
{
	long int list_size = PyList_Size(list_obj);
	int i;
	PyListObject *list_ptr = (PyListObject *)list_obj;

	printf("[*] Size of the Python List = %li\n", list_size);
	printf("[*] Allocated = %li\n", list_ptr->allocated);
	for (i = 0; i < list_size; i++)
		printf("Element %i: %s\n", i, Py_TYPE(list_ptr->ob_item[i])->tp_name);
}

