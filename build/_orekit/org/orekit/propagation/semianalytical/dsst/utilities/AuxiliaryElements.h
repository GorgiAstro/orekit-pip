#ifndef org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H
#define org_orekit_propagation_semianalytical_dsst_utilities_AuxiliaryElements_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
    }
    namespace frames {
      class Frame;
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
                mid_init$_12b685cda2556bf0,
                mid_getAlpha_9981f74b2d109da6,
                mid_getB_9981f74b2d109da6,
                mid_getBeta_9981f74b2d109da6,
                mid_getC_9981f74b2d109da6,
                mid_getDate_80e11148db499dda,
                mid_getEcc_9981f74b2d109da6,
                mid_getFrame_cb151471db4570f0,
                mid_getGamma_9981f74b2d109da6,
                mid_getH_9981f74b2d109da6,
                mid_getK_9981f74b2d109da6,
                mid_getKeplerianPeriod_9981f74b2d109da6,
                mid_getLM_9981f74b2d109da6,
                mid_getLf_9981f74b2d109da6,
                mid_getLv_9981f74b2d109da6,
                mid_getMeanMotion_9981f74b2d109da6,
                mid_getOrbit_fb241cd44f6e41bc,
                mid_getP_9981f74b2d109da6,
                mid_getQ_9981f74b2d109da6,
                mid_getRetrogradeFactor_d6ab429752e7c267,
                mid_getSma_9981f74b2d109da6,
                mid_getVectorF_032312bdeb3f2f93,
                mid_getVectorG_032312bdeb3f2f93,
                mid_getVectorW_032312bdeb3f2f93,
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
