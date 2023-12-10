#ifndef org_orekit_propagation_analytical_tle_generation_FixedPointTleGenerationAlgorithm_H
#define org_orekit_propagation_analytical_tle_generation_FixedPointTleGenerationAlgorithm_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          class FieldTLE;
          class TLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace time {
      class TimeScale;
    }
    namespace frames {
      class Frame;
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

            class FixedPointTleGenerationAlgorithm : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_init$_4de8786c851b2321,
                mid_init$_104673d0d4fb4f82,
                mid_generate_70bd59273b78d702,
                mid_generate_129bb6d4ed7ed841,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FixedPointTleGenerationAlgorithm(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FixedPointTleGenerationAlgorithm(const FixedPointTleGenerationAlgorithm& obj) : ::java::lang::Object(obj) {}

              static jdouble EPSILON_DEFAULT;
              static jint MAX_ITERATIONS_DEFAULT;
              static jdouble SCALE_DEFAULT;

              FixedPointTleGenerationAlgorithm();
              FixedPointTleGenerationAlgorithm(jdouble, jint, jdouble);
              FixedPointTleGenerationAlgorithm(jdouble, jint, jdouble, const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::Frame &);

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
            extern PyType_Def PY_TYPE_DEF(FixedPointTleGenerationAlgorithm);
            extern PyTypeObject *PY_TYPE(FixedPointTleGenerationAlgorithm);

            class t_FixedPointTleGenerationAlgorithm {
            public:
              PyObject_HEAD
              FixedPointTleGenerationAlgorithm object;
              static PyObject *wrap_Object(const FixedPointTleGenerationAlgorithm&);
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
