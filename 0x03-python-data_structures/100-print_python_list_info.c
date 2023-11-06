#include <Python.h>
#include <stdio.h>
#include <object.h>
#include <listobject.h>

/**
 *  * print_python_list_info - function that prints basic info about Python
 *   * @p: Python Object list
 *     * Return: no
 */
void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int y;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (y = 0; y < size; y++)
		printf("Element %i: %s\n", y, Py_TYPE(obj->ob_item[y])->tp_name);
}
