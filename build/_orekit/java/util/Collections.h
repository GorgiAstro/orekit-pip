#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class ListIterator;
    class Set;
    class SortedSet;
    class NavigableSet;
    class ArrayList;
    class Map;
    class NavigableMap;
    class Enumeration;
    class Deque;
    class Queue;
    class Comparator;
    class Random;
    class SortedMap;
    class List;
    class Collection;
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
        mid_addAll_22d601fe1483eb09,
        mid_asLifoQueue_6111f3cbeaaef8ef,
        mid_binarySearch_8c99c6992f085006,
        mid_binarySearch_74f362af58d5c781,
        mid_checkedCollection_5c66179242450ef2,
        mid_checkedList_8891d31196c4e400,
        mid_checkedMap_86f4c9a30101680f,
        mid_checkedNavigableMap_0e7e371f7c620677,
        mid_checkedNavigableSet_007da9c15ce101f0,
        mid_checkedQueue_c24def4bd68eaac8,
        mid_checkedSet_99752fad9765f965,
        mid_checkedSortedMap_7f682d869d181fe9,
        mid_checkedSortedSet_1f1d2c1e351438cf,
        mid_copy_6701c064a13f8d2f,
        mid_disjoint_5532fe2c8d564d7f,
        mid_emptyEnumeration_0dc02dfa0be4cd25,
        mid_emptyIterator_4d23511a9f0db098,
        mid_emptyList_2afa36052df4765d,
        mid_emptyListIterator_13ec0a4b5149ed65,
        mid_emptyMap_6f5a75ccd8c04465,
        mid_emptyNavigableMap_d71603ad1730c5c7,
        mid_emptyNavigableSet_024b2fed0d07125f,
        mid_emptySet_015730311a5bacdc,
        mid_emptySortedMap_9ad1cc5ce8934f3d,
        mid_emptySortedSet_917725130bbb61f1,
        mid_enumeration_eff0e7cbe41787fe,
        mid_fill_679800f8cb9e472a,
        mid_frequency_311f4e2af63ee3c3,
        mid_indexOfSubList_41cab71153f4cf87,
        mid_lastIndexOfSubList_41cab71153f4cf87,
        mid_list_2e43058ab6203036,
        mid_max_1697389b58adf6f8,
        mid_max_5d3363fd500698f8,
        mid_min_1697389b58adf6f8,
        mid_min_5d3363fd500698f8,
        mid_nCopies_d5717e9471bc1109,
        mid_newSetFromMap_54b88ae22a7a375f,
        mid_replaceAll_665b2a7de210113d,
        mid_reverse_de3e021e7266b71e,
        mid_reverseOrder_96e45e3694fbbb22,
        mid_reverseOrder_7a4cd21393022d6a,
        mid_rotate_03acd6a351f054ce,
        mid_shuffle_de3e021e7266b71e,
        mid_shuffle_ba3d89bfee65adec,
        mid_singleton_9fef958b6aa7109a,
        mid_singletonList_5d13575984be857e,
        mid_singletonMap_0230da4ce7f50443,
        mid_sort_de3e021e7266b71e,
        mid_sort_dc23f93ada84ec2c,
        mid_swap_6b38ae948ce5640f,
        mid_synchronizedCollection_e6702ab1f73fd997,
        mid_synchronizedList_667c8a8776700e01,
        mid_synchronizedMap_6d7943ade285151c,
        mid_synchronizedNavigableMap_7f5a42f111e974f6,
        mid_synchronizedNavigableSet_a117041fd682448e,
        mid_synchronizedSet_30cac86f76fb9232,
        mid_synchronizedSortedMap_fd1e3b4024be7eb6,
        mid_synchronizedSortedSet_da1dadc8982e9e6f,
        mid_unmodifiableCollection_e6702ab1f73fd997,
        mid_unmodifiableList_667c8a8776700e01,
        mid_unmodifiableMap_6d7943ade285151c,
        mid_unmodifiableNavigableMap_7f5a42f111e974f6,
        mid_unmodifiableNavigableSet_a117041fd682448e,
        mid_unmodifiableSet_30cac86f76fb9232,
        mid_unmodifiableSortedMap_fd1e3b4024be7eb6,
        mid_unmodifiableSortedSet_da1dadc8982e9e6f,
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
