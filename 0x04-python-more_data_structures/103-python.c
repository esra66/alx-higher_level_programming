#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p)
{
	Py_ssize_t size, i;
	PyObject *item;

	printf("[*] Python list info\n");
	size = Py_SIZE(p);
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	for (i = 0; i < size; i++)
	{
		item = PyList_GET_ITEM(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}

void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	char *data;

	printf("[.] bytes object info\n");

	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = PyBytes_GET_SIZE(p);
	data = PyBytes_AS_STRING(p);

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", data);
	size = size < 10 ? size + 1 : 10;
	printf("  first %ld bytes: ", size);

	for (i = 0; i < size; i++)
		printf("%02x%s", data[i] & 0xff, i + 1 < size ? " " : "\n");
}

