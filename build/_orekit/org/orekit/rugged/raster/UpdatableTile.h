#ifndef org_orekit_rugged_raster_UpdatableTile_H
#define org_orekit_rugged_raster_UpdatableTile_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        class UpdatableTile : public ::java::lang::Object {
         public:
          enum {
            mid_setElevation_e98d7b3e971b6087,
            mid_setGeometry_d690bb44b994cfa6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UpdatableTile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UpdatableTile(const UpdatableTile& obj) : ::java::lang::Object(obj) {}

          void setElevation(jint, jint, jdouble) const;
          void setGeometry(jdouble, jdouble, jdouble, jdouble, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        extern PyType_Def PY_TYPE_DEF(UpdatableTile);
        extern PyTypeObject *PY_TYPE(UpdatableTile);

        class t_UpdatableTile {
        public:
          PyObject_HEAD
          UpdatableTile object;
          static PyObject *wrap_Object(const UpdatableTile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
