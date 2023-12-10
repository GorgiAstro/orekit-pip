#ifndef java_util_Collections_H
#define java_util_Collections_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class NavigableSet;
    class SortedSet;
    class ListIterator;
    class Set;
    class Random;
    class ArrayList;
    class Map;
    class Enumeration;
    class Deque;
    class Queue;
    class SortedMap;
    class Comparator;
    class List;
    class Collection;
    class NavigableMap;
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
        mid_addAll_32a558846a04ff84,
        mid_asLifoQueue_df267a87ac5d76f8,
        mid_binarySearch_37d77edc27cecbe8,
        mid_binarySearch_0941c000ece4fde2,
        mid_checkedCollection_625d5ef9133cb259,
        mid_checkedList_1595bd32b51f1b46,
        mid_checkedMap_1c439d743e7da728,
        mid_checkedNavigableMap_8ca9b3737fb57066,
        mid_checkedNavigableSet_9be967eec45f6ac3,
        mid_checkedQueue_71f4d6974fba2f60,
        mid_checkedSet_eca6a28c4c66c1a3,
        mid_checkedSortedMap_e0f8487b57bd4f14,
        mid_checkedSortedSet_8a4eec20b2cee4e1,
        mid_copy_694ad53d6db8f702,
        mid_disjoint_967fecdee3fc80eb,
        mid_emptyEnumeration_44964b2b3d187632,
        mid_emptyIterator_035c6167e6569aac,
        mid_emptyList_a6156df500549a58,
        mid_emptyListIterator_4e1a823c948bf3a6,
        mid_emptyMap_d6753b7055940a54,
        mid_emptyNavigableMap_08b23a9584a26070,
        mid_emptyNavigableSet_edb7b61b9a16f086,
        mid_emptySet_e9e1a6780fe94297,
        mid_emptySortedMap_fe1bfbfb7989e0a9,
        mid_emptySortedSet_d01a04ddab6c7194,
        mid_enumeration_54438bae750053af,
        mid_fill_7844b00b76786b50,
        mid_frequency_9af878168154fa21,
        mid_indexOfSubList_5773ab16ebab45df,
        mid_lastIndexOfSubList_5773ab16ebab45df,
        mid_list_eb046a6d94a906c9,
        mid_max_9bf949dfb1f93000,
        mid_max_ea1dff2fe6bd78ac,
        mid_min_9bf949dfb1f93000,
        mid_min_ea1dff2fe6bd78ac,
        mid_nCopies_585b9ca2223b17d3,
        mid_newSetFromMap_21d597c6360c7172,
        mid_replaceAll_03305538a450a9ac,
        mid_reverse_65de9727799c5641,
        mid_reverseOrder_838794f9a43cf98e,
        mid_reverseOrder_3d37843ecb21deb5,
        mid_rotate_d1b8ec2000165cbf,
        mid_shuffle_65de9727799c5641,
        mid_shuffle_fdc2a20e0f422184,
        mid_singleton_161cf4838fdab35b,
        mid_singletonList_969dd6a242ef47c1,
        mid_singletonMap_b6ac13fbe4a379e1,
        mid_sort_65de9727799c5641,
        mid_sort_65e7f32ea466b204,
        mid_swap_22b5006692f20ec8,
        mid_synchronizedCollection_5c0bbab57d449f37,
        mid_synchronizedList_fa7c1e622bc91b53,
        mid_synchronizedMap_08202a898cbb39d5,
        mid_synchronizedNavigableMap_fbc9db42f2500457,
        mid_synchronizedNavigableSet_ba7ac142aa1efcf6,
        mid_synchronizedSet_e7f2554240752ebc,
        mid_synchronizedSortedMap_4b7196d39a0c3a88,
        mid_synchronizedSortedSet_3be2e650c5404fbb,
        mid_unmodifiableCollection_5c0bbab57d449f37,
        mid_unmodifiableList_fa7c1e622bc91b53,
        mid_unmodifiableMap_08202a898cbb39d5,
        mid_unmodifiableNavigableMap_fbc9db42f2500457,
        mid_unmodifiableNavigableSet_ba7ac142aa1efcf6,
        mid_unmodifiableSet_e7f2554240752ebc,
        mid_unmodifiableSortedMap_4b7196d39a0c3a88,
        mid_unmodifiableSortedSet_3be2e650c5404fbb,
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
