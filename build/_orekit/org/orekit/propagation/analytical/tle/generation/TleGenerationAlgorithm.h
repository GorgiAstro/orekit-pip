#ifndef org_orekit_propagation_analytical_tle_generation_TleGenerationAlgorithm_H
#define org_orekit_propagation_analytical_tle_generation_TleGenerationAlgorithm_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace analytical {
        namespace tle {
          class FieldTLE;
          class TLE;
        }
      }
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            class TleGenerationAlgorithm : public ::java::lang::Object {
             public:
              enum {
                mid_generate_bce44986dbf601d6,
                mid_generate_34f09d826252bcec,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TleGenerationAlgorithm(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TleGenerationAlgorithm(const TleGenerationAlgorithm& obj) : ::java::lang::Object(obj) {}

              ::org::orekit::propagation::analytical::tle::FieldTLE generate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::analytical::tle::FieldTLE &) const;
              ::org::orekit::propagation::analytical::tle::TLE generate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::analytical::tle::TLE &) const;
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
            extern PyType_Def PY_TYPE_DEF(TleGenerationAlgorithm);
            extern PyTypeObject *PY_TYPE(TleGenerationAlgorithm);

            class t_TleGenerationAlgorithm {
            public:
              PyObject_HEAD
              TleGenerationAlgorithm object;
              static PyObject *wrap_Object(const TleGenerationAlgorithm&);
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
