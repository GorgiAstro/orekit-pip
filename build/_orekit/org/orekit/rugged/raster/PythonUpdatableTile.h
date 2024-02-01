#ifndef org_orekit_rugged_raster_PythonUpdatableTile_H
#define org_orekit_rugged_raster_PythonUpdatableTile_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class UpdatableTile;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        class PythonUpdatableTile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_setElevation_e98d7b3e971b6087,
            mid_setGeometry_d690bb44b994cfa6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonUpdatableTile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonUpdatableTile(const PythonUpdatableTile& obj) : ::java::lang::Object(obj) {}

          PythonUpdatableTile();

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonUpdatableTile);
        extern PyTypeObject *PY_TYPE(PythonUpdatableTile);

        class t_PythonUpdatableTile {
        public:
          PyObject_HEAD
          PythonUpdatableTile object;
          static PyObject *wrap_Object(const PythonUpdatableTile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
