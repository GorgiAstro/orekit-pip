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

            class FixedPointTleGenerationAlgorithm : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_init$_3191da1710a102eb,
                mid_init$_fbd879df40651c29,
                mid_generate_d1897b6bbe0a4251,
                mid_generate_e9ff15b430a2bfc5,
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
