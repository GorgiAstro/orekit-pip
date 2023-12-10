#ifndef org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class AuxiliaryElements : public ::java::lang::Object {
             public:
              enum {
                mid_init$_cf2001232a340a40,
                mid_getAlpha_dff5885c2c873297,
                mid_getB_dff5885c2c873297,
                mid_getBeta_dff5885c2c873297,
                mid_getC_dff5885c2c873297,
                mid_getDate_85703d13e302437e,
                mid_getEcc_dff5885c2c873297,
                mid_getFrame_b86f9f61d97a7244,
                mid_getGamma_dff5885c2c873297,
                mid_getH_dff5885c2c873297,
                mid_getK_dff5885c2c873297,
                mid_getKeplerianPeriod_dff5885c2c873297,
                mid_getLM_dff5885c2c873297,
                mid_getLf_dff5885c2c873297,
                mid_getLv_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getOrbit_cde5690bfa4f9649,
                mid_getP_dff5885c2c873297,
                mid_getQ_dff5885c2c873297,
                mid_getRetrogradeFactor_570ce0828f81a2c1,
                mid_getSma_dff5885c2c873297,
                mid_getVectorF_d52645e0d4c07563,
                mid_getVectorG_d52645e0d4c07563,
                mid_getVectorW_d52645e0d4c07563,
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
