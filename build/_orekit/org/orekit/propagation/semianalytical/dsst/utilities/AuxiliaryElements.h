#ifndef org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class AuxiliaryElements : public ::java::lang::Object {
             public:
              enum {
                mid_init$_62651a2d74687d26,
                mid_getAlpha_557b8123390d8d0c,
                mid_getB_557b8123390d8d0c,
                mid_getBeta_557b8123390d8d0c,
                mid_getC_557b8123390d8d0c,
                mid_getDate_7a97f7e149e79afb,
                mid_getEcc_557b8123390d8d0c,
                mid_getFrame_6c9bc0a928c56d4e,
                mid_getGamma_557b8123390d8d0c,
                mid_getH_557b8123390d8d0c,
                mid_getK_557b8123390d8d0c,
                mid_getKeplerianPeriod_557b8123390d8d0c,
                mid_getLM_557b8123390d8d0c,
                mid_getLf_557b8123390d8d0c,
                mid_getLv_557b8123390d8d0c,
                mid_getMeanMotion_557b8123390d8d0c,
                mid_getOrbit_71f9c54b5f482a59,
                mid_getP_557b8123390d8d0c,
                mid_getQ_557b8123390d8d0c,
                mid_getRetrogradeFactor_412668abc8d889e9,
                mid_getSma_557b8123390d8d0c,
                mid_getVectorF_f88961cca75a2c0a,
                mid_getVectorG_f88961cca75a2c0a,
                mid_getVectorW_f88961cca75a2c0a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AuxiliaryElements(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AuxiliaryElements(const AuxiliaryElements& obj) : ::java::lang::Object(obj) {}

              AuxiliaryElements(const ::org::orekit::orbits::Orbit &, jint);

              jdouble getAlpha() const;
              jdouble getB() const;
              jdouble getBeta() const;
              jdouble getC() const;
              ::org::orekit::time::AbsoluteDate getDate() const;
              jdouble getEcc() const;
              ::org::orekit::frames::Frame getFrame() const;
              jdouble getGamma() const;
              jdouble getH() const;
              jdouble getK() const;
              jdouble getKeplerianPeriod() const;
              jdouble getLM() const;
              jdouble getLf() const;
              jdouble getLv() const;
              jdouble getMeanMotion() const;
              ::org::orekit::orbits::Orbit getOrbit() const;
              jdouble getP() const;
              jdouble getQ() const;
              jint getRetrogradeFactor() const;
              jdouble getSma() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getVectorF() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getVectorG() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getVectorW() const;
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
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            extern PyType_Def PY_TYPE_DEF(AuxiliaryElements);
            extern PyTypeObject *PY_TYPE(AuxiliaryElements);

            class t_AuxiliaryElements {
            public:
              PyObject_HEAD
              AuxiliaryElements object;
              static PyObject *wrap_Object(const AuxiliaryElements&);
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
