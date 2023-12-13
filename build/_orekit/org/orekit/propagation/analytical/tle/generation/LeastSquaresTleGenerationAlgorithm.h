#ifndef org_orekit_propagation_analytical_tle_generation_LeastSquaresTleGenerationAlgorithm_H
#define org_orekit_propagation_analytical_tle_generation_LeastSquaresTleGenerationAlgorithm_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
          class FieldTLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class TimeScale;
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            class LeastSquaresTleGenerationAlgorithm : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_init$_44ed599e93e8a30c,
                mid_init$_2598b202d3117bc5,
                mid_generate_6e4ccfee7888f727,
                mid_generate_7dac79832039ea3a,
                mid_getRms_b74f83833fdad017,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeastSquaresTleGenerationAlgorithm(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeastSquaresTleGenerationAlgorithm(const LeastSquaresTleGenerationAlgorithm& obj) : ::java::lang::Object(obj) {}

              static jint DEFAULT_MAX_ITERATIONS;

              LeastSquaresTleGenerationAlgorithm();
              LeastSquaresTleGenerationAlgorithm(jint);
              LeastSquaresTleGenerationAlgorithm(jint, const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::Frame &);

              ::org::orekit::propagation::analytical::tle::FieldTLE generate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::analytical::tle::FieldTLE &) const;
              ::org::orekit::propagation::analytical::tle::TLE generate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::analytical::tle::TLE &) const;
              jdouble getRms() const;
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
            extern PyType_Def PY_TYPE_DEF(LeastSquaresTleGenerationAlgorithm);
            extern PyTypeObject *PY_TYPE(LeastSquaresTleGenerationAlgorithm);

            class t_LeastSquaresTleGenerationAlgorithm {
            public:
              PyObject_HEAD
              LeastSquaresTleGenerationAlgorithm object;
              static PyObject *wrap_Object(const LeastSquaresTleGenerationAlgorithm&);
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
