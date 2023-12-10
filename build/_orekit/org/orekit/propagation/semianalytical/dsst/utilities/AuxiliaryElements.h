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
    namespace orbits {
      class Orbit;
    }
    namespace time {
      class AbsoluteDate;
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
                mid_init$_e04fbc6bf56fc718,
                mid_getAlpha_456d9a2f64d6b28d,
                mid_getB_456d9a2f64d6b28d,
                mid_getBeta_456d9a2f64d6b28d,
                mid_getC_456d9a2f64d6b28d,
                mid_getDate_aaa854c403487cf3,
                mid_getEcc_456d9a2f64d6b28d,
                mid_getFrame_c8fe21bcdac65bf6,
                mid_getGamma_456d9a2f64d6b28d,
                mid_getH_456d9a2f64d6b28d,
                mid_getK_456d9a2f64d6b28d,
                mid_getKeplerianPeriod_456d9a2f64d6b28d,
                mid_getLM_456d9a2f64d6b28d,
                mid_getLf_456d9a2f64d6b28d,
                mid_getLv_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
                mid_getOrbit_551bf685780e3c1f,
                mid_getP_456d9a2f64d6b28d,
                mid_getQ_456d9a2f64d6b28d,
                mid_getRetrogradeFactor_f2f64475e4580546,
                mid_getSma_456d9a2f64d6b28d,
                mid_getVectorF_17a952530a808943,
                mid_getVectorG_17a952530a808943,
                mid_getVectorW_17a952530a808943,
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
