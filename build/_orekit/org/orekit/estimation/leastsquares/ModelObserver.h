#ifndef org_orekit_estimation_leastsquares_ModelObserver_H
#define org_orekit_estimation_leastsquares_ModelObserver_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        class ModelObserver : public ::java::lang::Object {
         public:
          enum {
            mid_modelCalled_cc0ac39e38c56725,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ModelObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ModelObserver(const ModelObserver& obj) : ::java::lang::Object(obj) {}

          void modelCalled(const JArray< ::org::orekit::orbits::Orbit > &, const ::java::util::Map &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {
        extern PyType_Def PY_TYPE_DEF(ModelObserver);
        extern PyTypeObject *PY_TYPE(ModelObserver);

        class t_ModelObserver {
        public:
          PyObject_HEAD
          ModelObserver object;
          static PyObject *wrap_Object(const ModelObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
