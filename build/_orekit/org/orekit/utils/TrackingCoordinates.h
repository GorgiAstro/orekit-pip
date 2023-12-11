#ifndef org_orekit_utils_TrackingCoordinates_H
#define org_orekit_utils_TrackingCoordinates_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class TrackingCoordinates : public ::java::lang::Object {
       public:
        enum {
          mid_init$_87096e3fd8086100,
          mid_getAzimuth_557b8123390d8d0c,
          mid_getElevation_557b8123390d8d0c,
          mid_getRange_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TrackingCoordinates(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TrackingCoordinates(const TrackingCoordinates& obj) : ::java::lang::Object(obj) {}

        TrackingCoordinates(jdouble, jdouble, jdouble);

        jdouble getAzimuth() const;
        jdouble getElevation() const;
        jdouble getRange() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TrackingCoordinates);
      extern PyTypeObject *PY_TYPE(TrackingCoordinates);

      class t_TrackingCoordinates {
      public:
        PyObject_HEAD
        TrackingCoordinates object;
        static PyObject *wrap_Object(const TrackingCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
