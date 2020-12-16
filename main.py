import ctypes
import sys

from numpy import double


def main(args):
    print("Нахождение расстояния между двумя точками земли, заданными широтой и долготой")
    lat1 = input("Введите широту 1 точки: ")
    lat1 = double(lat1)

    long1 = input("Введите долготу 1 точки: ")
    long1 = double(long1)

    lat2 = input("Введите широту 2 точки: ")
    lat2 = double(lat2)

    long2 = input("Введите долготу 2 точки: ")
    long2 = double(long2)

    print("Подгружаю библиотеку Distance.dll...", end="")
    lib = ctypes.CDLL("windows_library/Distance.dll")
    print("Готово")

    print("Расстояние:", lib.Distance(ctypes.c_longdouble(lat1), ctypes.c_longdouble(long1), ctypes.c_longdouble(lat2),
                                      ctypes.c_longdouble(long2)), "км")


if __name__ == "__main__":
    main(sys.argv)
