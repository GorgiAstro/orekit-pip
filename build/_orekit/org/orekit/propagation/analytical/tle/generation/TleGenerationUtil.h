#ifndef org_orekit_propagation_analytical_tle_generation_TleGenerationUtil_H
#define org_orekit_propagation_analytical_tle_generation_TleGenerationUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class FieldKeplerianOrbit;
      class KeplerianOrbit;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class FieldTLE;
          class TLE;
        }
      }
    }
    namespace time {
      class TimeScale;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            class TleGenerationUtil : public ::java::lang::Object {
             public:
              enum {
                mid_newTLE_f4a6e7aed2e7f95b,
                mid_newTLE_3f916788236790e0,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TleGenerationUtil(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TleGenerationUtil(const TleGenerationUtil& obj) : ::java::lang::Object(obj) {}

              static ::org::orekit::propagation::analytical::tle::FieldTLE newTLE(const ::org::orekit::orbits::FieldKeplerianOrbit &, const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::time::TimeScale &);
              static ::org::orekit::propagation::analytical::tle::TLE newTLE(const ::org::orekit::orbits::KeplerianOrbit &, const ::org::orekit::propagation::analytical::tle::TLE &, jdouble, const ::org::orekit::time::TimeScale &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            extern PyType_Def PY_TYPE_DEF(TleGenerationUtil);
            extern PyTypeObject *PY_TYPE(TleGenerationUtil);

            class t_TleGenerationUtil {
            public:
              PyObject_HEAD
              TleGenerationUtil object;
              static PyObject *wrap_Object(const TleGenerationUtil&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
