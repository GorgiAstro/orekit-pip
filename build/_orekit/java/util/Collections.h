#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class ListIterator;
    class Set;
    class ArrayList;
    class NavigableSet;
    class Map;
    class SortedMap;
    class Deque;
    class Queue;
    class Comparator;
    class NavigableMap;
    class SortedSet;
    class List;
    class Collection;
    class Random;
    class Enumeration;
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
        mid_addAll_399f3f3a9110259a,
        mid_asLifoQueue_a72112e8416981e2,
        mid_binarySearch_3ae2f81ebe76a5f8,
        mid_binarySearch_7d264bc14938cc7a,
        mid_checkedCollection_c4154f9faa06baf0,
        mid_checkedList_b7cd7f823eba48e8,
        mid_checkedMap_21e267a28dbbf561,
        mid_checkedNavigableMap_d56a1eb052efc678,
        mid_checkedNavigableSet_5d758ca38a44f667,
        mid_checkedQueue_7715709c65feb490,
        mid_checkedSet_9836c546c52be1f0,
        mid_checkedSortedMap_811ef709a1e68ae7,
        mid_checkedSortedSet_f4ea00e721d9b00b,
        mid_copy_a7e27987d82c9ab2,
        mid_disjoint_6c2df74e01149722,
        mid_emptyEnumeration_21566f230cac5c4a,
        mid_emptyIterator_4f613ccd2f803b4b,
        mid_emptyList_d751c1a57012b438,
        mid_emptyListIterator_7bb80a6d83d87d72,
        mid_emptyMap_dbcb8bbac6b35e0d,
        mid_emptyNavigableMap_93ffcad6c2bfa505,
        mid_emptyNavigableSet_915193d823a938b2,
        mid_emptySet_6b191a9b12c1004b,
        mid_emptySortedMap_329ce98de7adb29e,
        mid_emptySortedSet_815c7115fae241c1,
        mid_enumeration_c56d5c65b1ea0602,
        mid_fill_22b91be4bc7b6a0b,
        mid_frequency_341dc2d39eeb04d4,
        mid_indexOfSubList_a106cf709741c619,
        mid_lastIndexOfSubList_a106cf709741c619,
        mid_list_385576d86d02e1ea,
        mid_max_c34cfb85a6292bba,
        mid_max_63479742b6e84884,
        mid_min_c34cfb85a6292bba,
        mid_min_63479742b6e84884,
        mid_nCopies_123b467128195f8a,
        mid_newSetFromMap_89fe72a6310d0d4c,
        mid_replaceAll_bfe21376ce92f87b,
        mid_reverse_aa335fea495d60e0,
        mid_reverseOrder_44d5f0105a5559b7,
        mid_reverseOrder_855f0cb3fda1e69f,
        mid_rotate_26a46e5a5c0ee345,
        mid_shuffle_aa335fea495d60e0,
        mid_shuffle_d847501f0c28f181,
        mid_singleton_dd7b1a28b924e386,
        mid_singletonList_b82a310c35799ced,
        mid_singletonMap_77f04c24e79d294d,
        mid_sort_aa335fea495d60e0,
        mid_sort_04cb538d1d0e79fb,
        mid_swap_211b68baa6e80058,
        mid_synchronizedCollection_ca6e223ef3eef34f,
        mid_synchronizedList_a27502c31bd75a45,
        mid_synchronizedMap_f2600be6f3b6923e,
        mid_synchronizedNavigableMap_e89404ea35b31159,
        mid_synchronizedNavigableSet_acbf53b6d3caa164,
        mid_synchronizedSet_63f413923fe84378,
        mid_synchronizedSortedMap_3288916427f76e27,
        mid_synchronizedSortedSet_f4e5e60d3fd515d6,
        mid_unmodifiableCollection_ca6e223ef3eef34f,
        mid_unmodifiableList_a27502c31bd75a45,
        mid_unmodifiableMap_f2600be6f3b6923e,
        mid_unmodifiableNavigableMap_e89404ea35b31159,
        mid_unmodifiableNavigableSet_acbf53b6d3caa164,
        mid_unmodifiableSet_63f413923fe84378,
        mid_unmodifiableSortedMap_3288916427f76e27,
        mid_unmodifiableSortedSet_f4e5e60d3fd515d6,
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
