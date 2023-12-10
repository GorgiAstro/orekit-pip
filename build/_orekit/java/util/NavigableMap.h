#ifndef java_util_NavigableMap_H
#define java_util_NavigableMap_H

#include "java/util/SortedMap.h"

namespace java {
  namespace util {
    class Map$Entry;
    class NavigableMap;
    class NavigableSet;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NavigableMap : public ::java::util::SortedMap {
     public:
      enum {
        mid_ceilingEntry_da79efd09d67f8b2,
        mid_ceilingKey_9facd1449e0950d3,
        mid_descendingKeySet_024b2fed0d07125f,
        mid_descendingMap_d71603ad1730c5c7,
        mid_firstEntry_42bc55cedc6db0ee,
        mid_floorEntry_da79efd09d67f8b2,
        mid_floorKey_9facd1449e0950d3,
        mid_headMap_ee1ff50116f0ffac,
        mid_headMap_7b1032670f57ee23,
        mid_higherEntry_da79efd09d67f8b2,
        mid_higherKey_9facd1449e0950d3,
        mid_lastEntry_42bc55cedc6db0ee,
        mid_lowerEntry_da79efd09d67f8b2,
        mid_lowerKey_9facd1449e0950d3,
        mid_navigableKeySet_024b2fed0d07125f,
        mid_pollFirstEntry_42bc55cedc6db0ee,
        mid_pollLastEntry_42bc55cedc6db0ee,
        mid_subMap_3d23d8a4bccdf58a,
        mid_subMap_0fcb4d861896163a,
        mid_tailMap_ee1ff50116f0ffac,
        mid_tailMap_7b1032670f57ee23,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NavigableMap(jobject obj) : ::java::util::SortedMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NavigableMap(const NavigableMap& obj) : ::java::util::SortedMap(obj) {}

      ::java::util::Map$Entry ceilingEntry(const ::java::lang::Object &) const;
      ::java::lang::Object ceilingKey(const ::java::lang::Object &) const;
      ::java::util::NavigableSet descendingKeySet() const;
      NavigableMap descendingMap() const;
      ::java::util::Map$Entry firstEntry() const;
      ::java::util::Map$Entry floorEntry(const ::java::lang::Object &) const;
      ::java::lang::Object floorKey(const ::java::lang::Object &) const;
      ::java::util::SortedMap headMap(const ::java::lang::Object &) const;
      NavigableMap headMap(const ::java::lang::Object &, jboolean) const;
      ::java::util::Map$Entry higherEntry(const ::java::lang::Object &) const;
      ::java::lang::Object higherKey(const ::java::lang::Object &) const;
      ::java::util::Map$Entry lastEntry() const;
      ::java::util::Map$Entry lowerEntry(const ::java::lang::Object &) const;
      ::java::lang::Object lowerKey(const ::java::lang::Object &) const;
      ::java::util::NavigableSet navigableKeySet() const;
      ::java::util::Map$Entry pollFirstEntry() const;
      ::java::util::Map$Entry pollLastEntry() const;
      ::java::util::SortedMap subMap(const ::java::lang::Object &, const ::java::lang::Object &) const;
      NavigableMap subMap(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedMap tailMap(const ::java::lang::Object &) const;
      NavigableMap tailMap(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NavigableMap);
    extern PyTypeObject *PY_TYPE(NavigableMap);

    class t_NavigableMap {
    public:
      PyObject_HEAD
      NavigableMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_NavigableMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const NavigableMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const NavigableMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
