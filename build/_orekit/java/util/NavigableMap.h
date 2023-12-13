#ifndef java_util_NavigableMap_H
#define java_util_NavigableMap_H

#include "java/util/SortedMap.h"

namespace java {
  namespace util {
    class Map$Entry;
    class NavigableSet;
    class NavigableMap;
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
        mid_ceilingEntry_341cd1138db0914d,
        mid_ceilingKey_5804c890f94a02b6,
        mid_descendingKeySet_ea2f3a2f5483365c,
        mid_descendingMap_8dd7b68149ce41ea,
        mid_firstEntry_0eaee7bb6ea53007,
        mid_floorEntry_341cd1138db0914d,
        mid_floorKey_5804c890f94a02b6,
        mid_headMap_c34ad1b261346963,
        mid_headMap_5593cae0e8732851,
        mid_higherEntry_341cd1138db0914d,
        mid_higherKey_5804c890f94a02b6,
        mid_lastEntry_0eaee7bb6ea53007,
        mid_lowerEntry_341cd1138db0914d,
        mid_lowerKey_5804c890f94a02b6,
        mid_navigableKeySet_ea2f3a2f5483365c,
        mid_pollFirstEntry_0eaee7bb6ea53007,
        mid_pollLastEntry_0eaee7bb6ea53007,
        mid_subMap_a2a04c1f48ab1459,
        mid_subMap_4c86ea09a85e174e,
        mid_tailMap_c34ad1b261346963,
        mid_tailMap_5593cae0e8732851,
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
