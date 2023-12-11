#ifndef org_orekit_geometry_fov_AbstractFieldOfView_H
#define org_orekit_geometry_fov_AbstractFieldOfView_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        class FieldOfView;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        class AbstractFieldOfView : public ::java::lang::Object {
         public:
          enum {
            mid_getMargin_557b8123390d8d0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractFieldOfView(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractFieldOfView(const AbstractFieldOfView& obj) : ::java::lang::Object(obj) {}

          jdouble getMargin() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        extern PyType_Def PY_TYPE_DEF(AbstractFieldOfView);
        extern PyTypeObject *PY_TYPE(AbstractFieldOfView);

        class t_AbstractFieldOfView {
        public:
          PyObject_HEAD
          AbstractFieldOfView object;
          static PyObject *wrap_Object(const AbstractFieldOfView&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
