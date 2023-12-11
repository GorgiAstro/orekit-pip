#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class SortedSet;
    class ListIterator;
    class Set;
    class ArrayList;
    class SortedMap;
    class Map;
    class Enumeration;
    class Deque;
    class Queue;
    class Random;
    class Comparator;
    class List;
    class Collection;
    class NavigableMap;
    class NavigableSet;
  }
  namespace lang {
    class Class;
    class Comparable;
    class Boolean;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Collections : public ::java::lang::Object {
     public:
      enum {
        mid_addAll_312109df22732464,
        mid_asLifoQueue_4ba47090cc24bb32,
        mid_binarySearch_4dfdbafbbb74210d,
        mid_binarySearch_cb6bae9610cacdd9,
        mid_checkedCollection_5ffb42d807960e0b,
        mid_checkedList_92bb2a928811fff8,
        mid_checkedMap_fde2959a0fd2e0e1,
        mid_checkedNavigableMap_9a0ef99c6d93c0e3,
        mid_checkedNavigableSet_94ada725f86c987d,
        mid_checkedQueue_3b76ab8ee00ad7bf,
        mid_checkedSet_397595b4201655db,
        mid_checkedSortedMap_8cfbd09c84ddd815,
        mid_checkedSortedSet_c36769466c4ae227,
        mid_copy_aaa4588ba4c2491b,
        mid_disjoint_b4bc5c35e2c22067,
        mid_emptyEnumeration_00b99a423cfc29b8,
        mid_emptyIterator_834a3801c426326d,
        mid_emptyList_0d9551367f7ecdef,
        mid_emptyListIterator_996d185ac031638c,
        mid_emptyMap_1e62c2f73fbdd1c4,
        mid_emptyNavigableMap_60eb75cca6401fd1,
        mid_emptyNavigableSet_0617a74a450b6c8d,
        mid_emptySet_2dfcbd371d62f4e1,
        mid_emptySortedMap_b067892b85d14890,
        mid_emptySortedSet_c6b6a992db588a51,
        mid_enumeration_93e113d05920dd66,
        mid_fill_b1dc0cb716875835,
        mid_frequency_27395695bb3e2bbc,
        mid_indexOfSubList_ac17115ae91d1a80,
        mid_lastIndexOfSubList_ac17115ae91d1a80,
        mid_list_d50ff558ec338e1c,
        mid_max_26b2432cdceeeb0d,
        mid_max_f80a2ec5baac7ec8,
        mid_min_26b2432cdceeeb0d,
        mid_min_f80a2ec5baac7ec8,
        mid_nCopies_3f42f87854a32fdd,
        mid_newSetFromMap_d70fd3b763be946c,
        mid_replaceAll_69b2f8b5cc1c7b6b,
        mid_reverse_4ccaedadb068bdeb,
        mid_reverseOrder_b0b551d4a54c7150,
        mid_reverseOrder_ed7a25767f280242,
        mid_rotate_7e65a9ed6be4bebc,
        mid_shuffle_4ccaedadb068bdeb,
        mid_shuffle_73f7c4d3dd3d3975,
        mid_singleton_6459512c177e7487,
        mid_singletonList_b025aa6e6332479e,
        mid_singletonMap_be1ef584905f235e,
        mid_sort_4ccaedadb068bdeb,
        mid_sort_58fb3b41926da277,
        mid_swap_07c8b0beae05e681,
        mid_synchronizedCollection_6472a4633751d554,
        mid_synchronizedList_77cbef3c12dc7892,
        mid_synchronizedMap_ca09431f94120606,
        mid_synchronizedNavigableMap_2261fb823f8ec1a0,
        mid_synchronizedNavigableSet_0eb4b8f748950275,
        mid_synchronizedSet_e57bce4d3d8abe90,
        mid_synchronizedSortedMap_b0b07f8392391208,
        mid_synchronizedSortedSet_9038dc6f3668bb05,
        mid_unmodifiableCollection_6472a4633751d554,
        mid_unmodifiableList_77cbef3c12dc7892,
        mid_unmodifiableMap_ca09431f94120606,
        mid_unmodifiableNavigableMap_2261fb823f8ec1a0,
        mid_unmodifiableNavigableSet_0eb4b8f748950275,
        mid_unmodifiableSet_e57bce4d3d8abe90,
        mid_unmodifiableSortedMap_b0b07f8392391208,
        mid_unmodifiableSortedSet_9038dc6f3668bb05,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collections(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collections(const Collections& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List *EMPTY_LIST;
      static ::java::util::Map *EMPTY_MAP;
      static ::java::util::Set *EMPTY_SET;

      static jboolean addAll(const ::java::util::Collection &, const JArray< ::java::lang::Object > &);
      static ::java::util::Queue asLifoQueue(const ::java::util::Deque &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &);
      static jint binarySearch(const ::java::util::List &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static ::java::util::Collection checkedCollection(const ::java::util::Collection &, const ::java::lang::Class &);
      static ::java::util::List checkedList(const ::java::util::List &, const ::java::lang::Class &);
      static ::java::util::Map checkedMap(const ::java::util::Map &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableMap checkedNavigableMap(const ::java::util::NavigableMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::NavigableSet checkedNavigableSet(const ::java::util::NavigableSet &, const ::java::lang::Class &);
      static ::java::util::Queue checkedQueue(const ::java::util::Queue &, const ::java::lang::Class &);
      static ::java::util::Set checkedSet(const ::java::util::Set &, const ::java::lang::Class &);
      static ::java::util::SortedMap checkedSortedMap(const ::java::util::SortedMap &, const ::java::lang::Class &, const ::java::lang::Class &);
      static ::java::util::SortedSet checkedSortedSet(const ::java::util::SortedSet &, const ::java::lang::Class &);
      static void copy(const ::java::util::List &, const ::java::util::List &);
      static jboolean disjoint(const ::java::util::Collection &, const ::java::util::Collection &);
      static ::java::util::Enumeration emptyEnumeration();
      static ::java::util::Iterator emptyIterator();
      static ::java::util::List emptyList();
      static ::java::util::ListIterator emptyListIterator();
      static ::java::util::Map emptyMap();
      static ::java::util::NavigableMap emptyNavigableMap();
      static ::java::util::NavigableSet emptyNavigableSet();
      static ::java::util::Set emptySet();
      static ::java::util::SortedMap emptySortedMap();
      static ::java::util::SortedSet emptySortedSet();
      static ::java::util::Enumeration enumeration(const ::java::util::Collection &);
      static void fill(const ::java::util::List &, const ::java::lang::Object &);
      static jint frequency(const ::java::util::Collection &, const ::java::lang::Object &);
      static jint indexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static jint lastIndexOfSubList(const ::java::util::List &, const ::java::util::List &);
      static ::java::util::ArrayList list(const ::java::util::Enumeration &);
      static ::java::lang::Object max$(const ::java::util::Collection &);
      static ::java::lang::Object max$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::lang::Object min$(const ::java::util::Collection &);
      static ::java::lang::Object min$(const ::java::util::Collection &, const ::java::util::Comparator &);
      static ::java::util::List nCopies(jint, const ::java::lang::Object &);
      static ::java::util::Set newSetFromMap(const ::java::util::Map &);
      static jboolean replaceAll(const ::java::util::List &, const ::java::lang::Object &, const ::java::lang::Object &);
      static void reverse(const ::java::util::List &);
      static ::java::util::Comparator reverseOrder();
      static ::java::util::Comparator reverseOrder(const ::java::util::Comparator &);
      static void rotate(const ::java::util::List &, jint);
      static void shuffle(const ::java::util::List &);
      static void shuffle(const ::java::util::List &, const ::java::util::Random &);
      static ::java::util::Set singleton(const ::java::lang::Object &);
      static ::java::util::List singletonList(const ::java::lang::Object &);
      static ::java::util::Map singletonMap(const ::java::lang::Object &, const ::java::lang::Object &);
      static void sort(const ::java::util::List &);
      static void sort(const ::java::util::List &, const ::java::util::Comparator &);
      static void swap(const ::java::util::List &, jint, jint);
      static ::java::util::Collection synchronizedCollection(const ::java::util::Collection &);
      static ::java::util::List synchronizedList(const ::java::util::List &);
      static ::java::util::Map synchronizedMap(const ::java::util::Map &);
      static ::java::util::NavigableMap synchronizedNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet synchronizedNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::Set synchronizedSet(const ::java::util::Set &);
      static ::java::util::SortedMap synchronizedSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet synchronizedSortedSet(const ::java::util::SortedSet &);
      static ::java::util::Collection unmodifiableCollection(const ::java::util::Collection &);
      static ::java::util::List unmodifiableList(const ::java::util::List &);
      static ::java::util::Map unmodifiableMap(const ::java::util::Map &);
      static ::java::util::NavigableMap unmodifiableNavigableMap(const ::java::util::NavigableMap &);
      static ::java::util::NavigableSet unmodifiableNavigableSet(const ::java::util::NavigableSet &);
      static ::java::util::Set unmodifiableSet(const ::java::util::Set &);
      static ::java::util::SortedMap unmodifiableSortedMap(const ::java::util::SortedMap &);
      static ::java::util::SortedSet unmodifiableSortedSet(const ::java::util::SortedSet &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Collections);
    extern PyTypeObject *PY_TYPE(Collections);

    class t_Collections {
    public:
      PyObject_HEAD
      Collections object;
      static PyObject *wrap_Object(const Collections&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
