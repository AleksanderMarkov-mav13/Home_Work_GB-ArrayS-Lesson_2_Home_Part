**Задача 1**

Необходимо из заданного пользователем вектора удалить число X.

Как работает программа
1. Пользователь вводит с клавиатуры число n — размер вектора, который надо заполнять.
2. Пользователь вводит n целых чисел, которые заполняют вектор.
3. Пользователь вводит значение — X. X — удаляемое из вектора значение. Необходимо удалить из вектора все элементы, которые равны заданному значению.
4. В конце программы необходимо вывести итоговое состояние вектора.

Надо отметить, что в условиях задачи стояло, что для удаления элементов из вектора использована функция pop_back(). При этом - решение использует только один вектор.
Честно скажу - как так сделать, я не знаю. Спросил нейросети - тоже ответа не нашел.

**Задача 2**

С помощью списка инициализации задаётся вектор цен на продукты (дробными
числами). 

Таким же образом с помощью списка инициализации задаётся вектор покупок (в виде индексов), которые совершает человек. Необходимо вывести на экран итоговую стоимость покупок. 

*Вектор цен и вектор покупок можно задать напрямую в коде.*

**Задача 3**

Вам дали задание разработать хранилище для целочисленных значений во встраиваемой операционной системе. Такие системы работают в большей части техники, которая нас окружает: автомобилях, стиральных машинах, микроволновках, холодильниках. Только вот незадача: объём памяти этой системы очень небольшой, **поэтому в хранилище не может находиться более 20 элементов**.

В хранилище, являющееся вектором, с клавиатуры приходят целочисленные значения и помещаются один за другим.
При вводе «−1» с клавиатуры необходимо вывести всё содержимое хранилища (20 или менее элементов). 

**При выводе элементы должны быть в том порядке, в котором они добавлялись.**

Попробуйте написать максимально оптимизированное решение этой задачи, чтобы совершалось как можно меньше расширений и перемещений элементов внутри вектора.

**РЕАЛИЗОВАЛ** через подобие кольцевого буфера, используя флаг - переменную типа bool для индексации заполненности массива, а также 2 переменные для обозначения индексов для вставки элемента в массив, а также - для начала его вывода. 

*Был в восторге от своей изобретательности, пока не прочитал от chatgpt-4o-latest, как **можно было обойтись всего одним индексом...**


