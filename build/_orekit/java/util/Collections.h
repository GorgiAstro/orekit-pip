#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class NavigableSet;
    class ListIterator;
    class Set;
    class ArrayList;
    class Map;
    class SortedMap;
    class Deque;
    class Queue;
    class Comparator;
    class NavigableMap;
    class List;
    class Collection;
    class Enumeration;
    class Random;
    class SortedSet;
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
        mid_addAll_a00c98d8217baf6d,
        mid_asLifoQueue_9f73f2d28b5d6b70,
        mid_binarySearch_7cbd1ddfa4438102,
        mid_binarySearch_b88a52639c6e55a7,
        mid_checkedCollection_7a74f599673b5e5b,
        mid_checkedList_0a4333ca7f44e222,
        mid_checkedMap_45876c77b8b61f21,
        mid_checkedNavigableMap_a6b7432b3e115a6e,
        mid_checkedNavigableSet_42bf6d85aa6acb2b,
        mid_checkedQueue_761439f2de0a40d9,
        mid_checkedSet_bc3ebe89eb9c5695,
        mid_checkedSortedMap_42af903c48fb5f24,
        mid_checkedSortedSet_39eef03772a2d24c,
        mid_copy_29c3e061cbeaa98b,
        mid_disjoint_f95ed0d112bf7475,
        mid_emptyEnumeration_57aeac8743844cd2,
        mid_emptyIterator_fc7780bc5d5b73b0,
        mid_emptyList_e62d3bb06d56d7e3,
        mid_emptyListIterator_d6d68fe3f5974930,
        mid_emptyMap_810bed48fafb0b9a,
        mid_emptyNavigableMap_8dd7b68149ce41ea,
        mid_emptyNavigableSet_ea2f3a2f5483365c,
        mid_emptySet_7e8f11dd23d1142c,
        mid_emptySortedMap_8b7b83029e197aec,
        mid_emptySortedSet_7961e54fd3a47d94,
        mid_enumeration_f9ddb40f1905ce57,
        mid_fill_86290401b1892989,
        mid_frequency_254ef0cfa4cf35cc,
        mid_indexOfSubList_6fc0c7562beacd8b,
        mid_lastIndexOfSubList_6fc0c7562beacd8b,
        mid_list_a7cb9df2eba93e37,
        mid_max_878a15ed6ec12a43,
        mid_max_911e494f16ce93be,
        mid_min_878a15ed6ec12a43,
        mid_min_911e494f16ce93be,
        mid_nCopies_71a580e6260f357e,
        mid_newSetFromMap_32344ba4e91ff7ed,
        mid_replaceAll_4db7d8e46f6ab12a,
        mid_reverse_0e7c3032c7c93ed3,
        mid_reverseOrder_127b1bec8b0c3ae1,
        mid_reverseOrder_09cb371d3e63c195,
        mid_rotate_33800eba82168d94,
        mid_shuffle_0e7c3032c7c93ed3,
        mid_shuffle_b2644b8c08dd7f76,
        mid_singleton_4cf7e79da59e06aa,
        mid_singletonList_fc892452fc84d714,
        mid_singletonMap_dc0b43c0c4f53fdb,
        mid_sort_0e7c3032c7c93ed3,
        mid_sort_dcc1592c40bba7c7,
        mid_swap_fe3805aaf1ddc2d7,
        mid_synchronizedCollection_394fcc3577736ad2,
        mid_synchronizedList_d1fc3c05f458e1a3,
        mid_synchronizedMap_1219d2729927aa1d,
        mid_synchronizedNavigableMap_c9765687fb3f7b89,
        mid_synchronizedNavigableSet_f4bd145e522e4927,
        mid_synchronizedSet_ff856b24bc408e63,
        mid_synchronizedSortedMap_fe0c1860900c418e,
        mid_synchronizedSortedSet_9b7819f10cf58e34,
        mid_unmodifiableCollection_394fcc3577736ad2,
        mid_unmodifiableList_d1fc3c05f458e1a3,
        mid_unmodifiableMap_1219d2729927aa1d,
        mid_unmodifiableNavigableMap_c9765687fb3f7b89,
        mid_unmodifiableNavigableSet_f4bd145e522e4927,
        mid_unmodifiableSet_ff856b24bc408e63,
        mid_unmodifiableSortedMap_fe0c1860900c418e,
        mid_unmodifiableSortedSet_9b7819f10cf58e34,
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
