#ifndef org_orekit_models_earth_EarthShape_H
#define org_orekit_models_earth_EarthShape_H

#include "org/orekit/bodies/BodyShape.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class ReferenceEllipsoid;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        class EarthShape : public ::org::orekit::bodies::BodyShape {
         public:
          enum {
            mid_getEllipsoid_eead5b864957d48b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EarthShape(jobject obj) : ::org::orekit::bodies::BodyShape(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EarthShape(const EarthShape& obj) : ::org::orekit::bodies::BodyShape(obj) {}

          ::org::orekit::models::earth::ReferenceEllipsoid getEllipsoid() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        extern PyType_Def PY_TYPE_DEF(EarthShape);
        extern PyTypeObject *PY_TYPE(EarthShape);

        class t_EarthShape {
        public:
          PyObject_HEAD
          EarthShape object;
          static PyObject *wrap_Object(const EarthShape&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
