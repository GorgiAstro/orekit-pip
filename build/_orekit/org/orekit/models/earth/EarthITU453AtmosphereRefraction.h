#ifndef org_orekit_models_earth_EarthITU453AtmosphereRefraction_H
#define org_orekit_models_earth_EarthITU453AtmosphereRefraction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      class AtmosphericRefractionModel;
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

        class EarthITU453AtmosphereRefraction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1ad26e8c8c0cd65b,
            mid_getRefraction_bf28ed64d6e8576b,
            mid_getTheta0_9981f74b2d109da6,
            mid_getThetaMin_9981f74b2d109da6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EarthITU453AtmosphereRefraction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EarthITU453AtmosphereRefraction(const EarthITU453AtmosphereRefraction& obj) : ::java::lang::Object(obj) {}

          EarthITU453AtmosphereRefraction(jdouble);

          jdouble getRefraction(jdouble) const;
          jdouble getTheta0() const;
          jdouble getThetaMin() const;
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
        extern PyType_Def PY_TYPE_DEF(EarthITU453AtmosphereRefraction);
        extern PyTypeObject *PY_TYPE(EarthITU453AtmosphereRefraction);

        class t_EarthITU453AtmosphereRefraction {
        public:
          PyObject_HEAD
          EarthITU453AtmosphereRefraction object;
          static PyObject *wrap_Object(const EarthITU453AtmosphereRefraction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
